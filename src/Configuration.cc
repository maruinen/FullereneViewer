/*
 * Project: FullereneViewer
 * Version: 1.0
 * Copyright: (C) 2011-14 Dr.Sc.KAWAMOTO,Takuji (Ext)
 */

#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include "Configuration.h"
#include "OpenGLUtil.h"
#include "CarbonAllotrope.h"

#define LINE_LENGTH 1024

Configuration *configuration = 0;

struct Word {
  const char* word_top;
  int length;
  Word(const char* buffer);
  ~Word();
  bool next();
  bool equals_to(const char *ptr);
};

Word::Word(const char* buffer)
{
  word_top = buffer;
  length = 0;
  next();
}

Word::~Word()
{
}

bool Word::next()
{
  word_top += length;
  while (*word_top == ' ')
    ++word_top;
  const char* ptr = word_top;
  while (*ptr && (*ptr != ' ') && (*ptr != '\n'))
    ++ptr;
  length = ptr - word_top;
  if (*ptr == ' ')
    return true;
  else
    return false;
}

bool Word::equals_to(const char* ptr)
{
  if (strncmp(word_top, ptr, length) == 0)
    return true;
  else
    return false;
}

Configuration::Configuration(const char* home, const char* desktop)
{
  int length = strlen(home);
  assert(length > 0);
  p_configuration_file_name = home;
  if (p_configuration_file_name[length - 1] == '/')
    p_configuration_file_name.resize(length - 1);
  p_configuration_file_name.append_string(CONFIGURATION_FILE_NAME);

  length = strlen(desktop);
  assert(length > 0);
  p_working_folder_name = desktop;
  if (p_working_folder_name[length - 1] == '/')
    p_working_folder_name.resize(length - 1);
  p_working_folder_name.append_string(WORKING_FOLDER_NAME);

  p_povray_command_line = POVRAY_COMMAND_LINE;

  p_picture_quality = QUALITY_HIGH;
  p_motion_quality = QUALITY_HIGH;
  p_display_symmetry_axes = DISPLAY_NO_SYMMETRY_AXES;
  p_display_principal_component_axes = DISPLAY_NO_PRINCIPAL_COMPONENT_AXES;
}

Configuration::~Configuration()
{
}

static bool read_path(Word& word, char* path)
{
  if (word.next() == false)
    return false;
  if (word.equals_to("=") == false)
    return false;
  if (word.next())
    return false;
  strncpy(path, word.word_top, word.length);
  path[word.length] = '\0';
  return true;
}

static bool name_to_quality(Word& word, Quality& result)
{
  if (word.next() == false)
    return false;
  if (word.equals_to("=") == false)
    return false;
  if (word.next())
    return false;
  if (word.equals_to("high"))
    {
      result = QUALITY_HIGH;
      return true;
    }
  else if (word.equals_to("middle"))
    {
      result = QUALITY_MIDDLE;
      return true;
    }
  else if (word.equals_to("low"))
    {
      result = QUALITY_LOW;
      return true;
    }
  return false;
}

static bool name_to_dsa(Word& word, DisplaySymmetryAxes& result)
{
  if (word.next() == false)
    return false;
  if (word.equals_to("=") == false)
    return false;
  if (word.next())
    return false;
  if (word.equals_to("all"))
    {
      result = DISPLAY_ALL_SYMMETRY_AXES;
      return true;
    }
  else if (word.equals_to("major"))
    {
      result = DISPLAY_MAJOR_SYMMETRY_AXES;
      return true;
    }
  else if (word.equals_to("none"))
    {
      result = DISPLAY_NO_SYMMETRY_AXES;
      return true;
    }
  return false;
}

static bool name_to_dpca(Word& word, DisplayPrincipalComponentAxes& result)
{
  if (word.next() == false)
    return false;
  if (word.equals_to("=") == false)
    return false;
  if (word.next())
    return false;
  if (word.equals_to("all"))
    {
      result = DISPLAY_ALL_PRINCIPAL_COMPONENT_AXES;
      return true;
    }
  else if (word.equals_to("none"))
    {
      result = DISPLAY_NO_PRINCIPAL_COMPONENT_AXES;
      return true;
    }
  return false;
}

static bool name_to_dpc(Word& word, DrawPentagonCellophanes& result)
{
  if (word.next() == false)
    return false;
  if (word.equals_to("=") == false)
    return false;
  if (word.next())
    return false;
  if (word.equals_to("strong"))
    {
      result = DRAW_PENTAGON_STRONG_CELLOPHANES;
      return true;
    }
  else if (word.equals_to("tint"))
    {
      result = DRAW_PENTAGON_TINT_CELLOPHANES;
      return true;
    }
  else if (word.equals_to("mono"))
    {
      result = DRAW_PENTAGON_MONO_CHROME_CELLOPHANES;
      return true;
    }
  else if (word.equals_to("none"))
    {
      result = DRAW_PENTAGON_TRANSPARENT;
      return true;
    }
  return false;
}

void Configuration::load()
{
  FILE* fptr = fopen(p_configuration_file_name, "r");
  if (fptr == NULL)
    {
      save();
      return;
    }
  char buffer[LINE_LENGTH + 1];
  while (fgets(buffer, LINE_LENGTH, fptr))
    {
      Word word(buffer);
      if (word.equals_to("working_folder"))
        {
          read_path(word, p_working_folder_name);
        }
      else if (word.equals_to("povray_command_line"))
        {
          read_path(word, p_povray_command_line);
        }
      else if (word.equals_to("picture_quality"))
        {
          Quality quality;
          if (name_to_quality(word, quality) == false)
            continue;
          p_picture_quality = quality;
        }
      else if (word.equals_to("motion_quality"))
        {
          Quality quality;
          if (name_to_quality(word, quality) == false)
            continue;
          p_motion_quality = quality;
        }
      else if (word.equals_to("display_symmetry_axes"))
        {
          DisplaySymmetryAxes dsa;
          if (name_to_dsa(word, dsa) == false)
            continue;
          p_display_symmetry_axes = dsa;
        }
      else if (word.equals_to("display_principal_component_axes"))
        {
          DisplayPrincipalComponentAxes dpca;
          if (name_to_dpca(word, dpca) == false)
            continue;
          p_display_principal_component_axes = dpca;
        }
      else if (word.equals_to("draw_pentagon_cellophanes"))
        {
          DrawPentagonCellophanes dpc;
          if (name_to_dpc(word, dpc) == false)
            continue;
          p_draw_pentagon_cellophanes = dpc;
        }
    }
  fclose(fptr);
}

static const char* quality_to_name(Quality quality)
{
  switch (quality)
    {
    case QUALITY_HIGH:
    default:
      return "high";
    case QUALITY_MIDDLE:
      return "middle";
    case QUALITY_LOW:
      return "low";
    }
}

static const char* dsa_to_name(DisplaySymmetryAxes dsa)
{
  switch (dsa)
    {
    case DISPLAY_ALL_SYMMETRY_AXES:
      return "all";
    case DISPLAY_MAJOR_SYMMETRY_AXES:
      return "major";
    case DISPLAY_NO_SYMMETRY_AXES:
    default:
      return "none";
    }
}

static const char* dpca_to_name(DisplayPrincipalComponentAxes dpca)
{
  switch (dpca)
    {
    case DISPLAY_ALL_PRINCIPAL_COMPONENT_AXES:
      return "all";
    case DISPLAY_NO_PRINCIPAL_COMPONENT_AXES:
    default:
      return "none";
    }
}

static const char* dpc_to_name(DrawPentagonCellophanes dpc)
{
  switch (dpc)
    {
    case DRAW_PENTAGON_STRONG_CELLOPHANES:
      return "strong";
    case DRAW_PENTAGON_TINT_CELLOPHANES:
      return "tint";
    case DRAW_PENTAGON_MONO_CHROME_CELLOPHANES:
      return "mono";
    case DRAW_PENTAGON_TRANSPARENT:
    default:
      return "none";
    }
}

void Configuration::save() const
{
  FILE* fptr = fopen(p_configuration_file_name, "w");
  fprintf(fptr, "picture_quality = %s\n", quality_to_name(p_picture_quality));
  fprintf(fptr, "motion_quality = %s\n", quality_to_name(p_motion_quality));
  fprintf(fptr, "display_symmetry_axes = %s\n", dsa_to_name(p_display_symmetry_axes));
  fprintf(fptr, "display_principal_component_axes = %s\n",
          dpca_to_name(p_display_principal_component_axes));
  fprintf(fptr, "draw_pentagon_cellophanes = %s\n",
          dpc_to_name(p_draw_pentagon_cellophanes));
  fprintf(fptr, "working_folder = %s\n", (char*)p_working_folder_name);
  fprintf(fptr, "povray_command_line = %s\n", (char*)p_povray_command_line);
  fclose(fptr);
}

static void make_folder_recursive(const char *path)
{
  struct stat sb;
  if (stat(path, &sb) == 0)
    {
      if (S_ISDIR(sb.st_mode) && access(path, X_OK))
        return;
    }
  int result;
#if defined(__unix) || defined(__APPLE__)
  result = mkdir(path, 0755);
#else
  result = mkdir(path);
#endif
  if (result == 0)
    return;
  MyString parent = path;
  char* delimiter;
  delimiter = strrchr(parent, '/');
  if (delimiter == NULL)
    delimiter = strrchr(parent, '\\');
  if (delimiter == NULL)
    return;
  parent.resize(delimiter - (char*)parent);
  make_folder_recursive(parent);
#if defined(__unix) || defined(__APPLE__)
  mkdir(path, 0755);
#else
  mkdir(path);
#endif
}

void Configuration::reflect() const
{
  switch (p_motion_quality)
    {
    case QUALITY_HIGH:
      OpenGLUtil::config_viewer_target_fps = 60;
      break;
    case QUALITY_MIDDLE:
      OpenGLUtil::config_viewer_target_fps = 40;
      break;
    case QUALITY_LOW:
      OpenGLUtil::config_viewer_target_fps = 20;
      break;
    }
  switch (p_display_symmetry_axes)
    {
    case DISPLAY_ALL_SYMMETRY_AXES:
      CarbonAllotrope::s_need_representations = true;
      CarbonAllotrope::s_need_all_axes = true;
      CarbonAllotrope::s_need_major_axes = false;
      break;
    case DISPLAY_MAJOR_SYMMETRY_AXES:
      CarbonAllotrope::s_need_representations = true;
      CarbonAllotrope::s_need_all_axes = false;
      CarbonAllotrope::s_need_major_axes = true;
      break;
    case DISPLAY_NO_SYMMETRY_AXES:
    default:
      CarbonAllotrope::s_need_representations = false;
      CarbonAllotrope::s_need_all_axes = false;
      CarbonAllotrope::s_need_major_axes = false;
      break;
    }
  switch (p_display_principal_component_axes)
    {
    case DISPLAY_ALL_PRINCIPAL_COMPONENT_AXES:
      CarbonAllotrope::s_need_principal_component_axes = true;
      break;
    case DISPLAY_NO_PRINCIPAL_COMPONENT_AXES:
    default:
      CarbonAllotrope::s_need_principal_component_axes = false;
      break;
    }
  switch (p_draw_pentagon_cellophanes)
    {
    case DRAW_PENTAGON_STRONG_CELLOPHANES:
      Interactives::s_need_draw_pentagon_cellophanes = true;
      pentagon_cellophane_colors = pentagon_strong_cellophane_colors;
      break;
    case DRAW_PENTAGON_TINT_CELLOPHANES:
      Interactives::s_need_draw_pentagon_cellophanes = true;
      pentagon_cellophane_colors = pentagon_tint_cellophane_colors;
      break;
    case DRAW_PENTAGON_MONO_CHROME_CELLOPHANES:
      Interactives::s_need_draw_pentagon_cellophanes = true;
      pentagon_cellophane_colors = pentagon_mono_chrome_cellophane_colors;
      break;
    case DRAW_PENTAGON_TRANSPARENT:
    default:
      Interactives::s_need_draw_pentagon_cellophanes = false;
      pentagon_cellophane_colors = pentagon_mono_chrome_cellophane_colors;
      break;
    }
  if (OpenGLUtil::interval_timer_setup_callback)
    (*OpenGLUtil::interval_timer_setup_callback)();

  MyString path = configuration->p_working_folder_name;
  int length = path.length();
  if ((length >= 1) && ((path[length - 1] == '/') || (path[length - 1] == '\\')))
    path.resize(length - 1);
  make_folder_recursive(path);
  chdir(path);
}

void Configuration::set_working_folder_name(const char* path)
{
  p_working_folder_name = path;
}

void Configuration::set_povray_command_line(const char* command_line)
{
  p_povray_command_line = command_line;
}

/* Local Variables:	*/
/* mode: c++		*/
/* End:			*/
