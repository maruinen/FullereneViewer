/*
 * Project: FullereneViewer
 * Version: 1.0
 * Copyright: (C) 2011-14 Dr.Sc.KAWAMOTO,Takuji (Ext)
 */

#ifndef __FULLERENE_H__
#define __FULLERENE_H__

#include "Object.h"
#include "ErrorCode.h"
#include "MyString.h"

class CarbonAllotrope;
class Representations;
class Characteristic;
class DistanceMatrix;

class Fullerene : public Object {
  // friend classes & functions
  friend class Fullerenes;

  // members
public:
  static bool s_need_fullerene_characteristic;
  static bool s_need_distance_matrix;

private:
  CarbonAllotrope* p_carbon_allotrope;
  ErrorCode p_error_code;
  MyString p_fullerene_name;
  MyString p_generator_formula;
  int p_n, p_m, p_h;
  Representations* p_representations;
  Characteristic* p_characteristic;
  DistanceMatrix* p_distance_matrix;

  // private tools

  // constructors & the destructor
public:
  Fullerene();
  Fullerene(const char* generator_formula);
  ErrorCode error_code() const { return p_error_code; }
  virtual ~Fullerene();
  Fullerene& operator = (const Fullerene& you); /* dont use */

  // type converters

  // comparators
public:
  int compare(const Fullerene* you) const;

  // math operators

  // I/O

  // class decision

  // member accessing methods
public:
  void set_carbon_allotrope(CarbonAllotrope* carbon_allotrope);
  void set_fullerene_name(const char* fullerene_name);
  void set_generator_formula(const char* generator_formula);
  CarbonAllotrope* get_carbon_allotrope() { return p_carbon_allotrope; }
  const char* get_fullerene_name() const { return p_fullerene_name; }
  const char* get_generator_formula() const { return p_generator_formula; }
  Representations* get_representations() { return p_representations; }
  const Representations* get_representations() const { return p_representations; }
  Characteristic* get_characteristic() { return p_characteristic; }
  DistanceMatrix* get_distance_matrix() { return p_distance_matrix; }
  int get_n() const { return p_n; }
  int get_m() const { return p_m; }
  int get_h() const { return p_h; }

};

#endif /* __FULLERENE_H__ */

/* Local Variables:	*/
/* mode: c++		*/
/* End:			*/
