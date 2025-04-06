/* --- Generated the 7/4/2025 at 2:32 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. mar. 9 13:49:38 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  int v_25;
  int v_19;
  int v_132;
  int v_130;
  int v_126;
  int v_124;
  int v_122;
  int v_120;
  int v_113;
  int v_111;
  int v_85;
  int v_68;
  int v_43;
  int v_41;
  Line_follower__st ck;
  int pnr;
} Line_follower__line_follower_mem;

typedef struct Line_follower__line_follower_out {
  int v_l;
  int v_r;
  int dir;
  int pid;
  int position;
  int calc;
  int sum;
  int st;
  int black_line;
} Line_follower__line_follower_out;

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self);

void Line_follower__line_follower_step(int sen[5], int obj_det, int ir1,
                                       int ir2, int ir_left, int ir_right,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__line_follower_mem line_follower;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
  int pid;
  int position;
  int calc;
  int sum;
  int st;
  int black_line;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int obj_det, int ir1, int ir2,
                              int ir_left, int ir_right,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
