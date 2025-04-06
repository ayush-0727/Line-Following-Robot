/* --- Generated the 6/4/2025 at 16:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. mar. 9 13:49:38 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  int v_120;
  int v_118;
  int v_114;
  int v_112;
  int v_110;
  int v_108;
  int v_101;
  int v_99;
  int v_77;
  int v_60;
  int v_35;
  int v_33;
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
