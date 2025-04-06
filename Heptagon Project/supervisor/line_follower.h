/* --- Generated the 6/4/2025 at 15:0 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. mar. 9 13:49:38 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  long v_120;
  long v_118;
  long v_114;
  long v_112;
  long v_110;
  long v_108;
  long v_101;
  long v_99;
  long v_77;
  long v_60;
  long v_35;
  long v_33;
  Line_follower__st ck;
  long pnr;
} Line_follower__line_follower_mem;

typedef struct Line_follower__line_follower_out {
  long v_l;
  long v_r;
  long dir;
  long pid;
  long position;
  long calc;
  long sum;
  long st;
  long black_line;
} Line_follower__line_follower_out;

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self);

void Line_follower__line_follower_step(long sen[5], long obj_det, long ir1,
                                       long ir2,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__line_follower_mem line_follower;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  long v_l;
  long v_r;
  long dir;
  long pid;
  long position;
  long calc;
  long sum;
  long st;
  long black_line;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long obj_det, long ir1, long ir2,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
