/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef FIX_CLASS

FixStyle(print/wzero,FixPrintWithZero)

#else

#ifndef LMP_FIX_PRINT_WZERO_H
#define LMP_FIX_PRINT_WZERO_H

#include "stdio.h"
#include "fix.h"

namespace LAMMPS_NS {

class FixPrintWithZero : public Fix {
 public:
  FixPrintWithZero(class LAMMPS *, int, char **);
  ~FixPrintWithZero();
  int setmask();
  void end_of_step();
  void setup(int);

 private:
  int me,screenflag;
  FILE *fp;
  char *string,*copy,*work;
  int maxcopy,maxwork;
};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Illegal ... command

Self-explanatory.  Check the input script syntax and compare to the
documentation for the command.  You can use -echo screen as a
command-line option when running LAMMPS to see the offending line.

E: Cannot open fix print file %s

The output file generated by the fix print command cannot be opened

*/
