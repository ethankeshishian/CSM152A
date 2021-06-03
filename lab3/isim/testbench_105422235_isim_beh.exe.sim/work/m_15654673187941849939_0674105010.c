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
static const char *ng0 = "/home/ise/CSM152A/lab3/testbench_105422235.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static int ng5[] = {5, 0};
static int ng6[] = {3, 0};



static int sp_reload(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(174, ng0);

LAB5:    xsi_set_current_line(175, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 40000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_transaction(char *t1, char *t2)
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(185, ng0);

LAB5:    xsi_set_current_line(186, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(187, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(189, ng0);
    t4 = (t1 + 5208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t10, &&LAB7);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 1712);
    t14 = xsi_create_subprogram_invocation(t12, 0, t1, t13, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t1 + 5528);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 4);

LAB9:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t24 == -1)
        goto LAB10;

LAB11:    if (t24 != 0)
        goto LAB12;

LAB7:    t17 = (t1 + 1712);
    xsi_vlog_subprogram_popinvocation(t17);

LAB8:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 1712);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_delete_subprogram_invocation(t25, t26, t1, t28, t2);
    xsi_set_current_line(190, ng0);
    t4 = (t1 + 5368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t10, &&LAB13);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 1712);
    t14 = xsi_create_subprogram_invocation(t12, 0, t1, t13, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t1 + 5528);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 4);

LAB15:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t24 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t24 == -1)
        goto LAB16;

LAB17:    if (t24 != 0)
        goto LAB18;

LAB13:    t17 = (t1 + 1712);
    xsi_vlog_subprogram_popinvocation(t17);

LAB14:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 1712);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_delete_subprogram_invocation(t25, t26, t1, t28, t2);
    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB19;
    t0 = 1;
    goto LAB1;

LAB10:    t0 = -1;
    goto LAB1;

LAB12:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB9;
    goto LAB1;

LAB16:    t0 = -1;
    goto LAB1;

LAB18:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(194, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t7, &&LAB20);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2576);
    t11 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t10, t11);

LAB22:    t12 = (t2 + 64U);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t24 = ((int  (*)(char *, char *))t19)(t1, t13);
    if (t24 == -1)
        goto LAB23;

LAB24:    if (t24 != 0)
        goto LAB25;

LAB20:    t13 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t13);

LAB21:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t20 = (t1 + 2576);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    xsi_delete_subprogram_invocation(t20, t21, t1, t23, t2);
    goto LAB4;

LAB23:    t0 = -1;
    goto LAB1;

LAB25:    t12 = (t2 + 48U);
    *((char **)t12) = &&LAB22;
    goto LAB1;

}

static int sp_press(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(199, ng0);

LAB5:    xsi_set_current_line(200, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t4 = (t1 + 5528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(202, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(204, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

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

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(210, ng0);

LAB5:    xsi_set_current_line(211, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 40000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(213, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(214, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 40000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static int sp_send_valid(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(219, ng0);

LAB5:    xsi_set_current_line(220, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 5048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(222, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 20000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static void Initial_35_0(char *t0)
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB12:    if (t13 != 0)
        goto LAB13;

LAB8:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB9:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB16:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB18:    if (t13 != 0)
        goto LAB19;

LAB14:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB15:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB22:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB24:    if (t13 != 0)
        goto LAB25;

LAB20:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB21:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB28:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB30:    if (t13 != 0)
        goto LAB31;

LAB26:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB27:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB34:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB36:    if (t13 != 0)
        goto LAB37;

LAB32:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB33:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB11:;
LAB13:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

LAB17:;
LAB19:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB16;
    goto LAB1;

LAB23:;
LAB25:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB22;
    goto LAB1;

LAB29:;
LAB31:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB28;
    goto LAB1;

LAB35:;
LAB37:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB34;
    goto LAB1;

LAB38:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB42:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB44:    if (t13 != 0)
        goto LAB45;

LAB40:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB41:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB43:;
LAB45:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB42;
    goto LAB1;

LAB46:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB49:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB51:    if (t13 != 0)
        goto LAB52;

LAB47:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB48:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB50:;
LAB52:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB56:    t5 = (t0 + 6344);
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

LAB54:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB55:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB62:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB64:    if (t13 != 0)
        goto LAB65;

LAB60:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB61:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB68:    t5 = (t0 + 6344);
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

LAB66:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB67:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB74:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB76:    if (t13 != 0)
        goto LAB77;

LAB72:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB73:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB80:    t5 = (t0 + 6344);
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

LAB78:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB79:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB57:;
LAB59:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB56;
    goto LAB1;

LAB63:;
LAB65:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB62;
    goto LAB1;

LAB69:;
LAB71:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB68;
    goto LAB1;

LAB75:;
LAB77:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB74;
    goto LAB1;

LAB81:;
LAB83:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB80;
    goto LAB1;

LAB84:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB87:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB89:    if (t13 != 0)
        goto LAB90;

LAB85:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB86:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB93:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB95:    if (t13 != 0)
        goto LAB96;

LAB91:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB92:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 120000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB88:;
LAB90:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB87;
    goto LAB1;

LAB94:;
LAB96:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB93;
    goto LAB1;

LAB97:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB100:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB102:    if (t13 != 0)
        goto LAB103;

LAB98:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB99:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB106:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB108:    if (t13 != 0)
        goto LAB109;

LAB104:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB105:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB112:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB114:    if (t13 != 0)
        goto LAB115;

LAB110:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB111:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB118:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB120:    if (t13 != 0)
        goto LAB121;

LAB116:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB117:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB124:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB126:    if (t13 != 0)
        goto LAB127;

LAB122:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB123:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB130:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB132:    if (t13 != 0)
        goto LAB133;

LAB128:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB129:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB136:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB138:    if (t13 != 0)
        goto LAB139;

LAB134:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB135:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB142:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB144:    if (t13 != 0)
        goto LAB145;

LAB140:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB141:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB148:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB150:    if (t13 != 0)
        goto LAB151;

LAB146:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB147:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB154:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB156:    if (t13 != 0)
        goto LAB157;

LAB152:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB153:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB160:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB162:    if (t13 != 0)
        goto LAB163;

LAB158:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB159:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6248);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 5208);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 5368);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB166:    t9 = (t0 + 6344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB168:    if (t13 != 0)
        goto LAB169;

LAB164:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB165:    t18 = (t0 + 6344);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 6248);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB170;
    goto LAB1;

LAB101:;
LAB103:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB100;
    goto LAB1;

LAB107:;
LAB109:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB106;
    goto LAB1;

LAB113:;
LAB115:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB112;
    goto LAB1;

LAB119:;
LAB121:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB118;
    goto LAB1;

LAB125:;
LAB127:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB124;
    goto LAB1;

LAB131:;
LAB133:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB130;
    goto LAB1;

LAB137:;
LAB139:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB136;
    goto LAB1;

LAB143:;
LAB145:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB142;
    goto LAB1;

LAB149:;
LAB151:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB148;
    goto LAB1;

LAB155:;
LAB157:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB154;
    goto LAB1;

LAB161:;
LAB163:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB160;
    goto LAB1;

LAB167:;
LAB169:    t9 = (t0 + 6440U);
    *((char **)t9) = &&LAB166;
    goto LAB1;

LAB170:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB173:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB175:    if (t13 != 0)
        goto LAB176;

LAB171:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB172:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB177;
    goto LAB1;

LAB174:;
LAB176:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB173;
    goto LAB1;

LAB177:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB178;
    goto LAB1;

LAB178:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB181:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB183:    if (t13 != 0)
        goto LAB184;

LAB179:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB180:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB185;
    goto LAB1;

LAB182:;
LAB184:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB181;
    goto LAB1;

LAB185:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB186:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB189:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB191:    if (t13 != 0)
        goto LAB192;

LAB187:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB188:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB195:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB197:    if (t13 != 0)
        goto LAB198;

LAB193:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB194:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB201:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB203:    if (t13 != 0)
        goto LAB204;

LAB199:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB200:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB205;
    goto LAB1;

LAB190:;
LAB192:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB189;
    goto LAB1;

LAB196:;
LAB198:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB195;
    goto LAB1;

LAB202:;
LAB204:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB201;
    goto LAB1;

LAB205:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB208:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB210:    if (t13 != 0)
        goto LAB211;

LAB206:    t6 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB207:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2576);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB214:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB216:    if (t13 != 0)
        goto LAB217;

LAB212:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB213:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB218;
    goto LAB1;

LAB209:;
LAB211:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB208;
    goto LAB1;

LAB215:;
LAB217:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB214;
    goto LAB1;

LAB218:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB221:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB223:    if (t13 != 0)
        goto LAB224;

LAB219:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB220:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB227:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB229:    if (t13 != 0)
        goto LAB230;

LAB225:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB226:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB231;
    goto LAB1;

LAB222:;
LAB224:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB221;
    goto LAB1;

LAB228:;
LAB230:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB227;
    goto LAB1;

LAB231:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB234:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB236:    if (t13 != 0)
        goto LAB237;

LAB232:    t6 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB233:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2576);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB238;
    goto LAB1;

LAB235:;
LAB237:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB234;
    goto LAB1;

LAB238:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB241:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB243:    if (t13 != 0)
        goto LAB244;

LAB239:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB240:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB247:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB249:    if (t13 != 0)
        goto LAB250;

LAB245:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB246:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB251;
    goto LAB1;

LAB242:;
LAB244:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB241;
    goto LAB1;

LAB248:;
LAB250:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB247;
    goto LAB1;

LAB251:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB254:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB256:    if (t13 != 0)
        goto LAB257;

LAB252:    t6 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB253:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2576);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB258;
    goto LAB1;

LAB255:;
LAB257:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB254;
    goto LAB1;

LAB258:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB261:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB263:    if (t13 != 0)
        goto LAB264;

LAB259:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB260:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6248);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5528);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB267:    t7 = (t0 + 6344);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB269:    if (t13 != 0)
        goto LAB270;

LAB265:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB266:    t16 = (t0 + 6344);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t18 = (t0 + 6248);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB271;
    goto LAB1;

LAB262:;
LAB264:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB261;
    goto LAB1;

LAB268:;
LAB270:    t7 = (t0 + 6440U);
    *((char **)t7) = &&LAB267;
    goto LAB1;

LAB271:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2576);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB274:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB276:    if (t13 != 0)
        goto LAB277;

LAB272:    t6 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t6);

LAB273:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2576);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6248);
    t3 = (t0 + 2144);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB280:    t5 = (t0 + 6344);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB282:    if (t13 != 0)
        goto LAB283;

LAB278:    t6 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t6);

LAB279:    t14 = (t0 + 6344);
    t15 = *((char **)t14);
    t14 = (t0 + 2144);
    t16 = (t0 + 6248);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(166, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB275:;
LAB277:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB274;
    goto LAB1;

LAB281:;
LAB283:    t5 = (t0 + 6440U);
    *((char **)t5) = &&LAB280;
    goto LAB1;

}

static void Always_168_1(char *t0)
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

LAB0:    t1 = (t0 + 6688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(168, ng0);

LAB4:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4088);
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

LAB8:    t13 = (t0 + 4088);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 6496);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB9:    goto LAB2;

}


extern void work_m_15654673187941849939_0674105010_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_168_1};
	static char *se[] = {(void *)sp_reload,(void *)sp_transaction,(void *)sp_press,(void *)sp_reset,(void *)sp_send_valid};
	xsi_register_didat("work_m_15654673187941849939_0674105010", "isim/testbench_105422235_isim_beh.exe.sim/work/m_15654673187941849939_0674105010.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
