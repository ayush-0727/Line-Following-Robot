/* --- Generated the 7/4/2025 at 2:32 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. mar. 9 13:49:38 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self) {
  self->v_130 = true;
  self->v_120 = true;
  self->v_111 = true;
  self->v_85 = true;
  self->v_41 = true;
  self->v_25 = true;
  self->v_19 = true;
  self->pnr = false;
  self->ck = Line_follower__St_PID_calculation;
}

void Line_follower__line_follower_step(long sen[5], long obj_det, long ir1,
                                       long ir2, long ir_left, long ir_right,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self) {
  
  long v_30;
  long v_29;
  long v_28;
  long v_27;
  long v_26;
  long v_24;
  long v_23;
  long v_22;
  long v_21;
  long v_20;
  long v_18;
  long v_17;
  long v_16;
  long v_15;
  long v_14;
  long v_13;
  long v_12;
  long v_11;
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_5;
  long v_4;
  long v_3;
  long v_2;
  long v_1;
  long v;
  long v_153;
  long v_152;
  long v_151;
  long v_150;
  long v_149;
  long v_148;
  long v_147;
  long v_146;
  long v_145;
  long v_144;
  long v_143;
  long v_142;
  long v_141;
  long v_140;
  long v_139;
  long v_138;
  long v_137;
  long v_136;
  long v_135;
  long v_134;
  long v_133;
  long v_131;
  long v_129;
  long v_128;
  long v_127;
  long v_125;
  long v_123;
  long v_121;
  long v_119;
  long v_118;
  long v_117;
  long v_116;
  long v_115;
  long v_114;
  long v_112;
  long v_110;
  long v_109;
  long v_108;
  long v_107;
  long v_106;
  long v_105;
  long v_104;
  long v_103;
  long v_102;
  long v_101;
  long v_100;
  long v_99;
  long v_98;
  long v_97;
  long v_96;
  long v_95;
  long v_94;
  long v_93;
  long v_92;
  long v_91;
  long v_90;
  long v_89;
  long v_88;
  long v_87;
  long v_86;
  long v_84;
  long v_83;
  long v_82;
  long v_81;
  long v_80;
  long v_79;
  long v_78;
  long v_77;
  long v_76;
  long v_75;
  long v_74;
  long v_73;
  long v_72;
  long v_71;
  long v_70;
  long v_69;
  long v_67;
  long v_66;
  long v_65;
  long v_64;
  long v_63;
  long v_62;
  long v_61;
  long v_60;
  long v_59;
  long v_58;
  long v_57;
  long v_56;
  long v_55;
  long v_54;
  long v_53;
  long v_52;
  long v_51;
  long v_50;
  long v_49;
  long v_48;
  long v_47;
  long v_46;
  long v_45;
  long v_44;
  long v_42;
  long v_40;
  long v_39;
  long v_38;
  long v_37;
  long v_36;
  long v_35;
  long v_34;
  long v_33;
  long v_32;
  long v_31;
  long value;
  long i;
  long d;
  long p;
  long last_pos;
  long avg_ref;
  long is_line;
  long nr_St_Obstacle_traversing;
  Line_follower__st ns_St_Obstacle_traversing;
  long sen4_St_Obstacle_traversing;
  long sen3_St_Obstacle_traversing;
  long sen2_St_Obstacle_traversing;
  long sen1_St_Obstacle_traversing;
  long sen0_St_Obstacle_traversing;
  long ir_on_St_Obstacle_traversing;
  long object_found_St_Obstacle_traversing;
  long maxspeed_St_Obstacle_traversing;
  long black_line_St_Obstacle_traversing;
  long st_St_Obstacle_traversing;
  long sum_St_Obstacle_traversing;
  long calc_St_Obstacle_traversing;
  long position_St_Obstacle_traversing;
  long pid_St_Obstacle_traversing;
  long dir_St_Obstacle_traversing;
  long v_r_St_Obstacle_traversing;
  long v_l_St_Obstacle_traversing;
  long nr_St_PID_calculation;
  Line_follower__st ns_St_PID_calculation;
  long sen4_St_PID_calculation;
  long sen3_St_PID_calculation;
  long sen2_St_PID_calculation;
  long sen1_St_PID_calculation;
  long sen0_St_PID_calculation;
  long ir_on_St_PID_calculation;
  long object_found_St_PID_calculation;
  long maxspeed_St_PID_calculation;
  long black_line_St_PID_calculation;
  long st_St_PID_calculation;
  long sum_St_PID_calculation;
  long calc_St_PID_calculation;
  long position_St_PID_calculation;
  long pid_St_PID_calculation;
  long dir_St_PID_calculation;
  long v_r_St_PID_calculation;
  long v_l_St_PID_calculation;
  Line_follower__st ns;
  long r;
  long nr;
  long maxspeed;
  long object_found;
  long ir_on;
  long sen0;
  long sen1;
  long sen2;
  long sen3;
  long sen4;
  r = self->pnr;
  switch (self->ck) {
    case Line_follower__St_PID_calculation:
      if (self->v_130) {
        v_131 = true;
      } else {
        v_131 = r;
      };
      if (v_131) {
        v_133 = 0;
      } else {
        v_133 = self->v_132;
      };
      v_125 = (self->v_124<-200000);
      v_123 = (self->v_122>200000);
      if (self->v_120) {
        v_121 = true;
      } else {
        v_121 = r;
      };
      if (self->v_111) {
        v_112 = true;
      } else {
        v_112 = r;
      };
      if (v_112) {
        last_pos = 0;
      } else {
        last_pos = self->v_113;
      };
      v_118 = (last_pos<0);
      if (v_118) {
        v_119 = 0;
      } else {
        v_119 = 4000;
      };
      v_88 = (ir_right==1);
      v_87 = (ir_left==1);
      v_89 = (v_87||v_88);
      if (v_89) {
        v_90 = 1;
      } else {
        v_90 = 0;
      };
      if (self->v_85) {
        v_86 = true;
      } else {
        v_86 = r;
      };
      if (v_86) {
        object_found_St_PID_calculation = 0;
      } else {
        object_found_St_PID_calculation = v_90;
      };
      ir_on_St_PID_calculation = ir1;
      v_84 = sen[4];
      v_82 = sen[4];
      v_83 = (1000-v_82);
      v_81 = sen[3];
      v_79 = sen[3];
      v_80 = (1000-v_79);
      v_78 = sen[2];
      v_76 = sen[2];
      v_77 = (1000-v_76);
      v_75 = sen[1];
      v_73 = sen[1];
      v_74 = (1000-v_73);
      v_72 = sen[0];
      v_70 = sen[0];
      v_71 = (1000-v_70);
      v_63 = sen[4];
      v_64 = (v_63==1000);
      v_60 = sen[3];
      v_61 = (v_60==0);
      v_58 = sen[2];
      v_59 = (v_58==1000);
      v_62 = (v_59&&v_61);
      v_65 = (v_62&&v_64);
      v_54 = sen[2];
      v_55 = (v_54==1000);
      v_51 = sen[1];
      v_52 = (v_51==0);
      v_49 = sen[0];
      v_50 = (v_49==1000);
      v_53 = (v_50&&v_52);
      v_56 = (v_53&&v_55);
      v_47 = sen[2];
      v_48 = (v_47==0);
      v_57 = (v_48||v_56);
      v_66 = (v_57||v_65);
      v_44 = !(self->v_43);
      if (self->v_41) {
        v_42 = true;
      } else {
        v_42 = r;
      };
      v_39 = sen[4];
      v_37 = sen[3];
      v_35 = sen[2];
      v_33 = sen[1];
      v_32 = sen[0];
      v_34 = (v_32+v_33);
      v_36 = (v_34+v_35);
      v_38 = (v_36+v_37);
      v_40 = (v_38+v_39);
      avg_ref = (v_40/5);
      v_45 = (avg_ref>=700);
      v_46 = (v_44&&v_45);
      v_67 = (v_46&&v_66);
      if (v_67) {
        v_69 = true;
      } else {
        v_69 = self->v_68;
      };
      if (v_42) {
        black_line_St_PID_calculation = false;
      } else {
        black_line_St_PID_calculation = v_69;
      };
      maxspeed_St_PID_calculation = 60;
      st_St_PID_calculation = 1;
      _out->st = st_St_PID_calculation;
      _out->black_line = black_line_St_PID_calculation;
      if (_out->black_line) {
        sen4_St_PID_calculation = v_83;
        sen3_St_PID_calculation = v_80;
        sen2_St_PID_calculation = v_77;
        sen1_St_PID_calculation = v_74;
        sen0_St_PID_calculation = v_71;
      } else {
        sen4_St_PID_calculation = v_84;
        sen3_St_PID_calculation = v_81;
        sen2_St_PID_calculation = v_78;
        sen1_St_PID_calculation = v_75;
        sen0_St_PID_calculation = v_72;
      };
      maxspeed = maxspeed_St_PID_calculation;
      v_141 = -(maxspeed);
      v_139 = -(maxspeed);
      object_found = object_found_St_PID_calculation;
      v_31 = (object_found==1);
      if (v_31) {
        nr_St_PID_calculation = true;
        ns_St_PID_calculation = Line_follower__St_Obstacle_traversing;
      } else {
        nr_St_PID_calculation = false;
        ns_St_PID_calculation = Line_follower__St_PID_calculation;
      };
      ir_on = ir_on_St_PID_calculation;
      sen0 = sen0_St_PID_calculation;
      v_102 = (sen0>400);
      v_91 = (0*sen0);
      sen1 = sen1_St_PID_calculation;
      v_147 = (sen0+sen1);
      v_103 = (sen1>400);
      v_104 = (v_102||v_103);
      v_99 = (sen0+sen1);
      v_92 = (1000*sen1);
      v_93 = (v_91+v_92);
      sen2 = sen2_St_PID_calculation;
      v_148 = (v_147+sen2);
      v_149 = (v_148==3000);
      v_105 = (sen2>400);
      v_106 = (v_104||v_105);
      v_100 = (v_99+sen2);
      v_94 = (2000*sen2);
      v_95 = (v_93+v_94);
      sen3 = sen3_St_PID_calculation;
      v_150 = (sen2+sen3);
      v_107 = (sen3>400);
      v_108 = (v_106||v_107);
      v_101 = (v_100+sen3);
      v_96 = (3000*sen3);
      v_97 = (v_95+v_96);
      sen4 = sen4_St_PID_calculation;
      v_151 = (v_150+sen4);
      v_152 = (v_151==3000);
      if (v_152) {
        v_153 = 3;
      } else {
        v_153 = 1;
      };
      if (v_149) {
        dir_St_PID_calculation = 2;
      } else {
        dir_St_PID_calculation = v_153;
      };
      v_109 = (sen4>400);
      v_110 = (v_108||v_109);
      if (v_110) {
        is_line = true;
      } else {
        is_line = false;
      };
      sum_St_PID_calculation = (v_101+sen4);
      v_98 = (4000*sen4);
      value = (v_97+v_98);
      _out->dir = dir_St_PID_calculation;
      _out->sum = sum_St_PID_calculation;
      v_116 = (value/_out->sum);
      v_114 = (_out->sum==0);
      v_115 = !(v_114);
      if (v_115) {
        v_117 = v_116;
      } else {
        v_117 = 0;
      };
      if (is_line) {
        position_St_PID_calculation = v_117;
      } else {
        position_St_PID_calculation = v_119;
      };
      _out->position = position_St_PID_calculation;
      p = (_out->position-2000);
      v_134 = (p/25);
      d = (p-v_133);
      v_137 = (d*5);
      v_127 = (self->v_126+p);
      if (v_125) {
        v_128 = -200000;
      } else {
        v_128 = v_127;
      };
      if (v_123) {
        v_129 = 200000;
      } else {
        v_129 = v_128;
      };
      if (v_121) {
        i = 0;
      } else {
        i = v_129;
      };
      v_135 = (i/25000);
      v_136 = (v_134+v_135);
      calc_St_PID_calculation = (v_136+v_137);
      _out->calc = calc_St_PID_calculation;
      v_140 = (_out->calc<v_139);
      if (v_140) {
        v_142 = v_141;
      } else {
        v_142 = _out->calc;
      };
      v_138 = (_out->calc>maxspeed);
      if (v_138) {
        pid_St_PID_calculation = maxspeed;
      } else {
        pid_St_PID_calculation = v_142;
      };
      _out->pid = pid_St_PID_calculation;
      v_146 = (maxspeed-_out->pid);
      v_145 = (_out->pid<0);
      if (v_145) {
        v_r_St_PID_calculation = maxspeed;
      } else {
        v_r_St_PID_calculation = v_146;
      };
      v_144 = (maxspeed+_out->pid);
      v_143 = (_out->pid<0);
      if (v_143) {
        v_l_St_PID_calculation = v_144;
      } else {
        v_l_St_PID_calculation = maxspeed;
      };
      _out->v_l = v_l_St_PID_calculation;
      _out->v_r = v_r_St_PID_calculation;
      ns = ns_St_PID_calculation;
      nr = nr_St_PID_calculation;
      self->v_132 = p;
      self->v_130 = false;
      self->v_126 = i;
      self->v_124 = i;
      self->v_122 = i;
      self->v_120 = false;
      self->v_113 = _out->position;
      self->v_111 = false;
      self->v_85 = false;
      self->v_68 = _out->black_line;
      self->v_43 = _out->black_line;
      self->v_41 = false;
      break;
    case Line_follower__St_Obstacle_traversing:
      dir_St_Obstacle_traversing = 1;
      v_28 = (ir_left==1);
      v_27 = (ir1==0);
      v_29 = (v_27||v_28);
      if (self->v_25) {
        v_26 = true;
      } else {
        v_26 = r;
      };
      v_22 = (ir_left==1);
      v_21 = (ir1==0);
      v_23 = (v_21||v_22);
      if (self->v_19) {
        v_20 = true;
      } else {
        v_20 = r;
      };
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
      if (v_29) {
        v_30 = 0;
      } else {
        v_30 = maxspeed;
      };
      if (v_26) {
        v_r_St_Obstacle_traversing = 0;
      } else {
        v_r_St_Obstacle_traversing = v_30;
      };
      if (v_23) {
        v_24 = maxspeed;
      } else {
        v_24 = 0;
      };
      if (v_20) {
        v_l_St_Obstacle_traversing = maxspeed;
      } else {
        v_l_St_Obstacle_traversing = v_24;
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
      self->v_25 = false;
      self->v_19 = false;
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

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long obj_det, long ir1, long ir2,
                              long ir_left, long ir_right,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__line_follower_out Line_follower__line_follower_out_st;
  
  long sen[5];
  sen[0] = sen0;
  sen[1] = sen1;
  sen[2] = sen2;
  sen[3] = sen3;
  sen[4] = sen4;
  Line_follower__line_follower_step(sen, obj_det, ir1, ir2, ir_left,
                                    ir_right,
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

