/*
 * Project: FullereneViewer
 * Version: 1.0
 * Copyright: (C) 2011-14 Dr.Sc.KAWAMOTO,Takuji (Ext)
 * Create: 2012/01/04 10:51:50 JST
 */

#ifndef __POSTURE_H__
#define __POSTURE_H__

#include "Matrix3.h"
#include "Vector3.h"

class Posture {
  // members
public:
  Matrix3 posture;
  bool fixed;
  Matrix3 fixed_posture;
  Vector3 next_moment;

  // constructors & the destructor
public:
  Posture() : posture(), fixed(false), fixed_posture(), next_moment() { }
  ~Posture() { }
  Posture& operator = (const Posture& that); /* dont use */

};

#endif /* __POSTURE_H__ */

/* Local Variables:	*/
/* mode: c++		*/
/* End:			*/
