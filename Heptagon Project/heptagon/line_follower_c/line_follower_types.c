/* --- Generated the 6/4/2025 at 16:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. mar. 9 13:49:38 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_PID_calculation")==0)) {
    return Line_follower__St_PID_calculation;
  };
  if ((strcmp(s, "St_Obstacle_traversing")==0)) {
    return Line_follower__St_Obstacle_traversing;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_PID_calculation:
      strcpy(buf, "St_PID_calculation");
      break;
    case Line_follower__St_Obstacle_traversing:
      strcpy(buf, "St_Obstacle_traversing");
      break;
    default:
      break;
  };
  return buf;
}

