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
static const char *ng0 = "/home/ise/CSM152A/lab4/parking_meter.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {180, 0};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {9999U, 0U};
static int ng11[] = {1000, 0};
static int ng12[] = {100, 0};
static int ng13[] = {10, 0};
static int ng14[] = {4, 0};
static int ng15[] = {0, 0};
static int ng16[] = {2, 0};
static int ng17[] = {3, 0};
static unsigned int ng18[] = {127U, 0U};
static unsigned int ng19[] = {1U, 0U};
static unsigned int ng20[] = {79U, 0U};
static unsigned int ng21[] = {18U, 0U};
static unsigned int ng22[] = {76U, 0U};
static int ng23[] = {5, 0};
static unsigned int ng24[] = {36U, 0U};
static int ng25[] = {6, 0};
static unsigned int ng26[] = {32U, 0U};
static int ng27[] = {7, 0};
static unsigned int ng28[] = {15U, 0U};
static int ng29[] = {8, 0};
static unsigned int ng30[] = {0U, 0U};
static int ng31[] = {9, 0};
static unsigned int ng32[] = {2U, 0U};
static int ng33[] = {16, 0};
static int ng34[] = {150, 0};
static int ng35[] = {60, 0};
static int ng36[] = {120, 0};
static int ng37[] = {300, 0};



static int sp_set_next_state(char *t1, char *t2)
{
    char t13[8];
    char t19[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2480);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(189, ng0);

LAB5:    xsi_set_current_line(190, ng0);
    t5 = (t1 + 4408U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(193, ng0);
    t4 = (t1 + 4568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(196, ng0);
    t4 = (t1 + 4728U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(199, ng0);
    t4 = (t1 + 4888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(202, ng0);
    t4 = (t1 + 7688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB23;

LAB22:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB24;

LAB25:    t17 = (t13 + 4);
    t7 = *((unsigned int *)t17);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(205, ng0);
    t4 = (t1 + 7688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB32;

LAB31:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB33;

LAB34:    t17 = (t13 + 4);
    t7 = *((unsigned int *)t17);
    t8 = (~(t7));
    t9 = *((unsigned int *)t13);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(208, ng0);

LAB40:    xsi_set_current_line(209, ng0);
    t4 = ((char*)((ng9)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 7528);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB38:
LAB29:
LAB20:
LAB16:
LAB12:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(190, ng0);

LAB9:    xsi_set_current_line(191, ng0);
    t12 = ((char*)((ng1)));
    memcpy(t13, t12, 8);
    t14 = (t1 + 7528);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 6);
    goto LAB8;

LAB10:    xsi_set_current_line(193, ng0);

LAB13:    xsi_set_current_line(194, ng0);
    t6 = ((char*)((ng2)));
    memcpy(t13, t6, 8);
    t12 = (t1 + 7528);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 6);
    goto LAB12;

LAB14:    xsi_set_current_line(196, ng0);

LAB17:    xsi_set_current_line(197, ng0);
    t6 = ((char*)((ng3)));
    memcpy(t13, t6, 8);
    t12 = (t1 + 7528);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 6);
    goto LAB16;

LAB18:    xsi_set_current_line(199, ng0);

LAB21:    xsi_set_current_line(200, ng0);
    t6 = ((char*)((ng4)));
    memcpy(t13, t6, 8);
    t12 = (t1 + 7528);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 6);
    goto LAB20;

LAB23:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(202, ng0);

LAB30:    xsi_set_current_line(203, ng0);
    t18 = ((char*)((ng6)));
    memcpy(t19, t18, 8);
    t20 = (t1 + 7528);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 6);
    goto LAB29;

LAB32:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(205, ng0);

LAB39:    xsi_set_current_line(206, ng0);
    t18 = ((char*)((ng8)));
    memcpy(t19, t18, 8);
    t20 = (t1 + 7528);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 6);
    goto LAB38;

}

static int sp_fix_timer_overflow(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2912);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(220, ng0);

LAB5:    xsi_set_current_line(221, ng0);
    t5 = (t1 + 7688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng10)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB6:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) > *((unsigned int *)t8))
        goto LAB8;

LAB9:    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(221, ng0);

LAB14:    xsi_set_current_line(222, ng0);
    t19 = ((char*)((ng10)));
    t20 = (t1 + 7688);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 14);
    goto LAB13;

}

static int sp_set_digits(char *t1, char *t2)
{
    char t9[8];
    char t11[8];
    char t12[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3344);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(232, ng0);

LAB5:    xsi_set_current_line(233, ng0);
    t5 = (t1 + 7688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 14, t8, 32);
    t10 = (t1 + 7208);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(234, ng0);
    t4 = (t1 + 7688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 14, t7, 32);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_divide(t11, 32, t9, 32, t8, 32);
    t10 = (t1 + 7048);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 4);
    xsi_set_current_line(235, ng0);
    t4 = (t1 + 7688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 14, t7, 32);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t9, 32, t8, 32);
    t10 = ((char*)((ng13)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_divide(t12, 32, t11, 32, t10, 32);
    t13 = (t1 + 6888);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(236, ng0);
    t4 = (t1 + 7688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 14, t7, 32);
    t8 = ((char*)((ng12)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t9, 32, t8, 32);
    t10 = ((char*)((ng13)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 32, t11, 32, t10, 32);
    t13 = (t1 + 6728);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(238, ng0);
    t4 = (t1 + 7848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 7, t7, 32);
    t8 = ((char*)((ng15)));
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(241, ng0);
    t4 = (t1 + 7848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 7, t7, 32);
    t8 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB23;

LAB20:    if (t23 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t11) = 1;

LAB23:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(244, ng0);
    t4 = (t1 + 7848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 7, t7, 32);
    t8 = ((char*)((ng16)));
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB37;

LAB34:    if (t23 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t11) = 1;

LAB37:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(248, ng0);

LAB48:    xsi_set_current_line(249, ng0);
    t4 = (t1 + 7208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng14)));
    t8 = (t1 + 8168);
    t10 = (t8 + 56U);
    t13 = *((char **)t10);
    t26 = (t2 + 56U);
    t27 = *((char **)t26);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t34, &&LAB49);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 3776);
    t38 = xsi_create_subprogram_invocation(t36, 0, t1, t37, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t37, t38);
    t39 = (t1 + 8328);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 4);
    t40 = (t1 + 8488);
    xsi_vlogvar_assign_value(t40, t7, 0, 0, 3);
    t41 = (t1 + 8648);
    xsi_vlogvar_assign_value(t41, t13, 0, 0, 1);

LAB51:    t42 = (t2 + 64U);
    t43 = *((char **)t42);
    t44 = (t43 + 80U);
    t45 = *((char **)t44);
    t46 = (t45 + 272U);
    t47 = *((char **)t46);
    t48 = (t47 + 0U);
    t49 = *((char **)t48);
    t59 = ((int  (*)(char *, char *))t49)(t1, t43);
    if (t59 == -1)
        goto LAB52;

LAB53:    if (t59 != 0)
        goto LAB54;

LAB49:    t43 = (t1 + 3776);
    xsi_vlog_subprogram_popinvocation(t43);

LAB50:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t50 = (t1 + 3776);
    t52 = (t2 + 56U);
    t53 = *((char **)t52);
    xsi_delete_subprogram_invocation(t50, t51, t1, t53, t2);

LAB40:
LAB26:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(238, ng0);

LAB13:    xsi_set_current_line(239, ng0);
    t33 = (t1 + 6728);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng5)));
    t37 = (t1 + 8168);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB14);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3776);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 8328);
    xsi_vlogvar_assign_value(t48, t35, 0, 0, 4);
    t49 = (t1 + 8488);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 3);
    t50 = (t1 + 8648);
    xsi_vlogvar_assign_value(t50, t39, 0, 0, 1);

LAB16:    t51 = (t2 + 64U);
    t52 = *((char **)t51);
    t53 = (t52 + 80U);
    t54 = *((char **)t53);
    t55 = (t54 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t58 = *((char **)t57);
    t59 = ((int  (*)(char *, char *))t58)(t1, t52);
    if (t59 == -1)
        goto LAB17;

LAB18:    if (t59 != 0)
        goto LAB19;

LAB14:    t52 = (t1 + 3776);
    xsi_vlog_subprogram_popinvocation(t52);

LAB15:    t60 = (t2 + 64U);
    t61 = *((char **)t60);
    t60 = (t1 + 3776);
    t62 = (t2 + 56U);
    t63 = *((char **)t62);
    xsi_delete_subprogram_invocation(t60, t61, t1, t63, t2);
    goto LAB12;

LAB17:    t0 = -1;
    goto LAB1;

LAB19:    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB16;
    goto LAB1;

LAB22:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(241, ng0);

LAB27:    xsi_set_current_line(242, ng0);
    t33 = (t1 + 6888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng16)));
    t37 = (t1 + 8168);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB28);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3776);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 8328);
    xsi_vlogvar_assign_value(t48, t35, 0, 0, 4);
    t49 = (t1 + 8488);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 3);
    t50 = (t1 + 8648);
    xsi_vlogvar_assign_value(t50, t39, 0, 0, 1);

LAB30:    t51 = (t2 + 64U);
    t52 = *((char **)t51);
    t53 = (t52 + 80U);
    t54 = *((char **)t53);
    t55 = (t54 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t58 = *((char **)t57);
    t59 = ((int  (*)(char *, char *))t58)(t1, t52);
    if (t59 == -1)
        goto LAB31;

LAB32:    if (t59 != 0)
        goto LAB33;

LAB28:    t52 = (t1 + 3776);
    xsi_vlog_subprogram_popinvocation(t52);

LAB29:    t60 = (t2 + 64U);
    t61 = *((char **)t60);
    t60 = (t1 + 3776);
    t62 = (t2 + 56U);
    t63 = *((char **)t62);
    xsi_delete_subprogram_invocation(t60, t61, t1, t63, t2);
    goto LAB26;

LAB31:    t0 = -1;
    goto LAB1;

LAB33:    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB30;
    goto LAB1;

LAB36:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(244, ng0);

LAB41:    xsi_set_current_line(245, ng0);
    t33 = (t1 + 7048);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng17)));
    t37 = (t1 + 8168);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB42);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3776);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 8328);
    xsi_vlogvar_assign_value(t48, t35, 0, 0, 4);
    t49 = (t1 + 8488);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 3);
    t50 = (t1 + 8648);
    xsi_vlogvar_assign_value(t50, t39, 0, 0, 1);

LAB44:    t51 = (t2 + 64U);
    t52 = *((char **)t51);
    t53 = (t52 + 80U);
    t54 = *((char **)t53);
    t55 = (t54 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t58 = *((char **)t57);
    t59 = ((int  (*)(char *, char *))t58)(t1, t52);
    if (t59 == -1)
        goto LAB45;

LAB46:    if (t59 != 0)
        goto LAB47;

LAB42:    t52 = (t1 + 3776);
    xsi_vlog_subprogram_popinvocation(t52);

LAB43:    t60 = (t2 + 64U);
    t61 = *((char **)t60);
    t60 = (t1 + 3776);
    t62 = (t2 + 56U);
    t63 = *((char **)t62);
    xsi_delete_subprogram_invocation(t60, t61, t1, t63, t2);
    goto LAB40;

LAB45:    t0 = -1;
    goto LAB1;

LAB47:    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB44;
    goto LAB1;

LAB52:    t0 = -1;
    goto LAB1;

LAB54:    t42 = (t2 + 48U);
    *((char **)t42) = &&LAB51;
    goto LAB1;

}

static int sp_set_one_digit(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3776);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(260, ng0);

LAB5:    xsi_set_current_line(262, ng0);
    t5 = (t1 + 8648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(266, ng0);
    t4 = (t1 + 8328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB10:    t7 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t16 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng16)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng17)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng14)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng23)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB21;

LAB22:    t4 = ((char*)((ng25)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB23;

LAB24:    t4 = ((char*)((ng27)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB25;

LAB26:    t4 = ((char*)((ng29)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB27;

LAB28:    t4 = ((char*)((ng31)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB29;

LAB30:
LAB31:
LAB8:    xsi_set_current_line(302, ng0);
    t4 = (t1 + 8488);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);

LAB42:    t8 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t8, 32);
    if (t16 == 1)
        goto LAB43;

LAB44:    t4 = ((char*)((ng16)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t16 == 1)
        goto LAB45;

LAB46:    t4 = ((char*)((ng17)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t16 == 1)
        goto LAB47;

LAB48:    t4 = ((char*)((ng14)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t16 == 1)
        goto LAB49;

LAB50:
LAB51:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(262, ng0);

LAB9:    xsi_set_current_line(263, ng0);
    t14 = ((char*)((ng18)));
    t15 = (t1 + 5928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 7);
    goto LAB8;

LAB11:    xsi_set_current_line(268, ng0);

LAB32:    xsi_set_current_line(269, ng0);
    t8 = ((char*)((ng19)));
    t14 = (t1 + 5928);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 7);
    goto LAB31;

LAB13:    xsi_set_current_line(271, ng0);

LAB33:    xsi_set_current_line(272, ng0);
    t5 = ((char*)((ng20)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB15:    xsi_set_current_line(274, ng0);

LAB34:    xsi_set_current_line(275, ng0);
    t5 = ((char*)((ng21)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB17:    xsi_set_current_line(277, ng0);

LAB35:    xsi_set_current_line(278, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB19:    xsi_set_current_line(280, ng0);

LAB36:    xsi_set_current_line(281, ng0);
    t5 = ((char*)((ng22)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB21:    xsi_set_current_line(283, ng0);

LAB37:    xsi_set_current_line(284, ng0);
    t5 = ((char*)((ng24)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB23:    xsi_set_current_line(286, ng0);

LAB38:    xsi_set_current_line(287, ng0);
    t5 = ((char*)((ng26)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB25:    xsi_set_current_line(289, ng0);

LAB39:    xsi_set_current_line(290, ng0);
    t5 = ((char*)((ng28)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB27:    xsi_set_current_line(292, ng0);

LAB40:    xsi_set_current_line(293, ng0);
    t5 = ((char*)((ng30)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB29:    xsi_set_current_line(295, ng0);

LAB41:    xsi_set_current_line(296, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t1 + 5928);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB43:    xsi_set_current_line(304, ng0);

LAB52:    xsi_set_current_line(305, ng0);
    t14 = ((char*)((ng30)));
    t15 = (t1 + 6088);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(307, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(308, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

LAB45:    xsi_set_current_line(310, ng0);

LAB53:    xsi_set_current_line(311, ng0);
    t5 = ((char*)((ng19)));
    t8 = (t1 + 6088);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(312, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(313, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(314, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

LAB47:    xsi_set_current_line(316, ng0);

LAB54:    xsi_set_current_line(317, ng0);
    t5 = ((char*)((ng19)));
    t8 = (t1 + 6088);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(318, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(319, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 6408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(320, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

LAB49:    xsi_set_current_line(322, ng0);

LAB55:    xsi_set_current_line(323, ng0);
    t5 = ((char*)((ng19)));
    t8 = (t1 + 6088);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(324, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(325, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t1 + 6408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(326, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 6568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

}

static void Always_83_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 9560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 10376);
    *((int *)t2) = 1;
    t3 = (t0 + 9592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 5528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 7528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);

LAB14:
LAB11:
LAB8:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 7, t5, 32);
    t11 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 7, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t12, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB15:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB18;

LAB17:    *((unsigned int *)t12) = 1;

LAB18:    t15 = (t12 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    xsi_set_current_line(84, ng0);
    t11 = ((char*)((ng30)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 6, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng19)));
    memcpy(t12, t4, 8);
    t5 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 6, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng32)));
    memcpy(t12, t4, 8);
    t5 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 6, 0LL);
    goto LAB14;

LAB16:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(91, ng0);

LAB23:    xsi_set_current_line(92, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 7, 0LL);
    goto LAB22;

}

static void Always_97_1(char *t0)
{
    char t10[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
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
    unsigned int t38;

LAB0:    t1 = (t0 + 9808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 10392);
    *((int *)t2) = 1;
    t3 = (t0 + 9840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 7368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 5);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);

LAB27:    xsi_set_current_line(101, ng0);
    t9 = ((char*)((ng6)));
    memcpy(t10, t9, 8);
    t11 = (t0 + 7528);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 6);
    goto LAB26;

LAB8:    xsi_set_current_line(103, ng0);

LAB28:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 7688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 14);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    memcpy(t10, t2, 8);
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 6);
    goto LAB26;

LAB10:    xsi_set_current_line(107, ng0);

LAB29:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 7688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 14);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    memcpy(t10, t2, 8);
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 6);
    goto LAB26;

LAB12:    xsi_set_current_line(111, ng0);

LAB30:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng35)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t5, 14, t7, 32);
    t9 = (t0 + 7688);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 14);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2912);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB33:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB35:    if (t8 != 0)
        goto LAB36;

LAB31:    t7 = (t0 + 2912);
    xsi_vlog_subprogram_popinvocation(t7);

LAB32:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2912);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB39:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB41:    if (t8 != 0)
        goto LAB42;

LAB37:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB38:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2480);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB26;

LAB14:    xsi_set_current_line(116, ng0);

LAB43:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng36)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t5, 14, t7, 32);
    t9 = (t0 + 7688);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 14);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2912);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB46:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB48:    if (t8 != 0)
        goto LAB49;

LAB44:    t7 = (t0 + 2912);
    xsi_vlog_subprogram_popinvocation(t7);

LAB45:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2912);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB52:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB54:    if (t8 != 0)
        goto LAB55;

LAB50:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB51:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2480);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB26;

LAB16:    xsi_set_current_line(121, ng0);

LAB56:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t5, 14, t7, 32);
    t9 = (t0 + 7688);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 14);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2912);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB59:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB61:    if (t8 != 0)
        goto LAB62;

LAB57:    t7 = (t0 + 2912);
    xsi_vlog_subprogram_popinvocation(t7);

LAB58:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2912);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB65:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB67:    if (t8 != 0)
        goto LAB68;

LAB63:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB64:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2480);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB26;

LAB18:    xsi_set_current_line(126, ng0);

LAB69:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng37)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t5, 14, t7, 32);
    t9 = (t0 + 7688);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 14);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2912);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB72:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB74:    if (t8 != 0)
        goto LAB75;

LAB70:    t7 = (t0 + 2912);
    xsi_vlog_subprogram_popinvocation(t7);

LAB71:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2912);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB78:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB80:    if (t8 != 0)
        goto LAB81;

LAB76:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB77:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2480);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB26;

LAB20:    xsi_set_current_line(131, ng0);

LAB82:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 9616);
    t4 = (t0 + 2480);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB85:    t7 = (t0 + 9712);
    t9 = *((char **)t7);
    t11 = (t9 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t20 = ((int  (*)(char *, char *))t16)(t0, t9);

LAB87:    if (t20 != 0)
        goto LAB88;

LAB83:    t9 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t9);

LAB84:    t17 = (t0 + 9712);
    t18 = *((char **)t17);
    t17 = (t0 + 2480);
    t19 = (t0 + 9616);
    t21 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t21);
    goto LAB26;

LAB22:    xsi_set_current_line(134, ng0);

LAB89:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 7848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t11 = (t9 + 4);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t9);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t11);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t11);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB93;

LAB90:    if (t31 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t10) = 1;

LAB93:    t13 = (t10 + 4);
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t10);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB100:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB102:    if (t8 != 0)
        goto LAB103;

LAB98:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB99:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2480);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB26;

LAB24:    xsi_set_current_line(140, ng0);

LAB104:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 7848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t11 = (t9 + 4);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t9);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t11);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t7);
    t30 = *((unsigned int *)t11);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB108;

LAB105:    if (t31 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t10) = 1;

LAB108:    t13 = (t10 + 4);
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t10);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB109;

LAB110:
LAB111:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 9616);
    t3 = (t0 + 2480);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB115:    t5 = (t0 + 9712);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB117:    if (t8 != 0)
        goto LAB118;

LAB113:    t7 = (t0 + 2480);
    xsi_vlog_subprogram_popinvocation(t7);

LAB114:    t16 = (t0 + 9712);
    t17 = *((char **)t16);
    t16 = (t0 + 2480);
    t18 = (t0 + 9616);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB26;

LAB34:;
LAB36:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB39;
    goto LAB1;

LAB47:;
LAB49:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB46;
    goto LAB1;

LAB53:;
LAB55:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB52;
    goto LAB1;

LAB60:;
LAB62:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB59;
    goto LAB1;

LAB66:;
LAB68:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB65;
    goto LAB1;

LAB73:;
LAB75:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB72;
    goto LAB1;

LAB79:;
LAB81:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB78;
    goto LAB1;

LAB86:;
LAB88:    t7 = (t0 + 9808U);
    *((char **)t7) = &&LAB85;
    goto LAB1;

LAB92:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(135, ng0);

LAB97:    xsi_set_current_line(136, ng0);
    t14 = (t0 + 7688);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t16, 14, t17, 32);
    t18 = (t0 + 7688);
    xsi_vlogvar_assign_value(t18, t39, 0, 0, 14);
    goto LAB96;

LAB101:;
LAB103:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB100;
    goto LAB1;

LAB107:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(141, ng0);

LAB112:    xsi_set_current_line(142, ng0);
    t14 = (t0 + 7688);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t16, 14, t17, 32);
    t18 = (t0 + 7688);
    xsi_vlogvar_assign_value(t18, t39, 0, 0, 14);
    goto LAB111;

LAB116:;
LAB118:    t5 = (t0 + 9808U);
    *((char **)t5) = &&LAB115;
    goto LAB1;

}

static void Always_150_2(char *t0)
{
    char t11[8];
    char t12[8];
    char t29[8];
    char t30[8];
    char t34[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 10056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10408);
    *((int *)t2) = 1;
    t3 = (t0 + 10088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 7368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 5);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(153, ng0);

LAB19:    xsi_set_current_line(154, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 7688);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 14);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB21;

LAB20:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB23:    memset(t12, 0, 8);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t13) != 0)
        goto LAB27;

LAB28:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB29;

LAB30:    memcpy(t42, t12, 8);

LAB31:    t73 = (t42 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t42);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(158, ng0);

LAB54:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 9864);
    t5 = (t0 + 3344);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t9 = (t0 + 8008);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 7);
    t10 = (t0 + 8168);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);

LAB57:    t13 = (t0 + 9960);
    t19 = *((char **)t13);
    t20 = (t19 + 80U);
    t24 = *((char **)t20);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t8 = ((int  (*)(char *, char *))t28)(t0, t19);

LAB59:    if (t8 != 0)
        goto LAB60;

LAB55:    t19 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t19);

LAB56:    t31 = (t0 + 9960);
    t32 = *((char **)t31);
    t31 = (t0 + 3344);
    t33 = (t0 + 9864);
    t35 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t35);

LAB46:    goto LAB18;

LAB8:    xsi_set_current_line(162, ng0);

LAB61:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t5, 14, t7, 32);
    t9 = ((char*)((ng15)));
    memset(t12, 0, 8);
    t10 = (t11 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t11);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t13);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t10);
    t36 = *((unsigned int *)t13);
    t37 = (t23 | t36);
    t38 = (~(t37));
    t39 = (t22 & t38);
    if (t39 != 0)
        goto LAB65;

LAB62:    if (t37 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t12) = 1;

LAB65:    t20 = (t12 + 4);
    t40 = *((unsigned int *)t20);
    t43 = (~(t40));
    t44 = *((unsigned int *)t12);
    t45 = (t44 & t43);
    t49 = (t45 != 0);
    if (t49 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(166, ng0);

LAB76:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 9864);
    t5 = (t0 + 3344);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t9 = (t0 + 8008);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 7);
    t10 = (t0 + 8168);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);

LAB79:    t13 = (t0 + 9960);
    t19 = *((char **)t13);
    t20 = (t19 + 80U);
    t24 = *((char **)t20);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t8 = ((int  (*)(char *, char *))t28)(t0, t19);

LAB81:    if (t8 != 0)
        goto LAB82;

LAB77:    t19 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t19);

LAB78:    t31 = (t0 + 9960);
    t32 = *((char **)t31);
    t31 = (t0 + 3344);
    t33 = (t0 + 9864);
    t35 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t35);

LAB68:    goto LAB18;

LAB10:    xsi_set_current_line(170, ng0);

LAB83:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 9864);
    t7 = (t0 + 3344);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 8008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t13 = (t0 + 8168);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);

LAB86:    t19 = (t0 + 9960);
    t20 = *((char **)t19);
    t24 = (t20 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t31 = *((char **)t28);
    t66 = ((int  (*)(char *, char *))t31)(t0, t20);

LAB88:    if (t66 != 0)
        goto LAB89;

LAB84:    t20 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t20);

LAB85:    t32 = (t0 + 9960);
    t33 = *((char **)t32);
    t32 = (t0 + 3344);
    t35 = (t0 + 9864);
    t41 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t35, t41);
    goto LAB18;

LAB12:    xsi_set_current_line(173, ng0);

LAB90:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 9864);
    t7 = (t0 + 3344);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 8008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t13 = (t0 + 8168);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);

LAB93:    t19 = (t0 + 9960);
    t20 = *((char **)t19);
    t24 = (t20 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t31 = *((char **)t28);
    t66 = ((int  (*)(char *, char *))t31)(t0, t20);

LAB95:    if (t66 != 0)
        goto LAB96;

LAB91:    t20 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t20);

LAB92:    t32 = (t0 + 9960);
    t33 = *((char **)t32);
    t32 = (t0 + 3344);
    t35 = (t0 + 9864);
    t41 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t35, t41);
    goto LAB18;

LAB14:    xsi_set_current_line(176, ng0);

LAB97:    xsi_set_current_line(177, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 9864);
    t7 = (t0 + 3344);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 8008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t13 = (t0 + 8168);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);

LAB100:    t19 = (t0 + 9960);
    t20 = *((char **)t19);
    t24 = (t20 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t31 = *((char **)t28);
    t66 = ((int  (*)(char *, char *))t31)(t0, t20);

LAB102:    if (t66 != 0)
        goto LAB103;

LAB98:    t20 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t20);

LAB99:    t32 = (t0 + 9960);
    t33 = *((char **)t32);
    t32 = (t0 + 3344);
    t35 = (t0 + 9864);
    t41 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t35, t41);
    goto LAB18;

LAB16:    xsi_set_current_line(179, ng0);

LAB104:    xsi_set_current_line(180, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 9864);
    t7 = (t0 + 3344);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 8008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t13 = (t0 + 8168);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);

LAB107:    t19 = (t0 + 9960);
    t20 = *((char **)t19);
    t24 = (t20 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t31 = *((char **)t28);
    t66 = ((int  (*)(char *, char *))t31)(t0, t20);

LAB109:    if (t66 != 0)
        goto LAB110;

LAB105:    t20 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t20);

LAB106:    t32 = (t0 + 9960);
    t33 = *((char **)t32);
    t32 = (t0 + 3344);
    t35 = (t0 + 9864);
    t41 = 0;
    xsi_delete_subprogram_invocation(t32, t33, t0, t35, t41);
    goto LAB18;

LAB21:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB23;

LAB25:    *((unsigned int *)t12) = 1;
    goto LAB28;

LAB27:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB28;

LAB29:    t24 = (t0 + 7848);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 472);
    t28 = *((char **)t27);
    t27 = ((char*)((ng16)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_divide(t29, 32, t28, 32, t27, 32);
    memset(t30, 0, 8);
    t31 = (t26 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB33;

LAB32:    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t26) > *((unsigned int *)t29))
        goto LAB35;

LAB34:    *((unsigned int *)t30) = 1;

LAB35:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t35) != 0)
        goto LAB39;

LAB40:    t43 = *((unsigned int *)t12);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t12 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB31;

LAB33:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB35;

LAB37:    *((unsigned int *)t34) = 1;
    goto LAB40;

LAB39:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB40;

LAB41:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t12 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t12);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t8 = (t59 & t61);
    t66 = (t63 & t65);
    t67 = (~(t8));
    t68 = (~(t66));
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t67);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    goto LAB43;

LAB44:    xsi_set_current_line(155, ng0);

LAB47:    xsi_set_current_line(156, ng0);
    t79 = (t0 + 472);
    t80 = *((char **)t79);
    t79 = ((char*)((ng15)));
    t81 = (t0 + 9864);
    t82 = (t0 + 3344);
    t83 = xsi_create_subprogram_invocation(t81, 0, t0, t82, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t82, t83);
    t84 = (t0 + 8008);
    xsi_vlogvar_assign_value(t84, t80, 0, 0, 7);
    t85 = (t0 + 8168);
    xsi_vlogvar_assign_value(t85, t79, 0, 0, 1);

LAB50:    t86 = (t0 + 9960);
    t87 = *((char **)t86);
    t88 = (t87 + 80U);
    t89 = *((char **)t88);
    t90 = (t89 + 272U);
    t91 = *((char **)t90);
    t92 = (t91 + 0U);
    t93 = *((char **)t92);
    t94 = ((int  (*)(char *, char *))t93)(t0, t87);

LAB52:    if (t94 != 0)
        goto LAB53;

LAB48:    t87 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t87);

LAB49:    t95 = (t0 + 9960);
    t96 = *((char **)t95);
    t95 = (t0 + 3344);
    t97 = (t0 + 9864);
    t98 = 0;
    xsi_delete_subprogram_invocation(t95, t96, t0, t97, t98);
    goto LAB46;

LAB51:;
LAB53:    t86 = (t0 + 10056U);
    *((char **)t86) = &&LAB50;
    goto LAB1;

LAB58:;
LAB60:    t13 = (t0 + 10056U);
    *((char **)t13) = &&LAB57;
    goto LAB1;

LAB64:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(163, ng0);

LAB69:    xsi_set_current_line(164, ng0);
    t24 = (t0 + 472);
    t25 = *((char **)t24);
    t24 = ((char*)((ng15)));
    t26 = (t0 + 9864);
    t27 = (t0 + 3344);
    t28 = xsi_create_subprogram_invocation(t26, 0, t0, t27, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t27, t28);
    t31 = (t0 + 8008);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 7);
    t32 = (t0 + 8168);
    xsi_vlogvar_assign_value(t32, t24, 0, 0, 1);

LAB72:    t33 = (t0 + 9960);
    t35 = *((char **)t33);
    t41 = (t35 + 80U);
    t46 = *((char **)t41);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t56 = (t48 + 0U);
    t57 = *((char **)t56);
    t66 = ((int  (*)(char *, char *))t57)(t0, t35);

LAB74:    if (t66 != 0)
        goto LAB75;

LAB70:    t35 = (t0 + 3344);
    xsi_vlog_subprogram_popinvocation(t35);

LAB71:    t73 = (t0 + 9960);
    t79 = *((char **)t73);
    t73 = (t0 + 3344);
    t80 = (t0 + 9864);
    t81 = 0;
    xsi_delete_subprogram_invocation(t73, t79, t0, t80, t81);
    goto LAB68;

LAB73:;
LAB75:    t33 = (t0 + 10056U);
    *((char **)t33) = &&LAB72;
    goto LAB1;

LAB80:;
LAB82:    t13 = (t0 + 10056U);
    *((char **)t13) = &&LAB79;
    goto LAB1;

LAB87:;
LAB89:    t19 = (t0 + 10056U);
    *((char **)t19) = &&LAB86;
    goto LAB1;

LAB94:;
LAB96:    t19 = (t0 + 10056U);
    *((char **)t19) = &&LAB93;
    goto LAB1;

LAB101:;
LAB103:    t19 = (t0 + 10056U);
    *((char **)t19) = &&LAB100;
    goto LAB1;

LAB108:;
LAB110:    t19 = (t0 + 10056U);
    *((char **)t19) = &&LAB107;
    goto LAB1;

}


extern void work_m_09514597925530667811_3744308900_init()
{
	static char *pe[] = {(void *)Always_83_0,(void *)Always_97_1,(void *)Always_150_2};
	static char *se[] = {(void *)sp_set_next_state,(void *)sp_fix_timer_overflow,(void *)sp_set_digits,(void *)sp_set_one_digit};
	xsi_register_didat("work_m_09514597925530667811_3744308900", "isim/testbench_105422235_isim_beh.exe.sim/work/m_09514597925530667811_3744308900.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
