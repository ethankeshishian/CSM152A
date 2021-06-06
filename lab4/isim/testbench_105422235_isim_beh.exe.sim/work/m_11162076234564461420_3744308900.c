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
static int ng1[] = {60, 0};
static int ng2[] = {120, 0};
static int ng3[] = {180, 0};
static int ng4[] = {300, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {9999U, 0U};
static int ng10[] = {1000, 0};
static int ng11[] = {100, 0};
static int ng12[] = {10, 0};
static int ng13[] = {4, 0};
static int ng14[] = {2, 0};
static int ng15[] = {3, 0};
static unsigned int ng16[] = {127U, 0U};
static int ng17[] = {0, 0};
static unsigned int ng18[] = {1U, 0U};
static unsigned int ng19[] = {79U, 0U};
static unsigned int ng20[] = {18U, 0U};
static unsigned int ng21[] = {6U, 0U};
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



static int sp_set_time(char *t1, char *t2)
{
    char t16[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1936);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(150, ng0);

LAB5:    xsi_set_current_line(151, ng0);
    t5 = (t1 + 4296U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(155, ng0);
    t4 = (t1 + 4456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(159, ng0);
    t4 = (t1 + 4616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(163, ng0);
    t4 = (t1 + 4776U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB28:
LAB18:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(151, ng0);

LAB9:    xsi_set_current_line(152, ng0);
    t12 = (t1 + 7576);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t14, 14, t15, 32);
    t17 = (t1 + 7576);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 14);
    xsi_set_current_line(153, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB10);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 2800);
    t17 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t17);

LAB12:    t18 = (t2 + 64U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t26 == -1)
        goto LAB13;

LAB14:    if (t26 != 0)
        goto LAB15;

LAB10:    t19 = (t1 + 2800);
    xsi_vlog_subprogram_popinvocation(t19);

LAB11:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t27 = (t1 + 2800);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    xsi_delete_subprogram_invocation(t27, t28, t1, t30, t2);
    goto LAB8;

LAB13:    t0 = -1;
    goto LAB1;

LAB15:    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB12;
    goto LAB1;

LAB16:    xsi_set_current_line(155, ng0);

LAB19:    xsi_set_current_line(156, ng0);
    t6 = (t1 + 7576);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 14, t14, 32);
    t15 = (t1 + 7576);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 14);
    xsi_set_current_line(157, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB20);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 2800);
    t17 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t17);

LAB22:    t18 = (t2 + 64U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t26 == -1)
        goto LAB23;

LAB24:    if (t26 != 0)
        goto LAB25;

LAB20:    t19 = (t1 + 2800);
    xsi_vlog_subprogram_popinvocation(t19);

LAB21:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t27 = (t1 + 2800);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    xsi_delete_subprogram_invocation(t27, t28, t1, t30, t2);
    goto LAB18;

LAB23:    t0 = -1;
    goto LAB1;

LAB25:    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(159, ng0);

LAB29:    xsi_set_current_line(160, ng0);
    t6 = (t1 + 7576);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 14, t14, 32);
    t15 = (t1 + 7576);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 14);
    xsi_set_current_line(161, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB30);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 2800);
    t17 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t17);

LAB32:    t18 = (t2 + 64U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t26 == -1)
        goto LAB33;

LAB34:    if (t26 != 0)
        goto LAB35;

LAB30:    t19 = (t1 + 2800);
    xsi_vlog_subprogram_popinvocation(t19);

LAB31:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t27 = (t1 + 2800);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    xsi_delete_subprogram_invocation(t27, t28, t1, t30, t2);
    goto LAB28;

LAB33:    t0 = -1;
    goto LAB1;

LAB35:    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB32;
    goto LAB1;

LAB36:    xsi_set_current_line(163, ng0);

LAB39:    xsi_set_current_line(164, ng0);
    t6 = (t1 + 7576);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 14, t14, 32);
    t15 = (t1 + 7576);
    xsi_vlogvar_assign_value(t15, t16, 0, 0, 14);
    xsi_set_current_line(165, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB40);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 2800);
    t17 = xsi_create_subprogram_invocation(t14, 0, t1, t15, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t15, t17);

LAB42:    t18 = (t2 + 64U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t26 == -1)
        goto LAB43;

LAB44:    if (t26 != 0)
        goto LAB45;

LAB40:    t19 = (t1 + 2800);
    xsi_vlog_subprogram_popinvocation(t19);

LAB41:    t27 = (t2 + 64U);
    t28 = *((char **)t27);
    t27 = (t1 + 2800);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    xsi_delete_subprogram_invocation(t27, t28, t1, t30, t2);
    goto LAB38;

LAB43:    t0 = -1;
    goto LAB1;

LAB45:    t18 = (t2 + 48U);
    *((char **)t18) = &&LAB42;
    goto LAB1;

}

static int sp_set_next_state(char *t1, char *t2)
{
    char t9[8];
    char t20[8];
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
    char *t21;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2368);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(171, ng0);

LAB5:    xsi_set_current_line(172, ng0);
    t5 = (t1 + 7576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB6:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(175, ng0);
    t4 = (t1 + 7576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB15:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB17;

LAB18:    t12 = (t9 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(178, ng0);

LAB24:    xsi_set_current_line(179, ng0);
    t4 = ((char*)((ng8)));
    memcpy(t9, t4, 8);
    t5 = (t1 + 7416);
    xsi_vlogvar_assign_value(t5, t9, 0, 0, 6);

LAB22:
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

LAB11:    xsi_set_current_line(172, ng0);

LAB14:    xsi_set_current_line(173, ng0);
    t19 = ((char*)((ng6)));
    memcpy(t20, t19, 8);
    t21 = (t1 + 7416);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 6);
    goto LAB13;

LAB16:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(175, ng0);

LAB23:    xsi_set_current_line(176, ng0);
    t13 = ((char*)((ng7)));
    memcpy(t20, t13, 8);
    t19 = (t1 + 7416);
    xsi_vlogvar_assign_value(t19, t20, 0, 0, 6);
    goto LAB22;

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

LAB2:    t4 = (t1 + 2800);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(185, ng0);

LAB5:    xsi_set_current_line(186, ng0);
    t5 = (t1 + 7576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng9)));
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

LAB11:    xsi_set_current_line(186, ng0);

LAB14:    xsi_set_current_line(187, ng0);
    t19 = ((char*)((ng9)));
    t20 = (t1 + 7576);
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

LAB2:    t4 = (t1 + 3232);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(197, ng0);

LAB5:    xsi_set_current_line(198, ng0);
    t5 = (t1 + 7576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 14, t8, 32);
    t10 = (t1 + 7096);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(199, ng0);
    t4 = (t1 + 7576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 14, t7, 32);
    t8 = ((char*)((ng11)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_divide(t11, 32, t9, 32, t8, 32);
    t10 = (t1 + 6936);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 4);
    xsi_set_current_line(200, ng0);
    t4 = (t1 + 7576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 14, t7, 32);
    t8 = ((char*)((ng11)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t9, 32, t8, 32);
    t10 = ((char*)((ng12)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_divide(t12, 32, t11, 32, t10, 32);
    t13 = (t1 + 6776);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(201, ng0);
    t4 = (t1 + 7576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 14, t7, 32);
    t8 = ((char*)((ng11)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t9, 32, t8, 32);
    t10 = ((char*)((ng12)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 32, t11, 32, t10, 32);
    t13 = (t1 + 6616);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(203, ng0);
    t4 = (t1 + 7736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
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

LAB11:    xsi_set_current_line(206, ng0);
    t4 = (t1 + 7736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t6, 7, t7, 32);
    t8 = ((char*)((ng14)));
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

LAB25:    xsi_set_current_line(209, ng0);
    t4 = (t1 + 7736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
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

LAB39:    xsi_set_current_line(213, ng0);

LAB48:    xsi_set_current_line(214, ng0);
    t4 = (t1 + 7096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
    t8 = (t1 + 8056);
    t10 = (t8 + 56U);
    t13 = *((char **)t10);
    t26 = (t2 + 56U);
    t27 = *((char **)t26);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t34, &&LAB49);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 3664);
    t38 = xsi_create_subprogram_invocation(t36, 0, t1, t37, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t37, t38);
    t39 = (t1 + 8216);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 4);
    t40 = (t1 + 8376);
    xsi_vlogvar_assign_value(t40, t7, 0, 0, 3);
    t41 = (t1 + 8536);
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

LAB49:    t43 = (t1 + 3664);
    xsi_vlog_subprogram_popinvocation(t43);

LAB50:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t50 = (t1 + 3664);
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

LAB10:    xsi_set_current_line(203, ng0);

LAB13:    xsi_set_current_line(204, ng0);
    t33 = (t1 + 6616);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng5)));
    t37 = (t1 + 8056);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB14);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3664);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 8216);
    xsi_vlogvar_assign_value(t48, t35, 0, 0, 4);
    t49 = (t1 + 8376);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 3);
    t50 = (t1 + 8536);
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

LAB14:    t52 = (t1 + 3664);
    xsi_vlog_subprogram_popinvocation(t52);

LAB15:    t60 = (t2 + 64U);
    t61 = *((char **)t60);
    t60 = (t1 + 3664);
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

LAB24:    xsi_set_current_line(206, ng0);

LAB27:    xsi_set_current_line(207, ng0);
    t33 = (t1 + 6776);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng14)));
    t37 = (t1 + 8056);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB28);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3664);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 8216);
    xsi_vlogvar_assign_value(t48, t35, 0, 0, 4);
    t49 = (t1 + 8376);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 3);
    t50 = (t1 + 8536);
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

LAB28:    t52 = (t1 + 3664);
    xsi_vlog_subprogram_popinvocation(t52);

LAB29:    t60 = (t2 + 64U);
    t61 = *((char **)t60);
    t60 = (t1 + 3664);
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

LAB38:    xsi_set_current_line(209, ng0);

LAB41:    xsi_set_current_line(210, ng0);
    t33 = (t1 + 6936);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng15)));
    t37 = (t1 + 8056);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB42);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 3664);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 8216);
    xsi_vlogvar_assign_value(t48, t35, 0, 0, 4);
    t49 = (t1 + 8376);
    xsi_vlogvar_assign_value(t49, t36, 0, 0, 3);
    t50 = (t1 + 8536);
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

LAB42:    t52 = (t1 + 3664);
    xsi_vlog_subprogram_popinvocation(t52);

LAB43:    t60 = (t2 + 64U);
    t61 = *((char **)t60);
    t60 = (t1 + 3664);
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

LAB2:    t4 = (t1 + 3664);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(225, ng0);

LAB5:    xsi_set_current_line(227, ng0);
    t5 = (t1 + 8536);
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

LAB7:    xsi_set_current_line(231, ng0);
    t4 = (t1 + 8216);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB10:    t7 = ((char*)((ng17)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 32);
    if (t16 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng14)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 32);
    if (t16 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng13)));
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
LAB8:    xsi_set_current_line(267, ng0);
    t4 = (t1 + 8376);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);

LAB42:    t8 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t8, 32);
    if (t16 == 1)
        goto LAB43;

LAB44:    t4 = ((char*)((ng14)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t16 == 1)
        goto LAB45;

LAB46:    t4 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 3, t4, 32);
    if (t16 == 1)
        goto LAB47;

LAB48:    t4 = ((char*)((ng13)));
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
LAB6:    xsi_set_current_line(227, ng0);

LAB9:    xsi_set_current_line(228, ng0);
    t14 = ((char*)((ng16)));
    t15 = (t1 + 5816);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 7);
    goto LAB8;

LAB11:    xsi_set_current_line(233, ng0);

LAB32:    xsi_set_current_line(234, ng0);
    t8 = ((char*)((ng18)));
    t14 = (t1 + 5816);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 7);
    goto LAB31;

LAB13:    xsi_set_current_line(236, ng0);

LAB33:    xsi_set_current_line(237, ng0);
    t5 = ((char*)((ng19)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB15:    xsi_set_current_line(239, ng0);

LAB34:    xsi_set_current_line(240, ng0);
    t5 = ((char*)((ng20)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB17:    xsi_set_current_line(242, ng0);

LAB35:    xsi_set_current_line(243, ng0);
    t5 = ((char*)((ng21)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB19:    xsi_set_current_line(245, ng0);

LAB36:    xsi_set_current_line(246, ng0);
    t5 = ((char*)((ng22)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB21:    xsi_set_current_line(248, ng0);

LAB37:    xsi_set_current_line(249, ng0);
    t5 = ((char*)((ng24)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB23:    xsi_set_current_line(251, ng0);

LAB38:    xsi_set_current_line(252, ng0);
    t5 = ((char*)((ng26)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB25:    xsi_set_current_line(254, ng0);

LAB39:    xsi_set_current_line(255, ng0);
    t5 = ((char*)((ng28)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB27:    xsi_set_current_line(257, ng0);

LAB40:    xsi_set_current_line(258, ng0);
    t5 = ((char*)((ng30)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB29:    xsi_set_current_line(260, ng0);

LAB41:    xsi_set_current_line(261, ng0);
    t5 = ((char*)((ng7)));
    t7 = (t1 + 5816);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB31;

LAB43:    xsi_set_current_line(269, ng0);

LAB52:    xsi_set_current_line(270, ng0);
    t14 = ((char*)((ng30)));
    t15 = (t1 + 5976);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(271, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(272, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(273, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

LAB45:    xsi_set_current_line(275, ng0);

LAB53:    xsi_set_current_line(276, ng0);
    t5 = ((char*)((ng18)));
    t8 = (t1 + 5976);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(277, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 6136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(278, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(279, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

LAB47:    xsi_set_current_line(281, ng0);

LAB54:    xsi_set_current_line(282, ng0);
    t5 = ((char*)((ng18)));
    t8 = (t1 + 5976);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(283, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 6296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(285, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

LAB49:    xsi_set_current_line(287, ng0);

LAB55:    xsi_set_current_line(288, ng0);
    t5 = ((char*)((ng18)));
    t8 = (t1 + 5976);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(290, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 6296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(291, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t1 + 6456);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB51;

}

static void Always_62_0(char *t0)
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

LAB0:    t1 = (t0 + 9448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10264);
    *((int *)t2) = 1;
    t3 = (t0 + 9480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 5416U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5096U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7256);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);

LAB14:
LAB11:
LAB8:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 7, t5, 32);
    t11 = (t0 + 7736);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 7, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7736);
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

LAB6:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng30)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 7256);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 6, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng18)));
    memcpy(t12, t4, 8);
    t5 = (t0 + 7256);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 6, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng32)));
    memcpy(t12, t4, 8);
    t5 = (t0 + 7256);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 6, 0LL);
    goto LAB14;

LAB16:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(70, ng0);

LAB23:    xsi_set_current_line(71, ng0);
    t16 = ((char*)((ng5)));
    t17 = (t0 + 7736);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 7, 0LL);
    goto LAB22;

}

static void Always_76_1(char *t0)
{
    char t10[8];
    char t37[8];
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
    unsigned int t20;
    unsigned int t21;
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

LAB0:    t1 = (t0 + 9696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 10280);
    *((int *)t2) = 1;
    t3 = (t0 + 9728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 7256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 5);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(79, ng0);

LAB19:    xsi_set_current_line(80, ng0);
    t9 = ((char*)((ng6)));
    memcpy(t10, t9, 8);
    t11 = (t0 + 7416);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 6);
    goto LAB18;

LAB8:    xsi_set_current_line(82, ng0);

LAB20:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 7576);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 14);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t10, t2, 8);
    t3 = (t0 + 7416);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 6);
    goto LAB18;

LAB10:    xsi_set_current_line(86, ng0);

LAB21:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 7576);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 14);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t10, t2, 8);
    t3 = (t0 + 7416);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 6);
    goto LAB18;

LAB12:    xsi_set_current_line(90, ng0);

LAB22:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 7576);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 14);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 9504);
    t3 = (t0 + 1936);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB25:    t5 = (t0 + 9600);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB27:    if (t8 != 0)
        goto LAB28;

LAB23:    t7 = (t0 + 1936);
    xsi_vlog_subprogram_popinvocation(t7);

LAB24:    t16 = (t0 + 9600);
    t17 = *((char **)t16);
    t16 = (t0 + 1936);
    t18 = (t0 + 9504);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 9504);
    t3 = (t0 + 2368);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB31:    t5 = (t0 + 9600);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB33:    if (t8 != 0)
        goto LAB34;

LAB29:    t7 = (t0 + 2368);
    xsi_vlog_subprogram_popinvocation(t7);

LAB30:    t16 = (t0 + 9600);
    t17 = *((char **)t16);
    t16 = (t0 + 2368);
    t18 = (t0 + 9504);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB18;

LAB14:    xsi_set_current_line(95, ng0);

LAB35:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 7736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t11 = (t9 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t11);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t11);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB39;

LAB36:    if (t29 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t10) = 1;

LAB39:    t13 = (t10 + 4);
    t32 = *((unsigned int *)t13);
    t33 = (~(t32));
    t34 = *((unsigned int *)t10);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 9504);
    t3 = (t0 + 1936);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB46:    t5 = (t0 + 9600);
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

LAB44:    t7 = (t0 + 1936);
    xsi_vlog_subprogram_popinvocation(t7);

LAB45:    t16 = (t0 + 9600);
    t17 = *((char **)t16);
    t16 = (t0 + 1936);
    t18 = (t0 + 9504);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 9504);
    t3 = (t0 + 2368);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB52:    t5 = (t0 + 9600);
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

LAB50:    t7 = (t0 + 2368);
    xsi_vlog_subprogram_popinvocation(t7);

LAB51:    t16 = (t0 + 9600);
    t17 = *((char **)t16);
    t16 = (t0 + 2368);
    t18 = (t0 + 9504);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB18;

LAB16:    xsi_set_current_line(102, ng0);

LAB56:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 7736);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t5 + 4);
    t11 = (t9 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t11);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t11);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB60;

LAB57:    if (t29 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t10) = 1;

LAB60:    t13 = (t10 + 4);
    t32 = *((unsigned int *)t13);
    t33 = (~(t32));
    t34 = *((unsigned int *)t10);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 9504);
    t3 = (t0 + 1936);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB67:    t5 = (t0 + 9600);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB69:    if (t8 != 0)
        goto LAB70;

LAB65:    t7 = (t0 + 1936);
    xsi_vlog_subprogram_popinvocation(t7);

LAB66:    t16 = (t0 + 9600);
    t17 = *((char **)t16);
    t16 = (t0 + 1936);
    t18 = (t0 + 9504);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 9504);
    t3 = (t0 + 2368);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB73:    t5 = (t0 + 9600);
    t7 = *((char **)t5);
    t9 = (t7 + 80U);
    t11 = *((char **)t9);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t15 = *((char **)t14);
    t8 = ((int  (*)(char *, char *))t15)(t0, t7);

LAB75:    if (t8 != 0)
        goto LAB76;

LAB71:    t7 = (t0 + 2368);
    xsi_vlog_subprogram_popinvocation(t7);

LAB72:    t16 = (t0 + 9600);
    t17 = *((char **)t16);
    t16 = (t0 + 2368);
    t18 = (t0 + 9504);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB18;

LAB26:;
LAB28:    t5 = (t0 + 9696U);
    *((char **)t5) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t5 = (t0 + 9696U);
    *((char **)t5) = &&LAB31;
    goto LAB1;

LAB38:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(96, ng0);

LAB43:    xsi_set_current_line(97, ng0);
    t14 = (t0 + 7576);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t16, 14, t17, 32);
    t18 = (t0 + 7576);
    xsi_vlogvar_assign_value(t18, t37, 0, 0, 14);
    goto LAB42;

LAB47:;
LAB49:    t5 = (t0 + 9696U);
    *((char **)t5) = &&LAB46;
    goto LAB1;

LAB53:;
LAB55:    t5 = (t0 + 9696U);
    *((char **)t5) = &&LAB52;
    goto LAB1;

LAB59:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(103, ng0);

LAB64:    xsi_set_current_line(104, ng0);
    t14 = (t0 + 7576);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t16, 14, t17, 32);
    t18 = (t0 + 7576);
    xsi_vlogvar_assign_value(t18, t37, 0, 0, 14);
    goto LAB63;

LAB68:;
LAB70:    t5 = (t0 + 9696U);
    *((char **)t5) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t5 = (t0 + 9696U);
    *((char **)t5) = &&LAB73;
    goto LAB1;

}

static void Always_113_2(char *t0)
{
    char t13[8];
    char t17[8];
    char t34[8];
    char t35[8];
    char t39[8];
    char t47[8];
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
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 9944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 10296);
    *((int *)t2) = 1;
    t3 = (t0 + 9976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 7256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 5);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(116, ng0);

LAB19:    xsi_set_current_line(117, ng0);
    t9 = (t0 + 7736);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng17)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB21;

LAB20:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t11) < *((unsigned int *)t12))
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB23:    memset(t17, 0, 8);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t18) != 0)
        goto LAB27;

LAB28:    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB29;

LAB30:    memcpy(t47, t17, 8);

LAB31:    t79 = (t47 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(120, ng0);

LAB54:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 9752);
    t5 = (t0 + 3232);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t9 = (t0 + 7896);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 7);
    t10 = (t0 + 8056);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);

LAB57:    t11 = (t0 + 9848);
    t12 = *((char **)t11);
    t14 = (t12 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t18 = *((char **)t16);
    t24 = (t18 + 0U);
    t25 = *((char **)t24);
    t8 = ((int  (*)(char *, char *))t25)(t0, t12);

LAB59:    if (t8 != 0)
        goto LAB60;

LAB55:    t12 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t12);

LAB56:    t29 = (t0 + 9848);
    t30 = *((char **)t29);
    t29 = (t0 + 3232);
    t31 = (t0 + 9752);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);

LAB46:    goto LAB18;

LAB8:    xsi_set_current_line(124, ng0);

LAB61:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 7576);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng14)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t5, 14, t7, 32);
    t9 = ((char*)((ng17)));
    memset(t17, 0, 8);
    t10 = (t13 + 4);
    t11 = (t9 + 4);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t11);
    t26 = (t22 ^ t23);
    t27 = (t21 | t26);
    t28 = *((unsigned int *)t10);
    t41 = *((unsigned int *)t11);
    t42 = (t28 | t41);
    t43 = (~(t42));
    t44 = (t27 & t43);
    if (t44 != 0)
        goto LAB65;

LAB62:    if (t42 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t17) = 1;

LAB65:    t14 = (t17 + 4);
    t45 = *((unsigned int *)t14);
    t48 = (~(t45));
    t49 = *((unsigned int *)t17);
    t50 = (t49 & t48);
    t54 = (t50 != 0);
    if (t54 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(128, ng0);

LAB76:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 9752);
    t5 = (t0 + 3232);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t7);
    t9 = (t0 + 7896);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 7);
    t10 = (t0 + 8056);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);

LAB79:    t11 = (t0 + 9848);
    t12 = *((char **)t11);
    t14 = (t12 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t18 = *((char **)t16);
    t24 = (t18 + 0U);
    t25 = *((char **)t24);
    t8 = ((int  (*)(char *, char *))t25)(t0, t12);

LAB81:    if (t8 != 0)
        goto LAB82;

LAB77:    t12 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t12);

LAB78:    t29 = (t0 + 9848);
    t30 = *((char **)t29);
    t29 = (t0 + 3232);
    t31 = (t0 + 9752);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);

LAB68:    goto LAB18;

LAB10:    xsi_set_current_line(132, ng0);

LAB83:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 9752);
    t7 = (t0 + 3232);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 7896);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t11 = (t0 + 8056);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);

LAB86:    t12 = (t0 + 9848);
    t14 = *((char **)t12);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t24 = *((char **)t18);
    t25 = (t24 + 0U);
    t29 = *((char **)t25);
    t71 = ((int  (*)(char *, char *))t29)(t0, t14);

LAB88:    if (t71 != 0)
        goto LAB89;

LAB84:    t14 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t14);

LAB85:    t30 = (t0 + 9848);
    t31 = *((char **)t30);
    t30 = (t0 + 3232);
    t32 = (t0 + 9752);
    t33 = 0;
    xsi_delete_subprogram_invocation(t30, t31, t0, t32, t33);
    goto LAB18;

LAB12:    xsi_set_current_line(135, ng0);

LAB90:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 9752);
    t7 = (t0 + 3232);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 7896);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t11 = (t0 + 8056);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);

LAB93:    t12 = (t0 + 9848);
    t14 = *((char **)t12);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t24 = *((char **)t18);
    t25 = (t24 + 0U);
    t29 = *((char **)t25);
    t71 = ((int  (*)(char *, char *))t29)(t0, t14);

LAB95:    if (t71 != 0)
        goto LAB96;

LAB91:    t14 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t14);

LAB92:    t30 = (t0 + 9848);
    t31 = *((char **)t30);
    t30 = (t0 + 3232);
    t32 = (t0 + 9752);
    t33 = 0;
    xsi_delete_subprogram_invocation(t30, t31, t0, t32, t33);
    goto LAB18;

LAB14:    xsi_set_current_line(138, ng0);

LAB97:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 9752);
    t7 = (t0 + 3232);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 7896);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t11 = (t0 + 8056);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);

LAB100:    t12 = (t0 + 9848);
    t14 = *((char **)t12);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t24 = *((char **)t18);
    t25 = (t24 + 0U);
    t29 = *((char **)t25);
    t71 = ((int  (*)(char *, char *))t29)(t0, t14);

LAB102:    if (t71 != 0)
        goto LAB103;

LAB98:    t14 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t14);

LAB99:    t30 = (t0 + 9848);
    t31 = *((char **)t30);
    t30 = (t0 + 3232);
    t32 = (t0 + 9752);
    t33 = 0;
    xsi_delete_subprogram_invocation(t30, t31, t0, t32, t33);
    goto LAB18;

LAB16:    xsi_set_current_line(141, ng0);

LAB104:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 472);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 9752);
    t7 = (t0 + 3232);
    t9 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t9);
    t10 = (t0 + 7896);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 7);
    t11 = (t0 + 8056);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);

LAB107:    t12 = (t0 + 9848);
    t14 = *((char **)t12);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t24 = *((char **)t18);
    t25 = (t24 + 0U);
    t29 = *((char **)t25);
    t71 = ((int  (*)(char *, char *))t29)(t0, t14);

LAB109:    if (t71 != 0)
        goto LAB110;

LAB105:    t14 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t14);

LAB106:    t30 = (t0 + 9848);
    t31 = *((char **)t30);
    t30 = (t0 + 3232);
    t32 = (t0 + 9752);
    t33 = 0;
    xsi_delete_subprogram_invocation(t30, t31, t0, t32, t33);
    goto LAB18;

LAB21:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB25:    *((unsigned int *)t17) = 1;
    goto LAB28;

LAB27:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB28;

LAB29:    t29 = (t0 + 7736);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 472);
    t33 = *((char **)t32);
    t32 = ((char*)((ng14)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_divide(t34, 32, t33, 32, t32, 32);
    memset(t35, 0, 8);
    t36 = (t31 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB33;

LAB32:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t31) > *((unsigned int *)t34))
        goto LAB35;

LAB34:    *((unsigned int *)t35) = 1;

LAB35:    memset(t39, 0, 8);
    t40 = (t35 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t35);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t40) != 0)
        goto LAB39;

LAB40:    t48 = *((unsigned int *)t17);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t17 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB31;

LAB33:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB35;

LAB37:    *((unsigned int *)t39) = 1;
    goto LAB40;

LAB39:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB40;

LAB41:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t17 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t17);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB43;

LAB44:    xsi_set_current_line(117, ng0);

LAB47:    xsi_set_current_line(118, ng0);
    t85 = (t0 + 472);
    t86 = *((char **)t85);
    t85 = ((char*)((ng17)));
    t87 = (t0 + 9752);
    t88 = (t0 + 3232);
    t89 = xsi_create_subprogram_invocation(t87, 0, t0, t88, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t88, t89);
    t90 = (t0 + 7896);
    xsi_vlogvar_assign_value(t90, t86, 0, 0, 7);
    t91 = (t0 + 8056);
    xsi_vlogvar_assign_value(t91, t85, 0, 0, 1);

LAB50:    t92 = (t0 + 9848);
    t93 = *((char **)t92);
    t94 = (t93 + 80U);
    t95 = *((char **)t94);
    t96 = (t95 + 272U);
    t97 = *((char **)t96);
    t98 = (t97 + 0U);
    t99 = *((char **)t98);
    t100 = ((int  (*)(char *, char *))t99)(t0, t93);

LAB52:    if (t100 != 0)
        goto LAB53;

LAB48:    t93 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t93);

LAB49:    t101 = (t0 + 9848);
    t102 = *((char **)t101);
    t101 = (t0 + 3232);
    t103 = (t0 + 9752);
    t104 = 0;
    xsi_delete_subprogram_invocation(t101, t102, t0, t103, t104);
    goto LAB46;

LAB51:;
LAB53:    t92 = (t0 + 9944U);
    *((char **)t92) = &&LAB50;
    goto LAB1;

LAB58:;
LAB60:    t11 = (t0 + 9944U);
    *((char **)t11) = &&LAB57;
    goto LAB1;

LAB64:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(125, ng0);

LAB69:    xsi_set_current_line(126, ng0);
    t15 = (t0 + 472);
    t16 = *((char **)t15);
    t15 = ((char*)((ng17)));
    t18 = (t0 + 9752);
    t24 = (t0 + 3232);
    t25 = xsi_create_subprogram_invocation(t18, 0, t0, t24, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t24, t25);
    t29 = (t0 + 7896);
    xsi_vlogvar_assign_value(t29, t16, 0, 0, 7);
    t30 = (t0 + 8056);
    xsi_vlogvar_assign_value(t30, t15, 0, 0, 1);

LAB72:    t31 = (t0 + 9848);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t36 = *((char **)t33);
    t37 = (t36 + 272U);
    t38 = *((char **)t37);
    t40 = (t38 + 0U);
    t46 = *((char **)t40);
    t71 = ((int  (*)(char *, char *))t46)(t0, t32);

LAB74:    if (t71 != 0)
        goto LAB75;

LAB70:    t32 = (t0 + 3232);
    xsi_vlog_subprogram_popinvocation(t32);

LAB71:    t51 = (t0 + 9848);
    t52 = *((char **)t51);
    t51 = (t0 + 3232);
    t53 = (t0 + 9752);
    t61 = 0;
    xsi_delete_subprogram_invocation(t51, t52, t0, t53, t61);
    goto LAB68;

LAB73:;
LAB75:    t31 = (t0 + 9944U);
    *((char **)t31) = &&LAB72;
    goto LAB1;

LAB80:;
LAB82:    t11 = (t0 + 9944U);
    *((char **)t11) = &&LAB79;
    goto LAB1;

LAB87:;
LAB89:    t12 = (t0 + 9944U);
    *((char **)t12) = &&LAB86;
    goto LAB1;

LAB94:;
LAB96:    t12 = (t0 + 9944U);
    *((char **)t12) = &&LAB93;
    goto LAB1;

LAB101:;
LAB103:    t12 = (t0 + 9944U);
    *((char **)t12) = &&LAB100;
    goto LAB1;

LAB108:;
LAB110:    t12 = (t0 + 9944U);
    *((char **)t12) = &&LAB107;
    goto LAB1;

}


extern void work_m_11162076234564461420_3744308900_init()
{
	static char *pe[] = {(void *)Always_62_0,(void *)Always_76_1,(void *)Always_113_2};
	static char *se[] = {(void *)sp_set_time,(void *)sp_set_next_state,(void *)sp_fix_timer_overflow,(void *)sp_set_digits,(void *)sp_set_one_digit};
	xsi_register_didat("work_m_11162076234564461420_3744308900", "isim/testbench_105422235_isim_beh.exe.sim/work/m_11162076234564461420_3744308900.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
