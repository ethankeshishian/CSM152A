/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CSM152A/Lab1/FPCVT.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {13, 0};
static int ng4[] = {12, 0};
static int ng5[] = {8, 0};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {31U, 0U};
static int ng8[] = {7, 0};



static void Cont_33_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 12);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 12);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 4512);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0);
    t25 = (t0 + 4384);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4400);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_38_2(char *t0)
{
    char t6[8];
    char t28[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4416);
    *((int *)t2) = 1;
    t3 = (t0 + 3848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    *((unsigned int *)t28) = t33;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB14;

LAB13:    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 4294967295U);
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 4294967295U);
    t40 = ((char*)((ng1)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t28, 32, t40, 32);
    t42 = (t0 + 2088);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 13);
    goto LAB12;

LAB14:    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t28) = (t34 | t35);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t29) = (t36 | t37);
    goto LAB13;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t22, 0, 0, 13);
    goto LAB21;

}

static void Always_43_3(char *t0)
{
    char t6[8];
    char t23[8];
    char t47[8];
    char t49[8];
    char t50[8];
    char t55[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t48;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 4064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4432);
    *((int *)t2) = 1;
    t3 = (t0 + 4096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t5) == 0)
        goto LAB7;

LAB9:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB10:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB29;

LAB28:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB31;

LAB30:    *((unsigned int *)t6) = 1;

LAB31:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(57, ng0);

LAB37:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t2, 32, t5, 5);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2248);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t19, 32, t22, 5);
    t24 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t6, 5, t4, ((int*)(t13)), 2, t23, 32, 2, t24, 32, 1, 0);
    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t6, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng6)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t19, 32, t20, 32);
    t21 = ((char*)((ng1)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t23, 32, t21, 32);
    t22 = (t0 + 2248);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_minus(t49, 32, t47, 32, t25, 5);
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t13, 2, t49, 32, 2);
    t38 = ((char*)((ng1)));
    memset(t50, 0, 8);
    t39 = (t6 + 4);
    t45 = (t38 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t38);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t39);
    t11 = *((unsigned int *)t45);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t39);
    t17 = *((unsigned int *)t45);
    t18 = (t16 | t17);
    t26 = (~(t18));
    t27 = (t15 & t26);
    if (t27 != 0)
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t50) = 1;

LAB41:    t48 = (t50 + 4);
    t28 = *((unsigned int *)t48);
    t29 = (~(t28));
    t30 = *((unsigned int *)t50);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB35:    goto LAB2;

LAB7:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    t24 = (t21 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB17;

LAB14:    if (t35 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t23) = 1;

LAB17:    t39 = (t23 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t12 = (t5 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2248);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t19, 32, t22, 5);
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t13, 2, t23, 32, 2);
    t24 = ((char*)((ng1)));
    memset(t47, 0, 8);
    t25 = (t6 + 4);
    t38 = (t24 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t24);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t38);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t38);
    t18 = (t16 | t17);
    t26 = (~(t18));
    t27 = (t15 & t26);
    if (t27 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t47) = 1;

LAB24:    t45 = (t47 + 4);
    t28 = *((unsigned int *)t45);
    t29 = (~(t28));
    t30 = *((unsigned int *)t47);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 5);

LAB27:
LAB20:    goto LAB6;

LAB16:    t38 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);
    t45 = ((char*)((ng1)));
    t46 = (t0 + 2408);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 1);
    goto LAB20;

LAB23:    t39 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(49, ng0);
    t46 = ((char*)((ng1)));
    t48 = (t0 + 2408);
    xsi_vlogvar_assign_value(t48, t46, 0, 0, 1);
    goto LAB27;

LAB29:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(53, ng0);

LAB36:    xsi_set_current_line(54, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 3);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 31U);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 5);
    goto LAB35;

LAB40:    t46 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(62, ng0);

LAB45:    xsi_set_current_line(63, ng0);
    t51 = (t0 + 1928);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng7)));
    memset(t55, 0, 8);
    t56 = (t53 + 4);
    t57 = (t54 + 4);
    t33 = *((unsigned int *)t53);
    t34 = *((unsigned int *)t54);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t56);
    t37 = *((unsigned int *)t57);
    t40 = (t36 ^ t37);
    t41 = (t35 | t40);
    t42 = *((unsigned int *)t56);
    t43 = *((unsigned int *)t57);
    t44 = (t42 | t43);
    t58 = (~(t44));
    t59 = (t41 & t58);
    if (t59 != 0)
        goto LAB49;

LAB46:    if (t44 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t55) = 1;

LAB49:    t61 = (t55 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t55);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 5);
    goto LAB44;

LAB48:    t60 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(63, ng0);

LAB53:    xsi_set_current_line(64, ng0);
    t67 = (t0 + 1768);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng8)));
    memset(t71, 0, 8);
    t72 = (t69 + 4);
    t73 = (t70 + 4);
    t74 = *((unsigned int *)t69);
    t75 = *((unsigned int *)t70);
    t76 = (t74 ^ t75);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    t84 = (~(t83));
    t85 = (t80 & t84);
    if (t85 != 0)
        goto LAB57;

LAB54:    if (t83 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t71) = 1;

LAB57:    t87 = (t71 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t71);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 3, t5, 32);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 3);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t12 = ((char*)((ng1)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_rshift(t23, 32, t6, 32, t12, 32);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t23, 0, 0, 5);
    goto LAB52;

LAB56:    t86 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(64, ng0);

LAB61:    xsi_set_current_line(65, ng0);
    t93 = ((char*)((ng1)));
    t94 = (t0 + 1608);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 1);
    goto LAB60;

}


extern void work_m_11436060145621290837_0644182429_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Always_35_1,(void *)Always_38_2,(void *)Always_43_3};
	xsi_register_didat("work_m_11436060145621290837_0644182429", "isim/FPCVT_isim_beh.exe.sim/work/m_11436060145621290837_0644182429.didat");
	xsi_register_executes(pe);
}
