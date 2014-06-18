/*
 * Project: FullereneViewer
 * Version: 1.0
 * Copyright: (C) 2011-14 Dr.Sc.KAWAMOTO,Takuji (Ext)
 * Create: 2012/01/24 15:35:29 JST
 */

struct MenuEntry {
  const char* fullerene_name;
  const char* generator_label;
};

MenuEntry entry0[] = {
  { "C60 (NoA=120)", "S1-5b6c5b6b5b" },
  { "C70 (NoA=20)", "S1-5b6d5b6b5b" },
  { "C72 (NoA=24)", "S3-5b6c5b6c" },
  { "C74 (NoA=12)", "S4-6b5c6b5b6b" },
  { "C76-1 (NoA=24)", "S2-6c5b6c5b6b" },
  { "C76-2 (NoA=4)", "A1-5b6b5b6b5b6b5b6g5b6f5b6b5b6e5b6b5b6b5c6c" },
  { "C78-1 (NoA=12)", "S2-5b6c5b6c5b6b" },
  { "C78-2 (NoA=12)", "S2-6c5b6d5b6b" },
  { "C78-3 (NoA=6)", "A1-5b6b5b6b5b6b5b6e5b6g5b6f5c6b5b6b5b6c5b6c" },
  { "C78-4 (NoA=4)", "A1-5b6b5b6b5b6b5b6k5b6c5c6b5b6f5b6c5c6b" },
  { "C78-5 (NoA=4)", "A1-5b6b5b6b5b6c5b6h5b6d5b6d5b6b5b6b5b6d5b6c5b" },
  { "C80-1 (NoA=120)", "S1-6b5b6c5b6b5b" },
  { "C80-2 (NoA=20)", "S1-5b6e5b6b5b" },
  { "C80-3 (NoA=20)", "S1-6b5b6b5b6c5b" },
  { "C80-4 (NoA=6)", "A1-5b6b5b6b5b6c5b6i5b6g5b6b5c6b5b6b5b6c5b6c" },
  { "C80-5 (NoA=4)", "A1-5b6b5b6b5b6b5b6g5b6e5b6d5b6c5b6b5b6b5b6f5b" },
  { "C80-6 (NoA=4)", "A1-5b6b5b6b5b6c5b6h5b6e5b6c5b6d5b6b5b6b5b6b5b6c" },
  { "C80-7 (NoA=4)", "A1-5b6b5b6e5b6b5b6d5b6d5b6d5b6d5b6e5b6b5b6c5b" },
  { "C82-1 (NoA=6)", "S4-5b6d5b6d5b6b" },
  { "C82-2 (NoA=6)", "S4-5b6e5c6c" },
  { "C82-3 (NoA=4)", "A1-5b6c5b6d5b6b5b6b5b6f5b6f5b6b5b6b5b6c5b6f5b" },
  { "C82-4 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6b5b6c5b6b5b6b5b6d5b6f5b" },
  { "C82-5 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6c5b6b5b6b5b6b5b6c5b6g5b" },
  { "C82-6 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6d5b6c5b6b5b6c5b6c5b6f5b" },
  { "C82-7 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6e5b6b5b6b5b6c5b6b5b6g5b" },
  { "C82-8 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6c5b6f5b6c5b6c5b6b5b6f5b" },
  { "C82-9 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6d5b6e5b6c5b6b5b6c5b6f5b" }
};

MenuEntry entry1[] = {
  { "C84-01 (NoA=24)", "S2-6b5b6d5b6d" },
  { "C84-02 (NoA=24)", "S3-5b6d5b6c" },
  { "C84-03 (NoA=12)", "S2-6b5b6b5b6b5b6c" },
  { "C84-04 (NoA=8)", "A1-5b6b5b6b5b6c5b6h5b6e5b6c5b6e5b6d5b6b5b6b5b6b" },
  { "C84-05 (NoA=8)", "A1-5b6c5b6d5b6e5b6c5b6b5b6c5b6c5b6d5b6g5b6b5b6b" },
  { "C84-06 (NoA=4)", "A1-5b6b5b6b5b6b5b6i5b6e5b6i5b6b5b6b5b6b5c6b" },
  { "C84-07 (NoA=4)", "A1-5b6b5b6b5b6c5b6i5b6g5b6b5b6d5b6c5b6c5b6b5b" },
  { "C84-08 (NoA=4)", "A1-5b6b5b6b5b6k5b6b5b6b5b6b5b6b5b6b5b6d5b6h5b" },
  { "C84-09 (NoA=4)", "A1-5b6b5b6b5b6k5b6b5b6b5b6b5b6b5b6b5b6j5b6b5b" },
  { "C84-10 (NoA=4)", "A1-5b6b5b6f5b6e5b6b5c6b5b6l5b6b5b6b5b6c5b" },
  { "C84-11 (NoA=4)", "A1-5b6b5b6f5b6e5b6b5c6c5b6i5b6c5c6b5b6d" },
  { "C84-12 (NoA=4)", "A1-5b6c5b6d5b6b5b6b5b6f5b6g5b6b5c6e5b6d5b6b" },
  { "C84-13 (NoA=4)", "A1-5b6c5b6d5b6d5b6d5b6b5b6c5b6d5b6c5b6g5b6b5b6b" },
  { "C84-14 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6f5b6b5b6d5b6c5b6c5b6b5b" },
  { "C84-15 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6e5b6b5b6b5b6d5b6f5b6b5b6b" },
  { "C84-16 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6c5b6f5b6c5b6d5b6e5c6c" },
  { "C84-17 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6c5b6f5b6d5b6c5b6d5b6b5b6c" },
  { "C84-18 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6d5b6e5b6d5c6f5b6c5b6b" },
  { "C84-19 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5c6d5b6c5b6e5b6c5b6f5b" },
  { "C84-20 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5c6d5b6c5b6f5b6e5c6c" },
  { "C84-21 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5c6d5b6h5b6c5c6b5b6d" },
  { "C84-22 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5b6b5b6c5b6c5b6d5b6g5b6b5b6b" },
  { "C84-23 (NoA=2)", "A1-5b6b5b6f5b6e5b6b5c6b5b6k5b6b5c6b5b6d" },
  { "C84-24 (NoA=1)", "A1-5b6b5b6e5b6f5b6b5c6d5b6c5b6e5b6f5b6b5b6b" }
};

MenuEntry entry2[] = {
  { "C86-01 (NoA=6)", "A1-5b6c5b6d5b6b5b6c5b6i5b6e5b6b5b6b5b6c5b6e5b" },
  { "C86-02 (NoA=4)", "A1-5b6b5b6b5b6l5b6b5b6b5b6b5b6d5b6h5b6b5b6b5b" },
  { "C86-03 (NoA=4)", "A1-5b6b5b6e5b6b5b6d5b6c5b6j5b6c5b6b5b6b5b6e5b" },
  { "C86-04 (NoA=3)", "S4-6b5b6d5b6c5b6b" },
  { "C86-05 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6d5b6d5b6e5b6b5b6b5b6b5b6c" },
  { "C86-06 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6d5b6b5b6c5b6d5b6e5b6b5b" },
  { "C86-07 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6g5b6c5b6b5b6c5b6d5b6b5b6c" },
  { "C86-08 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6f5b6c5c6d5b6d5b6b5b6c" },
  { "C86-09 (NoA=2)", "A1-5b6b5b6b5b6k5b6b5b6c5b6c5b6c5b6d5b6e5c6c" },
  { "C86-10 (NoA=2)", "A1-5b6b5b6e5b6b5b6e5b6g5b6c5b6d5b6b5b6b5b6c5b6d" },
  { "C86-11 (NoA=2)", "A1-5b6b5b6e5b6b5b6l5b6b5b6b5b6b5b6b5b6b5b6g5b" },
  { "C86-12 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5c6d5b6i5b6c5b6b5b6d5b" },
  { "C86-13 (NoA=2)", "A1-5b6b5b6e5b6h5c6d5b6d5b6b5b6c5b6e5b6c5b6b" },
  { "C86-14 (NoA=1)", "A1-5b6b5b6b5b6b5b6k5b6e5b6c5c6d5b6d5b6b5b6c" },
  { "C86-15 (NoA=1)", "A1-5b6b5b6b5b6c5b6h5b6g5b6c5b6c5b6b5b6d5c6d" },
  { "C86-16 (NoA=1)", "A1-5b6b5b6b5b6k5b6b5b6b5b6d5b6c5b6e5b6d5c6c" },
  { "C86-17 (NoA=1)", "A1-5b6b5b6e5b6b5b6d5b6h5b6d5b6c5b6b5b6b5b6c5b6d" },
  { "C86-18 (NoA=1)", "A1-5b6b5b6e5b6b5b6d5b6h5b6e5b6b5b6b5b6b5b6b5b6e" },
  { "C86-19 (NoA=1)", "A1-5b6b5b6e5b6b5b6d5b6h5b6e5b6b5b6b5b6c5b6e5b" }
};

MenuEntry entry3[] = {
  { "C88-01 (NoA=12)", "A1-5b6b5b6e5b6g5b6f5b6b5b6c5b6b5b6b5b6b5b6c5b6f" },
  { "C88-02 (NoA=4)", "A1-5b6b5b6b5b6b5b6g5b6m5b6b5b6c5b6b5b6b5b6b5b6c" },
  { "C88-03 (NoA=4)", "A1-5b6b5b6b5b6c5b6h5b6e5b6h5b6c5b6b5b6b5b6d5b" },
  { "C88-04 (NoA=4)", "A1-5b6b5b6b5b6k5b6b5b6b5b6b5b6k5b6b5b6b5b6b5b6b" },
  { "C88-05 (NoA=4)", "A1-5b6b5b6b5b6l5b6d5b6b5b6d5b6c5b6b5b6c5b6b5b6d" },
  { "C88-06 (NoA=4)", "A1-5b6c5b6d5b6b5b6c5b6i5b6h5b6b5b6b5b6b5b6b5b6c" },
  { "C88-07 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6c5b6c5b6g5b6d5b6b5b6b5b" },
  { "C88-08 (NoA=2)", "A1-5b6b5b6b5b6b5b6p5b6c5b6b5b6b5b6b5b6d5c6d" },
  { "C88-09 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6f5b6b5b6e5b6b5b6e5b6c5b" },
  { "C88-10 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6d5b6b5b6b5b6b5b6b5b6b5b6e" },
  { "C88-11 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6d5b6b5b6b5b6b5b6c5b6e5b" },
  { "C88-12 (NoA=2)", "A1-5b6b5b6b5b6k5b6c5b6b5b6f5b6b5b6e5b6b5b6d5b" },
  { "C88-13 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6b5b6b5b6d5b6g5b6b5b6b5b6c" },
  { "C88-14 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6b5b6c5b6b5b6b5b6e5b6e5b6c" },
  { "C88-15 (NoA=2)", "A1-5b6b5b6b5b6l5b6c5b6b5c6c5b6e5b6f5b6c5b" },
  { "C88-16 (NoA=2)", "A1-5b6b5b6b5b6l5b6c5b6d5b6c5c6b5b6c5b6d5b6d" },
  { "C88-17 (NoA=2)", "A1-5b6b5b6b5b6l5b6d5b6c5b6b5b6b5b6b5b6b5b6b5b6g" },
  { "C88-18 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6c5b6n5c6b5b6b5b6c5b6b" },
  { "C88-19 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6h5b6e5b6c5b6d5b6c5b6b5b6b" },
  { "C88-20 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6h5b6g5b6c5b6b5b6b5b6c5b6b" },
  { "C88-21 (NoA=2)", "A1-5b6b5b6e5b6b5b6e5b6g5b6g5b6b5b6c5b6b5b6d5b" },
  { "C88-22 (NoA=2)", "A1-5b6b5b6e5b6b5b6l5b6b5b6c5b6d5b6b5c6f5b" },
  { "C88-23 (NoA=2)", "A1-5b6b5b6e5b6b5b6l5b6b5b6c5b6d5b6b5b6b5b6c5b6c" },
  { "C88-24 (NoA=2)", "A1-5b6b5b6e5b6g5b6c5b6d5b6b5b6b5b6c5b6c5b6e5b6d" },
  { "C88-25 (NoA=1)", "A1-5b6b5b6b5b6b5b6k5b6e5b6b5b6e5b6b5b6e5b6c5b" },
  { "C88-26 (NoA=1)", "A1-5b6b5b6b5b6c5b6h5b6j5b6c5b6b5b6b5b6b5b6e5b" },
  { "C88-27 (NoA=1)", "A1-5b6b5b6b5b6k5b6b5b6b5b6g5b6e5b6b5b6b5b6c5b6b" },
  { "C88-28 (NoA=1)", "A1-5b6b5b6b5b6k5b6b5b6c5b6f5b6c5b6d5b6b5b6d5b" },
  { "C88-29 (NoA=1)", "A1-5b6b5b6b5b6k5b6b5b6c5b6f5b6d5b6c5b6b5b6c5b6b" },
  { "C88-30 (NoA=1)", "A1-5b6b5b6b5b6l5b6b5b6b5b6b5b6c5b6g5c6d5b6c" },
  { "C88-31 (NoA=1)", "A1-5b6b5b6b5b6l5b6b5b6b5b6b5b6c5b6g5b6d5b6c5b" },
  { "C88-32 (NoA=1)", "A1-5b6b5b6b5b6l5b6c5b6c5b6d5b6c5b6c5b6b5b6b5b6d" },
  { "C88-33 (NoA=1)", "A1-5b6b5b6e5b6b5b6d5b6h5b6h5b6b5b6b5b6b5b6b5b6c" },
  { "C88-34 (NoA=1)", "A1-5b6b5b6e5b6b5b6l5b6b5b6b5b6b5b6c5b6f5b6b5b6b" }
};

MenuEntry entry4[] = {
  { "C90-01 (NoA=20)", "S1-5b6f5b6b5b" },
  { "C90-02 (NoA=4)", "A1-5b6b5b6b5b6b5b6k5b6c5b6k5b6b5b6b5b6b5b6c5b" },
  { "C90-03 (NoA=4)", "A1-5b6b5b6b5b6k5b6b5b6d5b6b5b6h5b6e5c6b5b6b" },
  { "C90-04 (NoA=4)", "A1-5b6b5b6b5b6k5b6c5b6c5b6g5b6c5b6b5b6b5b6b5b6d" },
  { "C90-05 (NoA=4)", "A1-5b6b5b6e5b6b5b6l5b6b5b6d5b6d5b6b5b6b5b6c5b6c" },
  { "C90-06 (NoA=4)", "A1-5b6b5b6e5b6f5b6b5b6b5b6f5b6g5b6e5b6b5b6b5b6b" },
  { "C90-07 (NoA=4)", "A1-5b6b5b6e5b6f5b6d5b6c5b6f5b6b5b6d5b6c5b6e5b" },
  { "C90-08 (NoA=4)", "A1-5b6c5b6d5b6e5b6c5b6b5b6f5b6g5b6b5b6e5b6c5b" },
  { "C90-09 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6e5b6h5c6d5b6b5b6b5b" },
  { "C90-10 (NoA=2)", "A1-5b6b5b6b5b6b5b6s5b6b5b6b5b6b5b6b5b6b5b6e5b" },
  { "C90-11 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6g5b6c5b6d5b6g5b6b5c6b" },
  { "C90-12 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6i5b6e5b6b5b6b5b6c5b6c5b" },
  { "C90-13 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6d5b6c5b6b5b6d5b6b5b6c5b6b" },
  { "C90-14 (NoA=2)", "A1-5b6b5b6b5b6k5b6b5b6d5b6d5b6d5b6b5b6b5b6g5b" },
  { "C90-15 (NoA=2)", "A1-5b6b5b6b5b6k5b6d5b6b5b6d5b6c5b6b5b6c5b6g5b" },
  { "C90-16 (NoA=2)", "A1-5b6b5b6b5b6m5b6c5b6b5b6c5b6c5b6b5b6c5b6g5b" },
  { "C90-17 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6h5b6h5b6b5c6b5b6f5b" },
  { "C90-18 (NoA=2)", "A1-5b6b5b6e5b6b5b6e5b6g5b6h5b6d5b6b5b6b5b6b5b6b" },
  { "C90-19 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5b6b5b6f5b6f5b6c5b6f5b6b5b" },
  { "C90-20 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5b6b5b6f5b6g5b6b5b6e5b6c5b" },
  { "C90-21 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5b6b5b6l5b6c5c6b5b6d5b6b" },
  { "C90-22 (NoA=2)", "A1-5b6b5b6e5b6f5b6c5b6e5b6e5b6c5b6b5b6d5b6e5b" },
  { "C90-23 (NoA=2)", "A1-5b6b5b6e5b6f5b6d5b6d5b6e5b6e5b6b5b6b5b6d5b6b" },
  { "C90-24 (NoA=2)", "A1-5b6b5b6e5b6g5b6c5b6d5b6b5b6b5b6e5b6f5c6d" },
  { "C90-25 (NoA=2)", "A1-5b6c5b6d5b6b5b6b5b6l5b6c5c6b5b6i5c6b" },
  { "C90-26 (NoA=2)", "A1-5b6c5b6d5b6b5b6b5b6l5b6d5b6b5b6b5b6c5b6f5b" },
  { "C90-27 (NoA=2)", "A1-5b6c5b6d5b6b5b6b5b6l5b6d5b6b5b6b5b6d5b6d5b6b" },
  { "C90-28 (NoA=2)", "A1-5b6c5b6d5b6b5b6b5b6m5b6c5b6b5b6b5b6b5b6g5b" },
  { "C90-29 (NoA=2)", "A1-5b6c5b6d5b6b5b6c5b6j5b6e5b6b5b6b5b6c5b6f5b" },
  { "C90-30 (NoA=2)", "A1-5b6c5b6d5b6d5b6d5b6b5b6g5b6f5b6b5b6e5b6c5b" },
  { "C90-31 (NoA=1)", "A1-5b6b5b6b5b6b5b6k5b6h5b6e5b6b5b6b5b6c5b6c5b" },
  { "C90-32 (NoA=1)", "A1-5b6b5b6b5b6c5b6h5b6j5b6d5b6c5b6b5b6c5b6b5b6b" },
  { "C90-33 (NoA=1)", "A1-5b6b5b6b5b6c5b6n5b6d5b6b5b6c5b6d5b6c5b6b5b6b" },
  { "C90-34 (NoA=1)", "A1-5b6b5b6b5b6k5b6b5b6c5b6e5b6d5b6c5c6g5b" }
};

MenuEntry entry5[] = {
  { "C92-01 (NoA=12)", "S4-6b5b6e5b6b5b6b" },
  { "C92-02 (NoA=8)", "A1-5b6b5b6d5b6h5b6e5b6e5b6e5b6d5b6c5b6c5b6b5b" },
  { "C92-03 (NoA=6)", "S4-5b6e5b6d5b6b" },
  { "C92-04 (NoA=6)", "S4-6b5b6d5b6d5b6b" },
  { "C92-05 (NoA=6)", "A1-5b6b5b6b5b6m5b6b5b6d5b6b5b6b5b6c5b6b5b6i5b" },
  { "C92-06 (NoA=6)", "A1-5b6c5b6e5b6c5b6d5b6b5b6j5b6c5b6b5b6c5b6e5b6b" },
  { "C92-07 (NoA=6)", "A1-5b6c5b6e5b6c5b6f5b6h5b6b5b6c5b6b5b6c5b6c5b6d" },
  { "C92-08 (NoA=4)", "A1-5b6b5b6b5b6b5b6g5b6l5b6b5b6c5b6g5b6b5c6b" },
  { "C92-09 (NoA=4)", "A1-5b6b5b6b5b6k5b6e5b6f5b6b5b6c5b6c5b6c5b6b5b6c" },
  { "C92-10 (NoA=4)", "A1-5b6b5b6e5b6b5b6l5b6b5b6d5b6d5b6c5b6c5b6d5b" },
  { "C92-11 (NoA=4)", "A1-5b6c5b6d5b6d5b6f5b6c5b6e5b6b5b6g5b6d5b6b5b6b" },
  { "C92-12 (NoA=4)", "A1-5b6c5b6e5b6c5b6f5b6d5b6d5b6e5b6c5b6c5b6d5b6b" },
  { "C92-13 (NoA=4)", "A1-5b6c5b6e5b6c5b6f5b6d5b6d5b6e5b6c5b6d5b6d5b" },
  { "C92-14 (NoA=3)", "A1-5b6b5b6e5b6h5c6d5b6c5b6b5b6g5b6f5b6b5b6b" },
  { "C92-15 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6f5b6g5b6c5b6b5b6b5b6b5b6c" },
  { "C92-16 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6g5b6g5b6b5b6c5b6b5b6b5b" },
  { "C92-17 (NoA=2)", "A1-5b6b5b6b5b6b5b6p5b6c5b6b5b6c5b6g5b6b5c6b" },
  { "C92-18 (NoA=2)", "A1-5b6b5b6b5b6b5b6s5b6b5b6c5b6c5b6b5b6c5b6b5b6b" },
  { "C92-19 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6i5b6d5b6c5c6f5b6c5b" },
  { "C92-20 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6f5b6b5b6f5b6e5b6b5b6b5b6c" },
  { "C92-21 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6d5b6c5b6b5b6c5b6b5b6f5b" },
  { "C92-22 (NoA=2)", "A1-5b6b5b6b5b6c5b6o5b6b5b6b5b6b5b6b5b6b5b6i5b" },
  { "C92-23 (NoA=2)", "A1-5b6b5b6b5b6c5b6p5b6c5b6b5b6b5b6b5b6b5b6g5b" },
  { "C92-24 (NoA=2)", "A1-5b6b5b6b5b6k5b6b5b6c5b6f5b6h5b6b5c6b5b6c" },
  { "C92-25 (NoA=2)", "A1-5b6b5b6b5b6k5b6b5b6d5b6d5b6e5b6d5b6c5b6c5b6b" },
  { "C92-26 (NoA=2)", "A1-5b6b5b6b5b6k5b6d5b6g5b6b5b6d5b6b5b6c5b6b5b6c" },
  { "C92-27 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6b5b6b5b6l5b6b5b6c5b6b5b" },
  { "C92-28 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6b5b6c5b6b5b6l5b6b5b6b5b" }
};

MenuEntry entry6[] = {
  { "C94-01 (NoA=6)", "S4-5b6g5c6c" },
  { "C94-02 (NoA=4)", "A1-5b6b5b6b5b6c5b6p5b6e5b6b5b6c5b6b5b6b5b6c5b6c" },
  { "C94-03 (NoA=4)", "A1-5b6b5b6e5b6b5b6l5b6b5b6i5b6b5b6b5b6b5b6b5b6c" },
  { "C94-04 (NoA=3)", "S4-5b6e5b6e5b6b" },
  { "C94-05 (NoA=3)", "S4-6b5b6d5b6e5b6b" },
  { "C94-06 (NoA=3)", "A1-5b6b5b6e5b6g5b6g5c6h5b6b5b6c5b6b5b6b5b6d" },
  { "C94-07 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6g5b6b5b6e5b6g5b6b5b6b5b" },
  { "C94-08 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6l5b6b5b6b5b6b5b6b5b6d5b" },
  { "C94-09 (NoA=2)", "A1-5b6b5b6b5b6b5b6o5b6d5b6e5b6f5b6b5b6b5c6b" },
  { "C94-10 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6j5b6d5b6d5b6b5c6f5b" },
  { "C94-11 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6h5b6g5c6e5b6b5b6c5b" },
  { "C94-12 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6d5b6d5b6d5b6b5b6b5b6b5b6d" },
  { "C94-13 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6d5b6d5b6e5b6c5b6b5b6b5b6b" },
  { "C94-14 (NoA=2)", "A1-5b6b5b6b5b6c5b6o5b6b5b6b5b6c5b6c5b6e5b6b5b6d" },
  { "C94-15 (NoA=2)", "A1-5b6b5b6b5b6c5b6o5b6b5b6c5b6b5b6b5b6e5b6d5b6c" },
  { "C94-16 (NoA=2)", "A1-5b6b5b6b5b6c5b6p5b6c5b6b5b6c5b6d5b6c5b6c5b6b" },
  { "C94-17 (NoA=2)", "A1-5b6b5b6b5b6c5b6p5b6c5b6c5b6b5b6c5b6c5b6c5b6c" },
  { "C94-18 (NoA=2)", "A1-5b6b5b6b5b6c5b6p5b6c5b6c5b6c5b6b5b6c5b6b5b6d" },
  { "C94-19 (NoA=2)", "A1-5b6b5b6b5b6k5b6b5b6i5b6c5b6c5b6b5b6c5b6c5b6c" },
  { "C94-20 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6b5b6c5b6b5b6k5b6b5b6b5b6c" },
  { "C94-21 (NoA=2)", "A1-5b6b5b6b5b6l5b6c5b6d5b6c5b6c5b6g5c6c5b6c" },
  { "C94-22 (NoA=2)", "A1-5b6b5b6b5b6l5b6d5b6c5b6b5b6d5b6b5b6f5b6d5b6b" },
  { "C94-23 (NoA=2)", "A1-5b6b5b6b5b6l5b6d5b6c5b6b5b6d5b6b5b6h5b6c5b" },
  { "C94-24 (NoA=2)", "A1-5b6b5b6b5b6m5b6b5b6d5b6b5b6b5b6c5b6c5b6i5b" },
  { "C94-25 (NoA=2)", "A1-5b6b5b6b5b6m5b6b5b6d5b6b5b6b5b6e5b6f5b6c5b6b" },
  { "C94-26 (NoA=2)", "A1-5b6b5b6b5b6m5b6b5b6d5b6b5b6b5b6f5b6e5b6b5b6c" },
  { "C94-27 (NoA=2)", "A1-5b6b5b6b5b6m5b6b5b6e5b6c5b6c5b6c5b6b5b6g5b" },
  { "C94-28 (NoA=2)", "A1-5b6b5b6d5b6g5b6f5b6g5b6c5b6d5b6c5b6d5b6b5b" },
  { "C94-29 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6i5b6f5b6b5b6e5b6e5b6b5b" },
  { "C94-30 (NoA=2)", "A1-5b6b5b6e5b6b5b6e5b6h5b6e5b6b5b6e5b6b5b6f5b" },
  { "C94-31 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5c6m5b6c5c6f5b6c5b" },
  { "C94-32 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5b6g5b6g5b6c5b6d5c6b5b6d" },
  { "C94-33 (NoA=2)", "A1-5b6b5b6e5b6f5b6g5b6b5b6e5b6d5b6c5b6b5b6c5b6d" },
  { "C94-34 (NoA=2)", "A1-5b6b5b6e5b6f5b6g5b6b5b6e5b6d5b6d5b6d5b6c5b" }
};

MenuEntry entry7[] = {
  { "C96-01 (NoA=24)", "S3-5b6e5b6c" },
  { "C96-02 (NoA=24)", "S3-6b5b6b5b6d" },
  { "C96-03 (NoA=24)", "S3-6b5b6c5b6c" },
  { "C96-04 (NoA=12)", "S2-5b6f5b6b5b6b" },
  { "C96-05 (NoA=12)", "A1-5b6b5b6b5b6k5b6f5b6g5b6d5b6b5b6d5b6b5b6b5b6b" },
  { "C96-06 (NoA=8)", "A1-5b6b5b6e5b6f5b6d5b6i5b6d5b6c5b6c5b6e5b6b5b" },
  { "C96-07 (NoA=8)", "A1-5b6c5b6d5b6b5b6l5b6c5b6c5b6c5b6d5b6d5b6e5b" },
  { "C96-08 (NoA=6)", "A1-5b6b5b6b5b6b5b6e5b6p5b6c5b6c5b6e5b6b5b6b5b6b" },
  { "C96-09 (NoA=6)", "A1-5b6b5b6e5b6g5b6f5b6b5b6c5b6d5b6h5b6c5b6b5b6b" },
  { "C96-10 (NoA=6)", "A1-5b6b5b6f5b6e5b6c5b6c5b6g5b6g5b6d5b6c5b6b5b6b" },
  { "C96-11 (NoA=6)", "A1-5b6b5b6f5b6e5b6c5b6k5b6c5b6b5b6c5b6b5b6b5b6e" },
  { "C96-12 (NoA=4)", "A1-5b6b5b6b5b6b5b6g5b6p5b6c5b6d5b6b5b6b5b6b5b6b" },
  { "C96-13 (NoA=4)", "A1-5b6b5b6b5b6k5b6b5b6d5b6d5b6d5b6j5b6b5b6b5b" },
  { "C96-14 (NoA=4)", "A1-5b6b5b6d5b6g5b6e5b6h5b6e5b6b5b6c5b6d5b6c5b" },
  { "C96-15 (NoA=4)", "A1-5b6b5b6e5b6f5b6d5b6i5b6e5b6b5b6c5b6d5b6c5b" },
  { "C96-16 (NoA=4)", "A1-5b6b5b6e5b6f5b6g5b6f5b6b5b6c5b6e5b6d5b6c5b" },
  { "C96-17 (NoA=4)", "A1-5b6b5b6e5b6g5b6c5b6h5b6b5b6c5b6e5b6c5b6c5b6c" },
  { "C96-18 (NoA=4)", "A1-5b6b5b6e5b6h5b6b5b6i5b6d5b6c5c6b5b6g5b" },
  { "C96-19 (NoA=4)", "A1-5b6c5b6d5b6b5b6b5b6o5b6b5b6d5b6b5b6f5b6c5b" },
  { "C96-20 (NoA=4)", "A1-5b6c5b6d5b6b5b6l5b6b5b6d5b6b5b6f5b6d5b6d5b" },
  { "C96-21 (NoA=4)", "A1-5b6c5b6d5b6e5b6e5b6d5b6e5b6g5b6f5b6b5b6b5b" },
  { "C96-22 (NoA=4)", "A1-5b6c5b6f5b6h5b6b5b6c5b6c5b6b5b6l5b6b5b6b5b" },
  { "C96-23 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6l5b6c5b6b5b6b5b6d5b6b5b6b" },
  { "C96-24 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6j5b6d5b6b5b6b5b6d5b6b5b6b" },
  { "C96-25 (NoA=2)", "A1-5b6b5b6b5b6b5b6o5b6c5b6d5b6c5b6g5b6b5c6c" },
  { "C96-26 (NoA=2)", "A1-5b6b5b6b5b6b5b6r5b6b5b6b5b6b5b6b5b6b5b6i5b" },
  { "C96-27 (NoA=2)", "A1-5b6b5b6b5b6b5b6r5b6b5b6b5b6b5b6b5b6i5b6b5b" },
  { "C96-28 (NoA=2)", "A1-5b6b5b6b5b6b5b6s5b6b5b6c5b6d5b6b5c6f5b" },
  { "C96-29 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6i5b6f5b6b5b6f5b6b5c6c" },
  { "C96-30 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6n5b6b5b6b5b6b5b6c5b6c5b6b" },
  { "C96-31 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6c5b6c5b6d5b6g5b6b5c6c" },
  { "C96-32 (NoA=2)", "A1-5b6b5b6b5b6k5b6c5b6c5b6g5b6g5b6b5b6b5b6d5b" },
  { "C96-33 (NoA=2)", "A1-5b6b5b6b5b6k5b6c5b6c5b6g5b6g5b6b5b6c5b6b5b6b" },
  { "C96-34 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6h5c6e5b6d5b6c5b6d5b" }
};

MenuEntry entry8[] = {
  { "C98-01 (NoA=6)", "S4-6b5b6e5b6c5b6b" },
  { "C98-02 (NoA=6)", "A1-5b6b5b6b5b6l5b6j5c6b5b6d5b6e5b6b5b6b5b6c" },
  { "C98-03 (NoA=6)", "A1-5b6c5b6d5b6h5b6g5b6c5b6d5b6b5b6b5b6c5b6f5b6c" },
  { "C98-04 (NoA=4)", "A1-5b6b5b6b5b6c5b6n5b6d5b6d5b6g5b6d5b6b5b6b5b" },
  { "C98-05 (NoA=4)", "A1-5b6b5b6b5b6l5b6d5b6c5b6b5b6e5b6h5b6c5b6c5b" },
  { "C98-06 (NoA=4)", "A1-5b6b5b6e5b6b5b6m5b6b5b6d5b6d5b6e5b6d5c6c" },
  { "C98-07 (NoA=4)", "A1-5b6c5b6d5b6b5b6m5b6b5b6c5c6b5b6l5b6b5b" },
  { "C98-08 (NoA=4)", "A1-5b6c5b6f5b6c5b6g5b6c5b6h5b6c5b6d5b6b5b6d5b6b" },
  { "C98-09 (NoA=3)", "S4-6c5b6d5b6b5b6c" },
  { "C98-10 (NoA=3)", "A1-5b6b5b6e5b6h5b6h5b6c5b6b5b6b5b6b5b6b5b6i5b6b" },
  { "C98-11 (NoA=3)", "A1-5b6c5b6d5b6d5b6d5b6l5b6b5b6b5b6b5b6c5b6f5b6c" },
  { "C98-12 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6h5b6h5b6b5c6b5b6f5b" },
  { "C98-13 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6h5b6h5b6b5b6b5b6b5b6c5b6b" },
  { "C98-14 (NoA=2)", "A1-5b6b5b6b5b6b5b6o5b6h5b6c5b6b5b6d5b6b5b6c5b6b" },
  { "C98-15 (NoA=2)", "A1-5b6b5b6b5b6b5b6r5b6b5b6c5b6b5b6c5b6d5b6c5b6d" },
  { "C98-16 (NoA=2)", "A1-5b6b5b6b5b6c5b6h5b6n5b6e5b6b5c6c5b6c5b6b" },
  { "C98-17 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6h5b6g5b6b5b6c5b6b5b6f5b" },
  { "C98-18 (NoA=2)", "A1-5b6b5b6b5b6c5b6o5b6b5b6d5b6b5b6f5b6e5b6c5b" },
  { "C98-19 (NoA=2)", "A1-5b6b5b6b5b6c5b6p5b6e5b6b5b6d5b6b5b6e5b6c5b" },
  { "C98-20 (NoA=2)", "A1-5b6b5b6b5b6c5b6t5b6b5b6b5b6b5b6b5b6b5b6f5b6b" },
  { "C98-21 (NoA=2)", "A1-5b6b5b6b5b6k5b6b5b6h5b6e5b6c5b6e5b6c5b6c5b" },
  { "C98-22 (NoA=2)", "A1-5b6b5b6b5b6l5b6b5b6h5b6e5b6c5b6b5b6d5b6c5b6b" },
  { "C98-23 (NoA=2)", "A1-5b6b5b6b5b6l5b6c5b6j5b6c5b6b5b6b5b6b5b6f5b" },
  { "C98-24 (NoA=2)", "A1-5b6b5b6b5b6l5b6d5b6i5b6b5b6c5b6b5b6b5b6f5b" },
  { "C98-25 (NoA=2)", "A1-5b6b5b6e5b6b5b6d5b6n5b6b5b6e5b6c5b6e5b6b5b" },
  { "C98-26 (NoA=2)", "A1-5b6b5b6e5b6b5b6e5b6n5b6d5b6b5b6c5b6c5b6b5b6c" },
  { "C98-27 (NoA=2)", "A1-5b6b5b6e5b6b5b6l5b6c5b6b5b6c5b6k5c6b5b6b" },
  { "C98-28 (NoA=2)", "A1-5b6b5b6e5b6b5b6m5b6c5b6b5b6b5b6f5b6c5b6b5b6e" },
  { "C98-29 (NoA=2)", "A1-5b6b5b6e5b6f5b6b5b6l5b6c5b6b5b6d5b6c5b6d5b6b" },
  { "C98-30 (NoA=2)", "A1-5b6b5b6e5b6f5b6c5b6d5b6l5b6c5b6b5b6b5b6e5b" },
  { "C98-31 (NoA=2)", "A1-5b6b5b6e5b6h5c6h5b6f5b6c5b6b5b6e5b6c5b6b" },
  { "C98-32 (NoA=2)", "A1-5b6b5b6e5b6h5c6h5b6g5b6b5b6c5b6b5b6f5b" },
  { "C98-33 (NoA=2)", "A1-5b6b5b6e5b6h5c6h5b6g5b6b5b6c5b6c5b6c5b6c" },
  { "C98-34 (NoA=2)", "A1-5b6b5b6e5b6h5c6j5b6c5b6d5b6c5b6e5b6b5b6b" }
};

MenuEntry entry9[] = {
  { "C100-01 (NoA=20)", "S1-5b6g5b6b5b" },
  { "C100-02 (NoA=12)", "A1-5b6b5b6m5b6c5b6b5b6d5b6c5b6b5b6c5b6c5b6i5b6b" },
  { "C100-03 (NoA=10)", "A1-6b5b6b5b6b5b6b5b6b5b6u5b6b5b6b5b6b5b6c5b6f5b" },
  { "C100-04 (NoA=8)", "A1-5b6c5b6f5b6c5b6f5b6d5b6j5b6d5b6b5b6b5b6c5b6c" },
  { "C100-05 (NoA=4)", "A1-5b6b5b6b5b6b5b6g5b6o5b6e5b6b5b6b5b6b5b6f5b" },
  { "C100-06 (NoA=4)", "A1-5b6b5b6b5b6c5b6p5b6f5b6e5b6b5b6b5b6b5b6b5b6d" },
  { "C100-07 (NoA=4)", "A1-5b6b5b6b5b6l5b6c5b6d5b6c5b6k5b6b5b6b5b6c5b6b" },
  { "C100-08 (NoA=4)", "A1-5b6b5b6b5b6m5b6b5b6d5b6b5b6l5b6b5b6b5b6b5b6c" },
  { "C100-09 (NoA=4)", "A1-5b6b5b6f5b6e5b6e5b6e5b6i5b6d5b6d5b6b5b6b5b6b" },
  { "C100-10 (NoA=4)", "A1-5b6c5b6d5b6b5b6l5b6d5b6f5b6b5b6b5b6e5b6d5b6b" },
  { "C100-11 (NoA=4)", "A1-5b6c5b6d5b6d5b6i5b6e5b6e5b6c5b6b5b6e5b6d5b6b" },
  { "C100-12 (NoA=4)", "A1-5b6c5b6e5b6c5b6d5b6m5b6c5b6b5c6f5b6c5b6c" },
  { "C100-13 (NoA=4)", "A1-5b6c5b6e5b6c5b6f5b6i5b6f5b6c5b6c5b6b5b6e5b" },
  { "C100-14 (NoA=4)", "A1-5b6c5b6e5b6c5b6f5b6i5b6f5b6c5b6e5b6b5b6b5b6b" },
  { "C100-15 (NoA=4)", "A1-5b6c5b6e5b6c5b6h5b6e5b6f5b6c5b6c5b6d5b6d5b6b" },
  { "C100-16 (NoA=4)", "A1-5b6c5b6e5b6d5b6f5b6e5b6h5b6b5b6c5b6d5b6d5b6b" },
  { "C100-17 (NoA=4)", "A1-5b6c5b6f5b6c5b6h5b6b5b6i5b6c5b6d5b6b5b6d5b6b" },
  { "C100-18 (NoA=4)", "A1-5b6c5b6h5b6g5b6b5b6b5b6d5b6d5b6f5b6c5b6c5b6d" },
  { "C100-19 (NoA=3)", "S4-6b5b6e5b6d5b6b" },
  { "C100-20 (NoA=3)", "A1-5b6b5b6e5b6g5b6h5b6e5b6d5b6b5b6b5b6b5b6c5b6f" },
  { "C100-21 (NoA=3)", "A1-5b6b5b6m5b6c5b6b5b6d5b6c5b6b5b6e5b6d5b6c5b6e" },
  { "C100-22 (NoA=2)", "A1-5b6b5b6b5b6b5b6k5b6e5b6i5b6h5b6b5b6b5c6b" },
  { "C100-23 (NoA=2)", "A1-5b6b5b6b5b6b5b6l5b6d5b6m5c6b5b6b5b6c5b6c" },
  { "C100-24 (NoA=2)", "A1-5b6b5b6b5b6b5b6o5b6i5b6c5b6c5b6c5b6b5b6c5b6b" },
  { "C100-25 (NoA=2)", "A1-5b6b5b6b5b6b5b6p5b6b5b6f5b6g5b6b5b6b5b6c5b6b" },
  { "C100-26 (NoA=2)", "A1-5b6b5b6b5b6b5b6p5b6c5b6d5b6g5b6b5b6b5b6c5b6c" },
  { "C100-27 (NoA=2)", "A1-5b6b5b6b5b6b5b6p5b6f5b6b5b6b5b6c5b6b5b6h5b" },
  { "C100-28 (NoA=2)", "A1-5b6b5b6b5b6b5b6p5b6g5b6b5b6e5b6b5b6e5b6b5b" },
  { "C100-29 (NoA=2)", "A1-5b6b5b6b5b6b5b6w5b6b5b6b5b6b5b6b5b6b5b6f5b" },
  { "C100-30 (NoA=2)", "A1-5b6b5b6b5b6c5b6i5b6o5c6b5b6f5b6c5c6b" },
  { "C100-31 (NoA=2)", "A1-5b6b5b6b5b6c5b6m5b6b5b6e5b6l5b6b5b6b5c6b" },
  { "C100-32 (NoA=2)", "A1-5b6b5b6b5b6c5b6n5b6g5b6d5b6b5b6f5b6c5c6b" },
  { "C100-33 (NoA=2)", "A1-5b6b5b6b5b6c5b6o5b6b5b6e5b6g5b6b5b6b5b6b5b6d" },
  { "C100-34 (NoA=2)", "A1-5b6b5b6b5b6c5b6p5b6c5b6e5b6f5b6b5b6b5c6d" }
};

MenuEntry entry10[] = {
  { "C104-1 (NoA=12)", "S4-5b6g5b6d5b6b" },
  { "C104-2 (NoA=12)", "S4-5b6h5b6c5b6b" },
  { "C104-3 (NoA=3)", "S4-6c5b6e5b6b5b6b" },
  { "C106-1 (NoA=6)", "S2-6b5b6f5b6b5b6b" },
  { "C106-2 (NoA=6)", "S4-5b6h5b6d5b6b" },
  { "C106-3 (NoA=6)", "S4-5b6i5c6c" },
  { "C108-1 (NoA=24)", "S3-5b6f5b6c" },
  { "C108-2 (NoA=12)", "S2-6b5b6e5b6c5b6c" },
  { "C108-3 (NoA=12)", "S2-6b5b6f5b6c5b6b" },
  { "C108-4 (NoA=6)", "S2-6b5b6g5b6d" },
  { "C110-1 (NoA=20)", "S1-5b6h5b6b5b" },
  { "C110-2 (NoA=6)", "S4-6c5b6e5b6d5b6b" },
  { "C110-3 (NoA=3)", "S4-6b5b6g5b6c5b6b" },
  { "C112-1 (NoA=24)", "S4-6d5b6d5b6e" },
  { "C112-2 (NoA=6)", "S4-6d5b6e5c6c" },
  { "C112-3 (NoA=6)", "S4-6f5c6b5b6d" },
  { "C112-4 (NoA=3)", "S4-6c5b6e5b6e5b6b" },
  { "C114-1 (NoA=6)", "S2-6d5b6c5b6b5b6c" },
  { "C114-2 (NoA=6)", "S2-6d5b6d5b6d" },
  { "C114-3 (NoA=6)", "S2-6f5b6c5b6d" },
  { "C116-1 (NoA=6)", "S4-5b6i5b6d5b6b" },
  { "C116-2 (NoA=6)", "S4-6b5b6g5b6d5b6b" },
  { "C116-3 (NoA=3)", "S4-6b5b6h5b6b5b6b" },
  { "C118-1 (NoA=6)", "S4-5b6k5c6c" },
  { "C118-2 (NoA=6)", "S4-6f5c6c5b6c" },
  { "C118-3 (NoA=3)", "S4-5b6i5b6e5b6b" },
  { "C118-4 (NoA=3)", "S4-6b5b6g5b6e5b6b" },
  { "C120-1 (NoA=24)", "S2-6f5b6d5b6d" },
  { "C120-2 (NoA=24)", "S3-5b6g5b6c" },
  { "C120-3 (NoA=20)", "S1-5b6i5b6b5b" },
  { "C120-4 (NoA=20)", "S1-6d5b6b5b6d5b" }
};

MenuEntry entry11[] = {
  { "C122 (NoA=6)", "S4-6b5b6h5b6c5b6b" },
  { "C124 (NoA=3)", "S4-6b5b6h5b6d5b6b" },
  { "C128-1 (NoA=12)", "S4-5b6k5b6d5b6b" },
  { "C128-2 (NoA=12)", "S4-5b6l5b6c5b6b" },
  { "C128-3 (NoA=12)", "S4-6d5b6e5b6d5b6b" },
  { "C128-4 (NoA=12)", "S4-6d5b6f5b6c5b6b" },
  { "C128-5 (NoA=12)", "S4-6f5c6e5b6b" },
  { "C128-6 (NoA=3)", "S4-6f5b6c5b6b5b6c" },
  { "C130-1 (NoA=20)", "S1-5b6j5b6b5b" },
  { "C130-2 (NoA=6)", "S2-6b5b6i5b6b5b6b" },
  { "C130-3 (NoA=6)", "S2-6d5b6c5b6e5b6b" },
  { "C130-4 (NoA=6)", "S2-6d5b6e5b6c5b6b" },
  { "C130-5 (NoA=6)", "S2-6f5b6f5b6b" },
  { "C130-6 (NoA=6)", "S4-5b6l5b6d5b6b" },
  { "C130-7 (NoA=6)", "S4-5b6m5c6c" },
  { "C132-1 (NoA=24)", "S3-5b6h5b6c" },
  { "C132-2 (NoA=12)", "S2-6b5b6h5b6c5b6c" },
  { "C132-3 (NoA=12)", "S2-6b5b6i5b6c5b6b" },
  { "C132-4 (NoA=12)", "S2-6d5b6c5b6f5b6b" },
  { "C132-5 (NoA=12)", "S2-6d5b6e5b6d5b6b" },
  { "C132-6 (NoA=12)", "S2-6f5b6g5b6b" },
  { "C132-7 (NoA=6)", "S2-6b5b6j5b6d" },
  { "C134-1 (NoA=6)", "S4-6h5c6f" },
  { "C134-2 (NoA=3)", "S4-6b5b6j5b6c5b6b" },
  { "C136 (NoA=6)", "S2-6g5b6b5b6e" },
  { "C140-1 (NoA=20)", "S1-5b6k5b6b5b" },
  { "C140-2 (NoA=6)", "S4-5b6m5b6d5b6b" },
  { "C140-3 (NoA=6)", "S4-6b5b6j5b6d5b6b" },
  { "C140-4 (NoA=3)", "S4-6b5b6k5b6b5b6b" },
  { "C140-5 (NoA=3)", "S4-6f5b6c5b6f5b6b" }
};

MenuEntry entry12[] = {
  { "C142-1 (NoA=6)", "S4-5b6o5c6c" },
  { "C142-2 (NoA=3)", "S4-5b6m5b6e5b6b" },
  { "C142-3 (NoA=3)", "S4-6b5b6j5b6e5b6b" },
  { "C142-4 (NoA=3)", "S4-6f5b6d5b6d5b6d" },
  { "C144-1 (NoA=24)", "S3-5b6i5b6c" },
  { "C144-2 (NoA=24)", "S3-6d5b6b5b6e" },
  { "C146-1 (NoA=6)", "S4-6b5b6k5b6c5b6b" },
  { "C146-2 (NoA=6)", "S4-6f5b6c5b6g5b6b" },
  { "C146-3 (NoA=3)", "S4-6f5b6d5b6e5b6c" },
  { "C146-4 (NoA=3)", "S4-6f5b6d5b6f5b6b" },
  { "C148-1 (NoA=6)", "S4-6h5b6b5b6e5b6d" },
  { "C148-2 (NoA=3)", "S4-6b5b6k5b6d5b6b" },
  { "C148-3 (NoA=3)", "S4-6f5b6c5b6h5b6b" },
  { "C148-4 (NoA=3)", "S4-6f5b6e5b6c5b6c" },
  { "C150-1 (NoA=20)", "S1-5b6l5b6b5b" },
  { "C150-2 (NoA=20)", "S1-6d5b6c5b6e5b" },
  { "C150-3 (NoA=6)", "S2-6g5b6c5b6b5b6e" },
  { "C152-1 (NoA=12)", "S4-5b6o5b6d5b6b" },
  { "C152-2 (NoA=12)", "S4-5b6p5b6c5b6b" },
  { "C152-3 (NoA=6)", "S4-6f5b6d5b6g5b6b" },
  { "C152-4 (NoA=3)", "S4-6f5b6e5b6d5b6c" },
  { "C152-5 (NoA=3)", "S4-6f5b6e5b6e5b6b" },
  { "C154-1 (NoA=6)", "S2-6b5b6l5b6b5b6b" },
  { "C154-2 (NoA=6)", "S4-5b6p5b6d5b6b" },
  { "C154-3 (NoA=6)", "S4-5b6q5c6c" },
  { "C154-4 (NoA=6)", "S4-6h5b6b5b6f5b6c" },
  { "C154-5 (NoA=3)", "S4-6f5b6d5b6h5b6b" },
  { "C156-1 (NoA=24)", "S3-5b6j5b6c" },
  { "C156-2 (NoA=12)", "S2-6b5b6k5b6c5b6c" },
  { "C156-3 (NoA=12)", "S2-6b5b6l5b6c5b6b" },
  { "C156-4 (NoA=6)", "S2-6b5b6m5b6d" },
  { "C156-5 (NoA=6)", "S2-6g5b6c5b6d5b6c" },
  { "C158 (NoA=3)", "S4-6b5b6m5b6c5b6b" },
  { "C160 (NoA=20)", "S1-5b6m5b6b5b" }
};

MenuEntry entry13[] = {
  { "C164-1 (NoA=24)", "S4-6h5b6e5b6f" },
  { "C164-2 (NoA=12)", "S4-6h5b6b5b6h5b6b" },
  { "C164-3 (NoA=6)", "S4-5b6q5b6d5b6b" },
  { "C164-4 (NoA=6)", "S4-6b5b6m5b6d5b6b" },
  { "C164-5 (NoA=3)", "S4-6b5b6n5b6b5b6b" },
  { "C166-1 (NoA=6)", "S2-6g5b6c5b6f5b6b" },
  { "C166-2 (NoA=6)", "S2-6g5b6e5b6e" },
  { "C166-3 (NoA=6)", "S4-5b6s5c6c" },
  { "C166-4 (NoA=3)", "S4-5b6q5b6e5b6b" },
  { "C166-5 (NoA=3)", "S4-6b5b6m5b6e5b6b" },
  { "C168-1 (NoA=24)", "S3-5b6k5b6c" },
  { "C168-2 (NoA=12)", "S2-6g5b6c5b6g5b6b" },
  { "C170-1 (NoA=20)", "S1-5b6n5b6b5b" },
  { "C170-2 (NoA=6)", "S4-6b5b6n5b6c5b6b" },
  { "C170-3 (NoA=6)", "S4-6j5c6c5b6d" },
  { "C170-4 (NoA=3)", "S4-6f5b6h5b6c5b6c" },
  { "C172-1 (NoA=24)", "S2-6i5b6d5b6e" },
  { "C172-2 (NoA=3)", "S4-6b5b6n5b6d5b6b" },
  { "C172-3 (NoA=3)", "S4-6f5b6h5b6b5b6e" },
  { "C176-1 (NoA=12)", "S4-5b6s5b6d5b6b" },
  { "C176-2 (NoA=12)", "S4-5b6t5b6c5b6b" },
  { "C176-3 (NoA=12)", "S4-6d5b6j5b6c5b6b" },
  { "C178-1 (NoA=6)", "S2-6b5b6o5b6b5b6b" },
  { "C178-2 (NoA=6)", "S2-6d5b6i5b6c5b6b" },
  { "C178-3 (NoA=6)", "S4-5b6t5b6d5b6b" },
  { "C178-4 (NoA=6)", "S4-5b6u5c6c" },
  { "C178-5 (NoA=6)", "S4-6h5b6g5b6c5b6d" },
  { "C178-6 (NoA=6)", "S4-6j5c6e5b6d" },
  { "C178-7 (NoA=3)", "S4-6f5b6h5b6d5b6c" },
  { "C178-8 (NoA=3)", "S4-6j5b6c5b6b5b6g" },
  { "C180-01 (NoA=120)", "S1-6d5b6f5b6d5b" },
  { "C180-02 (NoA=24)", "S3-5b6l5b6c" },
  { "C180-03 (NoA=24)", "S3-6d5b6c5b6f" },
  { "C180-04 (NoA=20)", "S1-5b6o5b6b5b" },
  { "C180-05 (NoA=12)", "S2-6b5b6n5b6c5b6c" },
  { "C180-06 (NoA=12)", "S2-6b5b6o5b6c5b6b" },
  { "C180-07 (NoA=12)", "S2-6d5b6i5b6d5b6b" },
  { "C180-08 (NoA=6)", "S2-6b5b6p5b6d" },
  { "C180-09 (NoA=6)", "S2-6g5b6d5b6e5b6d" },
  { "C180-10 (NoA=6)", "S2-6i5b6f5b6d" }
};

MenuEntry entry14[] = {
  { "C182-1 (NoA=3)", "S4-6b5b6p5b6c5b6b" },
  { "C182-2 (NoA=3)", "S4-6f5b6h5b6e5b6c" },
  { "C182-3 (NoA=3)", "S4-6f5b6h5b6f5b6b" },
  { "C182-4 (NoA=3)", "S4-6j5b6c5b6c5b6e" },
  { "C184-1 (NoA=6)", "S4-6h5b6g5b6d5b6c" },
  { "C184-2 (NoA=6)", "S4-6j5c6f5b6c" },
  { "C186-1 (NoA=6)", "S2-6g5b6d5b6f5b6c" },
  { "C186-2 (NoA=6)", "S2-6i5b6g5b6d" },
  { "C188-1 (NoA=6)", "S4-5b6u5b6d5b6b" },
  { "C188-2 (NoA=6)", "S4-6b5b6p5b6d5b6b" },
  { "C188-3 (NoA=3)", "S4-6b5b6q5b6b5b6b" },
  { "C188-4 (NoA=3)", "S4-6f5b6k5c6c" },
  { "C190-1 (NoA=20)", "S1-5b6p5b6b5b" },
  { "C190-2 (NoA=6)", "S4-5b6w5c6c" },
  { "C190-3 (NoA=6)", "S4-6l5c6h" },
  { "C190-4 (NoA=3)", "S4-5b6u5b6e5b6b" },
  { "C190-5 (NoA=3)", "S4-6b5b6p5b6e5b6b" },
  { "C190-6 (NoA=3)", "S4-6f5b6k5b6d5b6c" },
  { "C192-1 (NoA=24)", "S3-5b6m5b6c" },
  { "C192-2 (NoA=6)", "S2-6j5b6b5b6g" },
  { "C194-1 (NoA=12)", "S4-6h5b6g5b6f5b6b" },
  { "C194-2 (NoA=12)", "S4-6j5c6h5b6b" },
  { "C194-3 (NoA=6)", "S4-6b5b6q5b6c5b6b" },
  { "C194-4 (NoA=6)", "S4-6h5b6i5b6e" },
  { "C194-5 (NoA=3)", "S4-6j5b6c5b6f5b6e" },
  { "C194-6 (NoA=3)", "S4-6j5b6c5b6h5b6c" },
  { "C196-1 (NoA=6)", "S2-6g5b6d5b6h5b6b" },
  { "C196-2 (NoA=6)", "S2-6g5b6h5b6e" },
  { "C196-3 (NoA=6)", "S2-6i5b6i5b6b" },
  { "C196-4 (NoA=3)", "S4-6b5b6q5b6d5b6b" },
  { "C196-5 (NoA=3)", "S4-6f5b6k5b6c5b6e" },
  { "C198-1 (NoA=12)", "S2-6g5b6d5b6i5b6b" },
  { "C198-2 (NoA=12)", "S2-6i5b6j5b6b" },
  { "C200-1 (NoA=20)", "S1-5b6q5b6b5b" },
  { "C200-2 (NoA=12)", "S4-5b6w5b6d5b6b" },
  { "C200-3 (NoA=12)", "S4-5b6x5b6c5b6b" },
  { "C200-4 (NoA=3)", "S4-6f5b6k5b6f5b6b" },
  { "C200-5 (NoA=3)", "S4-6f5b6l5b6c5b6c" },
  { "C200-6 (NoA=3)", "S4-6j5b6e5b6c5b6e" }
};

MenuEntry entry15[] = {
  { "Carbon-Nano-Tube (NoA=XXX)", "T" },
  { "Fullerene-Y (NoA=XXX)", "T-Y" },
};

/* Local Variables:	*/
/* mode: c++		*/
/* End:			*/
