/* --- Generated the 6/4/2025 at 15:0 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. mar. 9 13:49:38 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self) {
  self->v_118 = true;
  self->v_108 = true;
  self->v_99 = true;
  self->v_77 = true;
  self->v_33 = true;
  self->pnr = false;
  self->ck = Line_follower__St_PID_calculation;
}

void Line_follower__line_follower_step(int sen[5], int obj_det, int ir1,
                                       int ir2,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self) {
  
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_119;
  int v_117;
  int v_116;
  int v_115;
  int v_113;
  int v_111;
  int v_109;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_100;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_34;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int value;
  int i;
  int d;
  int p;
  int last_pos;
  int avg_ref;
  int is_line;
  int nr_St_Obstacle_traversing;
  Line_follower__st ns_St_Obstacle_traversing;
  int sen4_St_Obstacle_traversing;
  int sen3_St_Obstacle_traversing;
  int sen2_St_Obstacle_traversing;
  int sen1_St_Obstacle_traversing;
  int sen0_St_Obstacle_traversing;
  int ir_on_St_Obstacle_traversing;
  int object_found_St_Obstacle_traversing;
  int maxspeed_St_Obstacle_traversing;
  int black_line_St_Obstacle_traversing;
  int st_St_Obstacle_traversing;
  int sum_St_Obstacle_traversing;
  int calc_St_Obstacle_traversing;
  int position_St_Obstacle_traversing;
  int pid_St_Obstacle_traversing;
  int dir_St_Obstacle_traversing;
  int v_r_St_Obstacle_traversing;
  int v_l_St_Obstacle_traversing;
  int nr_St_PID_calculation;
  Line_follower__st ns_St_PID_calculation;
  int sen4_St_PID_calculation;
  int sen3_St_PID_calculation;
  int sen2_St_PID_calculation;
  int sen1_St_PID_calculation;
  int sen0_St_PID_calculation;
  int ir_on_St_PID_calculation;
  int object_found_St_PID_calculation;
  int maxspeed_St_PID_calculation;
  int black_line_St_PID_calculation;
  int st_St_PID_calculation;
  int sum_St_PID_calculation;
  int calc_St_PID_calculation;
  int position_St_PID_calculation;
  int pid_St_PID_calculation;
  int dir_St_PID_calculation;
  int v_r_St_PID_calculation;
  int v_l_St_PID_calculation;
  Line_follower__st ns;
  int r;
  int nr;
  int maxspeed;
  int object_found;
  int ir_on;
  int sen0;
  int sen1;
  int sen2;
  int sen3;
  int sen4;
  r = self->pnr;
  switch (self->ck) {
    case Line_follower__St_PID_calculation:
      if (self->v_118) {
        v_119 = true;
      } else {
        v_119 = r;
      };
      if (v_119) {
        v_121 = 0;
      } else {
        v_121 = self->v_120;
      };
      v_113 = (self->v_112<-200000);
      v_111 = (self->v_110>200000);
      if (self->v_108) {
        v_109 = true;
      } else {
        v_109 = r;
      };
      if (self->v_99) {
        v_100 = true;
      } else {
        v_100 = r;
      };
      if (v_100) {
        last_pos = 0;
      } else {
        last_pos = self->v_101;
      };
      v_106 = (last_pos<0);
      if (v_106) {
        v_107 = 0;
      } else {
        v_107 = 4000;
      };
      if (self->v_77) {
        v_78 = true;
      } else {
        v_78 = r;
      };
      if (v_78) {
        object_found_St_PID_calculation = 0;
      } else {
        object_found_St_PID_calculation = obj_det;
      };
      ir_on_St_PID_calculation = ir1;
      v_76 = sen[4];
      v_74 = sen[4];
      v_75 = (1000-v_74);
      v_73 = sen[3];
      v_71 = sen[3];
      v_72 = (1000-v_71);
      v_70 = sen[2];
      v_68 = sen[2];
      v_69 = (1000-v_68);
      v_67 = sen[1];
      v_65 = sen[1];
      v_66 = (1000-v_65);
      v_64 = sen[0];
      v_62 = sen[0];
      v_63 = (1000-v_62);
      v_55 = sen[4];
      v_56 = (v_55==1000);
      v_52 = sen[3];
      v_53 = (v_52==0);
      v_50 = sen[2];
      v_51 = (v_50==1000);
      v_54 = (v_51&&v_53);
      v_57 = (v_54&&v_56);
      v_46 = sen[2];
      v_47 = (v_46==1000);
      v_43 = sen[1];
      v_44 = (v_43==0);
      v_41 = sen[0];
      v_42 = (v_41==1000);
      v_45 = (v_42&&v_44);
      v_48 = (v_45&&v_47);
      v_39 = sen[2];
      v_40 = (v_39==0);
      v_49 = (v_40||v_48);
      v_58 = (v_49||v_57);
      v_36 = !(self->v_35);
      if (self->v_33) {
        v_34 = true;
      } else {
        v_34 = r;
      };
      v_31 = sen[4];
      v_29 = sen[3];
      v_27 = sen[2];
      v_25 = sen[1];
      v_24 = sen[0];
      v_26 = (v_24+v_25);
      v_28 = (v_26+v_27);
      v_30 = (v_28+v_29);
      v_32 = (v_30+v_31);
      avg_ref = (v_32/5);
      v_37 = (avg_ref>=700);
      v_38 = (v_36&&v_37);
      v_59 = (v_38&&v_58);
      if (v_59) {
        v_61 = true;
      } else {
        v_61 = self->v_60;
      };
      if (v_34) {
        black_line_St_PID_calculation = false;
      } else {
        black_line_St_PID_calculation = v_61;
      };
      maxspeed_St_PID_calculation = 60;
      st_St_PID_calculation = 1;
      _out->st = st_St_PID_calculation;
      _out->black_line = black_line_St_PID_calculation;
      if (_out->black_line) {
        sen4_St_PID_calculation = v_75;
        sen3_St_PID_calculation = v_72;
        sen2_St_PID_calculation = v_69;
        sen1_St_PID_calculation = v_66;
        sen0_St_PID_calculation = v_63;
      } else {
        sen4_St_PID_calculation = v_76;
        sen3_St_PID_calculation = v_73;
        sen2_St_PID_calculation = v_70;
        sen1_St_PID_calculation = v_67;
        sen0_St_PID_calculation = v_64;
      };
      maxspeed = maxspeed_St_PID_calculation;
      v_129 = -(maxspeed);
      v_127 = -(maxspeed);
      object_found = object_found_St_PID_calculation;
      v_23 = (object_found==1);
      if (v_23) {
        nr_St_PID_calculation = true;
        ns_St_PID_calculation = Line_follower__St_Obstacle_traversing;
      } else {
        nr_St_PID_calculation = false;
        ns_St_PID_calculation = Line_follower__St_PID_calculation;
      };
      ir_on = ir_on_St_PID_calculation;
      sen0 = sen0_St_PID_calculation;
      v_90 = (sen0>400);
      v_79 = (0*sen0);
      sen1 = sen1_St_PID_calculation;
      v_135 = (sen0+sen1);
      v_91 = (sen1>400);
      v_92 = (v_90||v_91);
      v_87 = (sen0+sen1);
      v_80 = (1000*sen1);
      v_81 = (v_79+v_80);
      sen2 = sen2_St_PID_calculation;
      v_136 = (v_135+sen2);
      v_137 = (v_136==3000);
      v_93 = (sen2>400);
      v_94 = (v_92||v_93);
      v_88 = (v_87+sen2);
      v_82 = (2000*sen2);
      v_83 = (v_81+v_82);
      sen3 = sen3_St_PID_calculation;
      v_138 = (sen2+sen3);
      v_95 = (sen3>400);
      v_96 = (v_94||v_95);
      v_89 = (v_88+sen3);
      v_84 = (3000*sen3);
      v_85 = (v_83+v_84);
      sen4 = sen4_St_PID_calculation;
      v_139 = (v_138+sen4);
      v_140 = (v_139==3000);
      if (v_140) {
        v_141 = 3;
      } else {
        v_141 = 1;
      };
      if (v_137) {
        dir_St_PID_calculation = 2;
      } else {
        dir_St_PID_calculation = v_141;
      };
      v_97 = (sen4>400);
      v_98 = (v_96||v_97);
      if (v_98) {
        is_line = true;
      } else {
        is_line = false;
      };
      sum_St_PID_calculation = (v_89+sen4);
      v_86 = (4000*sen4);
      value = (v_85+v_86);
      _out->dir = dir_St_PID_calculation;
      _out->sum = sum_St_PID_calculation;
      v_104 = (value/_out->sum);
      v_102 = (_out->sum==0);
      v_103 = !(v_102);
      if (v_103) {
        v_105 = v_104;
      } else {
        v_105 = 0;
      };
      if (is_line) {
        position_St_PID_calculation = v_105;
      } else {
        position_St_PID_calculation = v_107;
      };
      _out->position = position_St_PID_calculation;
      p = (_out->position-2000);
      v_122 = (p/25);
      d = (p-v_121);
      v_125 = (d*5);
      v_115 = (self->v_114+p);
      if (v_113) {
        v_116 = -200000;
      } else {
        v_116 = v_115;
      };
      if (v_111) {
        v_117 = 200000;
      } else {
        v_117 = v_116;
      };
      if (v_109) {
        i = 0;
      } else {
        i = v_117;
      };
      v_123 = (i/25000);
      v_124 = (v_122+v_123);
      calc_St_PID_calculation = (v_124+v_125);
      _out->calc = calc_St_PID_calculation;
      v_128 = (_out->calc<v_127);
      if (v_128) {
        v_130 = v_129;
      } else {
        v_130 = _out->calc;
      };
      v_126 = (_out->calc>maxspeed);
      if (v_126) {
        pid_St_PID_calculation = maxspeed;
      } else {
        pid_St_PID_calculation = v_130;
      };
      _out->pid = pid_St_PID_calculation;
      v_134 = (maxspeed-_out->pid);
      v_133 = (_out->pid<0);
      if (v_133) {
        v_r_St_PID_calculation = maxspeed;
      } else {
        v_r_St_PID_calculation = v_134;
      };
      v_132 = (maxspeed+_out->pid);
      v_131 = (_out->pid<0);
      if (v_131) {
        v_l_St_PID_calculation = v_132;
      } else {
        v_l_St_PID_calculation = maxspeed;
      };
      _out->v_l = v_l_St_PID_calculation;
      _out->v_r = v_r_St_PID_calculation;
      ns = ns_St_PID_calculation;
      nr = nr_St_PID_calculation;
      self->v_120 = p;
      self->v_118 = false;
      self->v_114 = i;
      self->v_112 = i;
      self->v_110 = i;
      self->v_108 = false;
      self->v_101 = _out->position;
      self->v_99 = false;
      self->v_77 = false;
      self->v_60 = _out->black_line;
      self->v_35 = _out->black_line;
      self->v_33 = false;
      break;
    case Line_follower__St_Obstacle_traversing:
      dir_St_Obstacle_traversing = 1;
      v_21 = (ir1==1);
      v_19 = (ir1==1);
      ir_on_St_Obstacle_traversing = 0;
      object_found_St_Obstacle_traversing = 0;
      black_line_St_Obstacle_traversing = true;
      calc_St_Obstacle_traversing = 0;
      position_St_Obstacle_traversing = 0;
      pid_St_Obstacle_traversing = 0;
      v_15 = sen[4];
      v_13 = sen[4];
      v_14 = (1000-v_13);
      v_12 = sen[3];
      v_10 = sen[3];
      v_11 = (1000-v_10);
      v_9 = sen[2];
      v_7 = sen[2];
      v_8 = (1000-v_7);
      v_6 = sen[1];
      v_4 = sen[1];
      v_5 = (1000-v_4);
      v_3 = sen[0];
      v_1 = sen[0];
      v_2 = (1000-v_1);
      maxspeed_St_Obstacle_traversing = 60;
      st_St_Obstacle_traversing = 2;
      _out->st = st_St_Obstacle_traversing;
      _out->black_line = black_line_St_Obstacle_traversing;
      if (_out->black_line) {
        sen4_St_Obstacle_traversing = v_14;
        sen3_St_Obstacle_traversing = v_11;
        sen2_St_Obstacle_traversing = v_8;
        sen1_St_Obstacle_traversing = v_5;
        sen0_St_Obstacle_traversing = v_2;
      } else {
        sen4_St_Obstacle_traversing = v_15;
        sen3_St_Obstacle_traversing = v_12;
        sen2_St_Obstacle_traversing = v_9;
        sen1_St_Obstacle_traversing = v_6;
        sen0_St_Obstacle_traversing = v_3;
      };
      maxspeed = maxspeed_St_Obstacle_traversing;
      v_22 = (maxspeed/4);
      if (v_21) {
        v_r_St_Obstacle_traversing = v_22;
      } else {
        v_r_St_Obstacle_traversing = maxspeed;
      };
      v_20 = (maxspeed/4);
      if (v_19) {
        v_l_St_Obstacle_traversing = maxspeed;
      } else {
        v_l_St_Obstacle_traversing = v_20;
      };
      object_found = object_found_St_Obstacle_traversing;
      ir_on = ir_on_St_Obstacle_traversing;
      sen0 = sen0_St_Obstacle_traversing;
      sen1 = sen1_St_Obstacle_traversing;
      v_16 = (sen0+sen1);
      sen2 = sen2_St_Obstacle_traversing;
      v_17 = (v_16+sen2);
      sen3 = sen3_St_Obstacle_traversing;
      v_18 = (v_17+sen3);
      sen4 = sen4_St_Obstacle_traversing;
      sum_St_Obstacle_traversing = (v_18+sen4);
      _out->dir = dir_St_Obstacle_traversing;
      _out->sum = sum_St_Obstacle_traversing;
      v = (_out->sum>1000);
      if (v) {
        nr_St_Obstacle_traversing = false;
        ns_St_Obstacle_traversing = Line_follower__St_PID_calculation;
      } else {
        nr_St_Obstacle_traversing = false;
        ns_St_Obstacle_traversing = Line_follower__St_Obstacle_traversing;
      };
      _out->position = position_St_Obstacle_traversing;
      _out->calc = calc_St_Obstacle_traversing;
      _out->pid = pid_St_Obstacle_traversing;
      _out->v_l = v_l_St_Obstacle_traversing;
      _out->v_r = v_r_St_Obstacle_traversing;
      ns = ns_St_Obstacle_traversing;
      nr = nr_St_Obstacle_traversing;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck = ns;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__line_follower_reset(&self->line_follower);
}

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int obj_det, int ir1, int ir2,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__line_follower_out Line_follower__line_follower_out_st;
  
  int sen[5];
  sen[0] = sen0;
  sen[1] = sen1;
  sen[2] = sen2;
  sen[3] = sen3;
  sen[4] = sen4;
  Line_follower__line_follower_step(sen, obj_det, ir1, ir2,
                                    &Line_follower__line_follower_out_st,
                                    &self->line_follower);
  _out->v_l = Line_follower__line_follower_out_st.v_l;
  _out->v_r = Line_follower__line_follower_out_st.v_r;
  _out->dir = Line_follower__line_follower_out_st.dir;
  _out->pid = Line_follower__line_follower_out_st.pid;
  _out->position = Line_follower__line_follower_out_st.position;
  _out->calc = Line_follower__line_follower_out_st.calc;
  _out->sum = Line_follower__line_follower_out_st.sum;
  _out->st = Line_follower__line_follower_out_st.st;
  _out->black_line = Line_follower__line_follower_out_st.black_line;;
}

