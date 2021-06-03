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
static const char *ng0 = "/home/ise/CSM152A/lab4/testbench_105422235.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static int sp_reset(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(133, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7864);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_reset1(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1552);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(142, ng0);

LAB5:    xsi_set_current_line(143, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7384);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7384);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_reset2(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(151, ng0);

LAB5:    xsi_set_current_line(152, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7544);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(154, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_add60(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2416);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(161, ng0);

LAB5:    xsi_set_current_line(162, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 6744);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(164, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 6744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_add120(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(170, ng0);

LAB5:    xsi_set_current_line(171, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 6904);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(173, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 6904);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_add180(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(179, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7064);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(182, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_add300(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(188, ng0);

LAB5:    xsi_set_current_line(189, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7224);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(191, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_add10000(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
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
    char *t22;
    char *t23;
    char *t24;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(197, ng0);

LAB5:    xsi_set_current_line(198, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7224);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 5872);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB8:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t20 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t20 == -1)
        goto LAB9;

LAB10:    if (t20 != 0)
        goto LAB11;

LAB6:    t13 = (t1 + 5872);
    xsi_vlog_subprogram_popinvocation(t13);

LAB7:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t21 = (t1 + 5872);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_delete_subprogram_invocation(t21, t22, t1, t24, t2);
    xsi_set_current_line(200, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000000000LL);
    *((char **)t3) = &&LAB12;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB8;
    goto LAB1;

LAB12:    goto LAB4;

}

static int sp_wait_2_seconds(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(207, ng0);

LAB5:    xsi_set_current_line(208, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 2000000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    goto LAB4;

}

static int sp_wait_5_seconds(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(213, ng0);

LAB5:    xsi_set_current_line(214, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 5000000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    goto LAB4;

}

static int sp_wait_10_seconds(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5440);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(220, ng0);

LAB5:    xsi_set_current_line(221, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 10000000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    goto LAB4;

}

static int sp_wait_for_overflow(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 5872);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(226, ng0);

LAB5:    xsi_set_current_line(227, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 4000000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    goto LAB4;

}

static void Initial_53_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 8584);
    xsi_process_wait(t2, 100000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1120);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB8:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB10:    if (t13 != 0)
        goto LAB11;

LAB6:    t6 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t6);

LAB7:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1120);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 5440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB14:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB16:    if (t13 != 0)
        goto LAB17;

LAB12:    t6 = (t0 + 5440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB13:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 5440);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 2416);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB20:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB22:    if (t13 != 0)
        goto LAB23;

LAB18:    t6 = (t0 + 2416);
    xsi_vlog_subprogram_popinvocation(t6);

LAB19:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 2416);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 4576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB26:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB28:    if (t13 != 0)
        goto LAB29;

LAB24:    t6 = (t0 + 4576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB25:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 4576);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 2848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB32:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB34:    if (t13 != 0)
        goto LAB35;

LAB30:    t6 = (t0 + 2848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB31:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 2848);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 4576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB38:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB40:    if (t13 != 0)
        goto LAB41;

LAB36:    t6 = (t0 + 4576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB37:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 4576);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 3280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB44:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB46:    if (t13 != 0)
        goto LAB47;

LAB42:    t6 = (t0 + 3280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB43:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 3280);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 4576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB50:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB52:    if (t13 != 0)
        goto LAB53;

LAB48:    t6 = (t0 + 4576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB49:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 4576);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 3712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB56:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB58:    if (t13 != 0)
        goto LAB59;

LAB54:    t6 = (t0 + 3712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB55:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 3712);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 4576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB62:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB64:    if (t13 != 0)
        goto LAB65;

LAB60:    t6 = (t0 + 4576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB61:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 4576);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1552);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB68:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB70:    if (t13 != 0)
        goto LAB71;

LAB66:    t6 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t6);

LAB67:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1552);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1984);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB74:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB76:    if (t13 != 0)
        goto LAB77;

LAB72:    t6 = (t0 + 1984);
    xsi_vlog_subprogram_popinvocation(t6);

LAB73:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1984);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1120);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB80:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB82:    if (t13 != 0)
        goto LAB83;

LAB78:    t6 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t6);

LAB79:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1120);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1552);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB86:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB88:    if (t13 != 0)
        goto LAB89;

LAB84:    t6 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t6);

LAB85:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1552);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 3280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB92:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB94:    if (t13 != 0)
        goto LAB95;

LAB90:    t6 = (t0 + 3280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB91:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 3280);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 5440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB98:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB100:    if (t13 != 0)
        goto LAB101;

LAB96:    t6 = (t0 + 5440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB97:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 5440);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 5008);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB104:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB106:    if (t13 != 0)
        goto LAB107;

LAB102:    t6 = (t0 + 5008);
    xsi_vlog_subprogram_popinvocation(t6);

LAB103:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 5008);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 4576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB110:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB112:    if (t13 != 0)
        goto LAB113;

LAB108:    t6 = (t0 + 4576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB109:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 4576);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 5440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB116:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB118:    if (t13 != 0)
        goto LAB119;

LAB114:    t6 = (t0 + 5440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB115:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 5440);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1120);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB122:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB124:    if (t13 != 0)
        goto LAB125;

LAB120:    t6 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t6);

LAB121:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1120);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1552);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB128:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB130:    if (t13 != 0)
        goto LAB131;

LAB126:    t6 = (t0 + 1552);
    xsi_vlog_subprogram_popinvocation(t6);

LAB127:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1552);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 5440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB134:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB136:    if (t13 != 0)
        goto LAB137;

LAB132:    t6 = (t0 + 5440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB133:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 5440);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 5440);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB140:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB142:    if (t13 != 0)
        goto LAB143;

LAB138:    t6 = (t0 + 5440);
    xsi_vlog_subprogram_popinvocation(t6);

LAB139:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 5440);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 8584);
    t3 = (t0 + 1120);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB146:    t5 = (t0 + 8680);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB148:    if (t13 != 0)
        goto LAB149;

LAB144:    t6 = (t0 + 1120);
    xsi_vlog_subprogram_popinvocation(t6);

LAB145:    t14 = (t0 + 8680);
    t15 = *((char **)t14);
    t14 = (t0 + 1120);
    t16 = (t0 + 8584);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(121, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB9:;
LAB11:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB26;
    goto LAB1;

LAB33:;
LAB35:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB32;
    goto LAB1;

LAB39:;
LAB41:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB38;
    goto LAB1;

LAB45:;
LAB47:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB44;
    goto LAB1;

LAB51:;
LAB53:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB50;
    goto LAB1;

LAB57:;
LAB59:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB56;
    goto LAB1;

LAB63:;
LAB65:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB62;
    goto LAB1;

LAB69:;
LAB71:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB68;
    goto LAB1;

LAB75:;
LAB77:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB74;
    goto LAB1;

LAB81:;
LAB83:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB80;
    goto LAB1;

LAB87:;
LAB89:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB86;
    goto LAB1;

LAB93:;
LAB95:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB92;
    goto LAB1;

LAB99:;
LAB101:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB98;
    goto LAB1;

LAB105:;
LAB107:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB104;
    goto LAB1;

LAB111:;
LAB113:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB110;
    goto LAB1;

LAB117:;
LAB119:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB116;
    goto LAB1;

LAB123:;
LAB125:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB122;
    goto LAB1;

LAB129:;
LAB131:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB128;
    goto LAB1;

LAB135:;
LAB137:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB134;
    goto LAB1;

LAB141:;
LAB143:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB140;
    goto LAB1;

LAB147:;
LAB149:    t5 = (t0 + 8776U);
    *((char **)t5) = &&LAB146;
    goto LAB1;

}

static void Always_125_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 9024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);

LAB4:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 7704);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t0 + 7704);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 8832);
    xsi_process_wait(t2, 10000000000LL);
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    goto LAB2;

}


extern void work_m_02423752982023619644_0674105010_init()
{
	static char *pe[] = {(void *)Initial_53_0,(void *)Always_125_1};
	static char *se[] = {(void *)sp_reset,(void *)sp_reset1,(void *)sp_reset2,(void *)sp_add60,(void *)sp_add120,(void *)sp_add180,(void *)sp_add300,(void *)sp_add10000,(void *)sp_wait_2_seconds,(void *)sp_wait_5_seconds,(void *)sp_wait_10_seconds,(void *)sp_wait_for_overflow};
	xsi_register_didat("work_m_02423752982023619644_0674105010", "isim/testbench_105422235_isim_beh.exe.sim/work/m_02423752982023619644_0674105010.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
