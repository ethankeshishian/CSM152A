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
static const char *ng0 = "/home/ise/CSM152A/lab3/vending_machine.v";
static const char *ng1 = "";
static const char *ng2 = "\n";
static int ng3[] = {10, 0};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {19U, 0U};
static int ng8[] = {11, 0};
static int ng9[] = {12, 0};
static int ng10[] = {13, 0};
static int ng11[] = {14, 0};
static int ng12[] = {20, 0};
static int ng13[] = {21, 0};
static int ng14[] = {22, 0};
static int ng15[] = {23, 0};
static int ng16[] = {24, 0};
static const char *ng17 = "Default";
static unsigned int ng18[] = {0U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {2U, 0U};
static unsigned int ng21[] = {1U, 0U};
static unsigned int ng22[] = {3U, 0U};
static int ng23[] = {2, 0};
static int ng24[] = {9, 0};
static unsigned int ng25[] = {4U, 0U};
static int ng26[] = {5, 0};
static int ng27[] = {18, 0};
static unsigned int ng28[] = {7U, 0U};
static unsigned int ng29[] = {8U, 0U};
static unsigned int ng30[] = {9U, 0U};
static int ng31[] = {4, 0};
static unsigned int ng32[] = {5U, 0U};
static unsigned int ng33[] = {11U, 0U};
static unsigned int ng34[] = {12U, 0U};
static unsigned int ng35[] = {13U, 0U};
static unsigned int ng36[] = {14U, 0U};
static unsigned int ng37[] = {15U, 0U};
static unsigned int ng38[] = {16U, 0U};
static unsigned int ng39[] = {17U, 0U};
static unsigned int ng40[] = {18U, 0U};
static unsigned int ng41[] = {20U, 0U};



static int sp_check_stock(char *t1, char *t2)
{
    char t13[8];
    char t27[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3704);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(425, ng0);

LAB5:    xsi_set_current_line(426, ng0);
    t5 = (t1 + 8576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3704);
    xsi_vlogfile_write(0, 0, 1, ng1, 2, t8, (char)118, t7, 6);
    xsi_set_current_line(427, ng0);
    t4 = (t1 + 3704);
    xsi_vlogfile_write(0, 0, 1, ng2, 1, t4);
    xsi_set_current_line(428, ng0);
    t4 = (t1 + 8576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t4 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng11)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t4 = ((char*)((ng12)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t4 = ((char*)((ng13)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t4 = ((char*)((ng14)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:    t4 = ((char*)((ng15)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB23;

LAB24:    t4 = ((char*)((ng16)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 6, t4, 32);
    if (t9 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(519, ng0);

LAB140:    xsi_set_current_line(520, ng0);
    t4 = (t1 + 3704);
    xsi_vlogfile_write(0, 0, 1, ng17, 1, t4);
    xsi_set_current_line(521, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB29:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(429, ng0);

LAB30:    xsi_set_current_line(430, ng0);
    t8 = (t1 + 6976);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB32;

LAB31:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t11) > *((unsigned int *)t12))
        goto LAB33;

LAB34:    t17 = (t13 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(434, ng0);

LAB40:    xsi_set_current_line(435, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB38:    goto LAB29;

LAB9:    xsi_set_current_line(438, ng0);

LAB41:    xsi_set_current_line(439, ng0);
    t5 = (t1 + 7136);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB43;

LAB42:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB44;

LAB45:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(443, ng0);

LAB51:    xsi_set_current_line(444, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB49:    goto LAB29;

LAB11:    xsi_set_current_line(447, ng0);

LAB52:    xsi_set_current_line(448, ng0);
    t5 = (t1 + 7296);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB54;

LAB53:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB55;

LAB56:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(452, ng0);

LAB62:    xsi_set_current_line(453, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB60:    goto LAB29;

LAB13:    xsi_set_current_line(456, ng0);

LAB63:    xsi_set_current_line(457, ng0);
    t5 = (t1 + 7456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB65;

LAB64:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB66;

LAB67:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(461, ng0);

LAB73:    xsi_set_current_line(462, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB71:    goto LAB29;

LAB15:    xsi_set_current_line(465, ng0);

LAB74:    xsi_set_current_line(466, ng0);
    t5 = (t1 + 7616);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB76;

LAB75:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB77;

LAB78:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(470, ng0);

LAB84:    xsi_set_current_line(471, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB82:    goto LAB29;

LAB17:    xsi_set_current_line(474, ng0);

LAB85:    xsi_set_current_line(475, ng0);
    t5 = (t1 + 7776);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB87;

LAB86:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB87;

LAB90:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB88;

LAB89:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(479, ng0);

LAB95:    xsi_set_current_line(480, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB93:    goto LAB29;

LAB19:    xsi_set_current_line(483, ng0);

LAB96:    xsi_set_current_line(484, ng0);
    t5 = (t1 + 7936);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB98;

LAB97:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB98;

LAB101:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB99;

LAB100:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(488, ng0);

LAB106:    xsi_set_current_line(489, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB104:    goto LAB29;

LAB21:    xsi_set_current_line(492, ng0);

LAB107:    xsi_set_current_line(493, ng0);
    t5 = (t1 + 8096);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB109;

LAB108:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB110;

LAB111:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(497, ng0);

LAB117:    xsi_set_current_line(498, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB115:    goto LAB29;

LAB23:    xsi_set_current_line(501, ng0);

LAB118:    xsi_set_current_line(502, ng0);
    t5 = (t1 + 8256);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB120;

LAB119:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB120;

LAB123:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB121;

LAB122:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(506, ng0);

LAB128:    xsi_set_current_line(507, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB126:    goto LAB29;

LAB25:    xsi_set_current_line(510, ng0);

LAB129:    xsi_set_current_line(511, ng0);
    t5 = (t1 + 8416);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB131;

LAB130:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB131;

LAB134:    if (*((unsigned int *)t8) > *((unsigned int *)t10))
        goto LAB132;

LAB133:    t15 = (t13 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(515, ng0);

LAB139:    xsi_set_current_line(516, ng0);
    t4 = ((char*)((ng7)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);

LAB137:    goto LAB29;

LAB32:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(430, ng0);

LAB39:    xsi_set_current_line(431, ng0);
    t23 = (t1 + 6976);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t25, 4, t26, 32);
    t28 = (t1 + 6976);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 4);
    xsi_set_current_line(432, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB38;

LAB43:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(439, ng0);

LAB50:    xsi_set_current_line(440, ng0);
    t16 = (t1 + 7136);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 7136);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(441, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB49;

LAB54:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB58:    xsi_set_current_line(448, ng0);

LAB61:    xsi_set_current_line(449, ng0);
    t16 = (t1 + 7296);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 7296);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(450, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB60;

LAB65:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t13) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(457, ng0);

LAB72:    xsi_set_current_line(458, ng0);
    t16 = (t1 + 7456);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 7456);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(459, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB71;

LAB76:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB78;

LAB77:    *((unsigned int *)t13) = 1;
    goto LAB78;

LAB80:    xsi_set_current_line(466, ng0);

LAB83:    xsi_set_current_line(467, ng0);
    t16 = (t1 + 7616);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 7616);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(468, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB82;

LAB87:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB89;

LAB88:    *((unsigned int *)t13) = 1;
    goto LAB89;

LAB91:    xsi_set_current_line(475, ng0);

LAB94:    xsi_set_current_line(476, ng0);
    t16 = (t1 + 7776);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 7776);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(477, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB93;

LAB98:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB100;

LAB99:    *((unsigned int *)t13) = 1;
    goto LAB100;

LAB102:    xsi_set_current_line(484, ng0);

LAB105:    xsi_set_current_line(485, ng0);
    t16 = (t1 + 7936);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 7936);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(486, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB104;

LAB109:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB111;

LAB110:    *((unsigned int *)t13) = 1;
    goto LAB111;

LAB113:    xsi_set_current_line(493, ng0);

LAB116:    xsi_set_current_line(494, ng0);
    t16 = (t1 + 8096);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 8096);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(495, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB115;

LAB120:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB122;

LAB121:    *((unsigned int *)t13) = 1;
    goto LAB122;

LAB124:    xsi_set_current_line(502, ng0);

LAB127:    xsi_set_current_line(503, ng0);
    t16 = (t1 + 8256);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 8256);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(504, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB126;

LAB131:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB133;

LAB132:    *((unsigned int *)t13) = 1;
    goto LAB133;

LAB135:    xsi_set_current_line(511, ng0);

LAB138:    xsi_set_current_line(512, ng0);
    t16 = (t1 + 8416);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 4, t24, 32);
    t25 = (t1 + 8416);
    xsi_vlogvar_assign_value(t25, t27, 0, 0, 4);
    xsi_set_current_line(513, ng0);
    t4 = ((char*)((ng6)));
    memcpy(t13, t4, 8);
    t5 = (t1 + 6496);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 6);
    goto LAB137;

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

LAB0:    t1 = (t0 + 9488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10056);
    *((int *)t2) = 1;
    t3 = (t0 + 9520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 4496U);
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
    t2 = (t0 + 6496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng18)));
    memcpy(t12, t11, 8);
    t13 = (t0 + 6336);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 6, 0LL);
    goto LAB8;

}

static void Always_68_1(char *t0)
{
    char t16[8];
    char t37[8];
    char t40[8];
    char t44[8];
    char t47[8];
    char t85[8];
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 9736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 10072);
    *((int *)t2) = 1;
    t3 = (t0 + 9768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 6336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 5);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng33)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng34)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng35)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng36)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng37)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng38)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng39)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng40)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng41)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 5);
    if (t8 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);

LAB49:    xsi_set_current_line(73, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 6656);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4496U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(95, ng0);

LAB54:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng20)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB52:    goto LAB48;

LAB8:    xsi_set_current_line(99, ng0);

LAB55:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6976);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7936);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4496U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4656U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(118, ng0);

LAB64:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng20)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB62:
LAB58:    goto LAB48;

LAB10:    xsi_set_current_line(122, ng0);

LAB65:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 6656);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4496U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4656U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4816U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB74;

LAB75:
LAB76:
LAB72:
LAB68:    goto LAB48;

LAB12:    xsi_set_current_line(141, ng0);

LAB78:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB79;

LAB80:
LAB81:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(160, ng0);

LAB104:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng28)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB85:    goto LAB48;

LAB14:    xsi_set_current_line(164, ng0);

LAB105:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(183, ng0);

LAB131:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng29)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB112:    goto LAB48;

LAB16:    xsi_set_current_line(187, ng0);

LAB132:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB133;

LAB134:
LAB135:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB137;

LAB138:    xsi_set_current_line(206, ng0);

LAB158:    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng30)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB139:    goto LAB48;

LAB18:    xsi_set_current_line(210, ng0);

LAB159:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB160;

LAB161:
LAB162:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(230, ng0);

LAB185:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng19)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB166:    goto LAB48;

LAB20:    xsi_set_current_line(234, ng0);

LAB186:    xsi_set_current_line(235, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB187;

LAB188:
LAB189:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB191;

LAB192:    xsi_set_current_line(253, ng0);

LAB212:    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB193:    goto LAB48;

LAB22:    xsi_set_current_line(257, ng0);

LAB213:    xsi_set_current_line(258, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB214;

LAB215:
LAB216:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB218;

LAB219:    xsi_set_current_line(271, ng0);

LAB251:    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng33)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB220:    goto LAB48;

LAB24:    xsi_set_current_line(275, ng0);

LAB252:    xsi_set_current_line(276, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB253;

LAB254:
LAB255:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB257;

LAB258:    xsi_set_current_line(289, ng0);

LAB290:    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng34)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB259:    goto LAB48;

LAB26:    xsi_set_current_line(293, ng0);

LAB291:    xsi_set_current_line(294, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB292;

LAB293:
LAB294:    xsi_set_current_line(297, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB296;

LAB297:    xsi_set_current_line(307, ng0);

LAB329:    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng35)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB298:    goto LAB48;

LAB28:    xsi_set_current_line(311, ng0);

LAB330:    xsi_set_current_line(312, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB331;

LAB332:
LAB333:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB335;

LAB336:    xsi_set_current_line(325, ng0);

LAB368:    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng36)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB337:    goto LAB48;

LAB30:    xsi_set_current_line(329, ng0);

LAB369:    xsi_set_current_line(330, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB370;

LAB371:
LAB372:    xsi_set_current_line(333, ng0);
    t2 = (t0 + 5136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB374;

LAB375:    xsi_set_current_line(343, ng0);

LAB407:    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB376:    goto LAB48;

LAB32:    xsi_set_current_line(347, ng0);

LAB408:    xsi_set_current_line(348, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB409;

LAB410:
LAB411:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 5296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB413;

LAB414:    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng37)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB415:    goto LAB48;

LAB34:    xsi_set_current_line(357, ng0);

LAB423:    xsi_set_current_line(358, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB424;

LAB425:
LAB426:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 5296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB428;

LAB429:    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng38)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB430:    goto LAB48;

LAB36:    xsi_set_current_line(367, ng0);

LAB438:    xsi_set_current_line(368, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB439;

LAB440:
LAB441:    xsi_set_current_line(371, ng0);
    t2 = (t0 + 5296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB443;

LAB444:    xsi_set_current_line(375, ng0);
    t2 = ((char*)((ng39)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB445:    goto LAB48;

LAB38:    xsi_set_current_line(377, ng0);

LAB453:    xsi_set_current_line(378, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB454;

LAB455:
LAB456:    xsi_set_current_line(381, ng0);
    t2 = (t0 + 5296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB458;

LAB459:    xsi_set_current_line(385, ng0);
    t2 = ((char*)((ng40)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB460:    goto LAB48;

LAB40:    xsi_set_current_line(387, ng0);

LAB468:    xsi_set_current_line(388, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB469;

LAB470:
LAB471:    xsi_set_current_line(391, ng0);
    t2 = (t0 + 5296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB473;

LAB474:    xsi_set_current_line(395, ng0);

LAB483:    xsi_set_current_line(396, ng0);
    t2 = ((char*)((ng41)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB475:    goto LAB48;

LAB42:    xsi_set_current_line(399, ng0);

LAB484:    xsi_set_current_line(400, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB485;

LAB486:
LAB487:    xsi_set_current_line(403, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(404, ng0);
    t2 = ((char*)((ng20)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB48;

LAB44:    xsi_set_current_line(406, ng0);

LAB489:    xsi_set_current_line(407, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB490;

LAB491:
LAB492:    xsi_set_current_line(410, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(411, ng0);
    t2 = ((char*)((ng20)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB48;

LAB46:    xsi_set_current_line(413, ng0);

LAB494:    xsi_set_current_line(414, ng0);
    t3 = (t0 + 4496U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB495;

LAB496:
LAB497:    xsi_set_current_line(417, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(418, ng0);
    t2 = ((char*)((ng20)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB48;

LAB50:    xsi_set_current_line(92, ng0);

LAB53:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng18)));
    memcpy(t16, t4, 8);
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 6);
    goto LAB52;

LAB56:    xsi_set_current_line(112, ng0);

LAB59:    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng18)));
    memcpy(t16, t4, 8);
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 6);
    goto LAB58;

LAB60:    xsi_set_current_line(115, ng0);

LAB63:    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng21)));
    memcpy(t16, t4, 8);
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 6);
    goto LAB62;

LAB66:    xsi_set_current_line(131, ng0);

LAB69:    xsi_set_current_line(132, ng0);
    t4 = ((char*)((ng18)));
    memcpy(t16, t4, 8);
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 6);
    goto LAB68;

LAB70:    xsi_set_current_line(134, ng0);

LAB73:    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng21)));
    memcpy(t16, t4, 8);
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 6);
    goto LAB72;

LAB74:    xsi_set_current_line(137, ng0);

LAB77:    xsi_set_current_line(138, ng0);
    t4 = ((char*)((ng22)));
    memcpy(t16, t4, 8);
    t5 = (t0 + 6496);
    xsi_vlogvar_assign_value(t5, t16, 0, 0, 6);
    goto LAB76;

LAB79:    xsi_set_current_line(142, ng0);

LAB82:    xsi_set_current_line(143, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB81;

LAB83:    xsi_set_current_line(145, ng0);

LAB86:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t9);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB90;

LAB87:    if (t26 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t16) = 1;

LAB90:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t17 = (t14 ^ t15);
    t18 = (t13 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB98;

LAB95:    if (t21 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t16) = 1;

LAB98:    t9 = (t16 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(156, ng0);

LAB103:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB101:
LAB93:    goto LAB85;

LAB89:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(146, ng0);

LAB94:    xsi_set_current_line(147, ng0);
    t35 = ((char*)((ng23)));
    t36 = (t0 + 6656);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 3);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB93;

LAB97:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(151, ng0);

LAB102:    xsi_set_current_line(152, ng0);
    t10 = ((char*)((ng26)));
    t29 = (t0 + 6656);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB101;

LAB106:    xsi_set_current_line(165, ng0);

LAB109:    xsi_set_current_line(166, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB108;

LAB110:    xsi_set_current_line(168, ng0);

LAB113:    xsi_set_current_line(169, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t9);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB117;

LAB114:    if (t26 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t16) = 1;

LAB117:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t17 = (t14 ^ t15);
    t18 = (t13 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB125;

LAB122:    if (t21 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t16) = 1;

LAB125:    t9 = (t16 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(179, ng0);

LAB130:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB128:
LAB120:    goto LAB112;

LAB116:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(169, ng0);

LAB121:    xsi_set_current_line(170, ng0);
    t35 = ((char*)((ng23)));
    t36 = (t0 + 6656);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 3);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB120;

LAB124:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(174, ng0);

LAB129:    xsi_set_current_line(175, ng0);
    t10 = ((char*)((ng26)));
    t29 = (t0 + 6656);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB128;

LAB133:    xsi_set_current_line(188, ng0);

LAB136:    xsi_set_current_line(189, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB135;

LAB137:    xsi_set_current_line(191, ng0);

LAB140:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t9);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB144;

LAB141:    if (t26 != 0)
        goto LAB143;

LAB142:    *((unsigned int *)t16) = 1;

LAB144:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t17 = (t14 ^ t15);
    t18 = (t13 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB152;

LAB149:    if (t21 != 0)
        goto LAB151;

LAB150:    *((unsigned int *)t16) = 1;

LAB152:    t9 = (t16 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(202, ng0);

LAB157:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB155:
LAB147:    goto LAB139;

LAB143:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB144;

LAB145:    xsi_set_current_line(192, ng0);

LAB148:    xsi_set_current_line(193, ng0);
    t35 = ((char*)((ng23)));
    t36 = (t0 + 6656);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 3);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB147;

LAB151:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB152;

LAB153:    xsi_set_current_line(197, ng0);

LAB156:    xsi_set_current_line(198, ng0);
    t10 = ((char*)((ng26)));
    t29 = (t0 + 6656);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB155;

LAB160:    xsi_set_current_line(211, ng0);

LAB163:    xsi_set_current_line(212, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB162;

LAB164:    xsi_set_current_line(214, ng0);

LAB167:    xsi_set_current_line(215, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t9);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB171;

LAB168:    if (t26 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t16) = 1;

LAB171:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t17 = (t14 ^ t15);
    t18 = (t13 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB179;

LAB176:    if (t21 != 0)
        goto LAB178;

LAB177:    *((unsigned int *)t16) = 1;

LAB179:    t9 = (t16 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB180;

LAB181:    xsi_set_current_line(225, ng0);

LAB184:    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB182:
LAB174:    goto LAB166;

LAB170:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB171;

LAB172:    xsi_set_current_line(215, ng0);

LAB175:    xsi_set_current_line(216, ng0);
    t35 = ((char*)((ng23)));
    t36 = (t0 + 6656);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 3);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB174;

LAB178:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB179;

LAB180:    xsi_set_current_line(220, ng0);

LAB183:    xsi_set_current_line(221, ng0);
    t10 = ((char*)((ng26)));
    t29 = (t0 + 6656);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB182;

LAB187:    xsi_set_current_line(235, ng0);

LAB190:    xsi_set_current_line(236, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB189;

LAB191:    xsi_set_current_line(238, ng0);

LAB194:    xsi_set_current_line(239, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t4);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t9);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB198;

LAB195:    if (t26 != 0)
        goto LAB197;

LAB196:    *((unsigned int *)t16) = 1;

LAB198:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB199;

LAB200:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t16, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t17 = (t14 ^ t15);
    t18 = (t13 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB206;

LAB203:    if (t21 != 0)
        goto LAB205;

LAB204:    *((unsigned int *)t16) = 1;

LAB206:    t9 = (t16 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB207;

LAB208:    xsi_set_current_line(249, ng0);

LAB211:    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB209:
LAB201:    goto LAB193;

LAB197:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB198;

LAB199:    xsi_set_current_line(239, ng0);

LAB202:    xsi_set_current_line(240, ng0);
    t35 = ((char*)((ng23)));
    t36 = (t0 + 6656);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 3);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB201;

LAB205:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB206;

LAB207:    xsi_set_current_line(244, ng0);

LAB210:    xsi_set_current_line(245, ng0);
    t10 = ((char*)((ng26)));
    t29 = (t0 + 6656);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 6816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng25)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB209;

LAB214:    xsi_set_current_line(258, ng0);

LAB217:    xsi_set_current_line(259, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB216;

LAB218:    xsi_set_current_line(261, ng0);

LAB221:    xsi_set_current_line(262, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB223;

LAB222:    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB223;

LAB226:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB225;

LAB224:    *((unsigned int *)t16) = 1;

LAB225:    memset(t37, 0, 8);
    t29 = (t16 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t29) != 0)
        goto LAB229;

LAB230:    t36 = (t37 + 4);
    t22 = *((unsigned int *)t37);
    t23 = *((unsigned int *)t36);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB231;

LAB232:    memcpy(t47, t37, 8);

LAB233:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB246;

LAB247:    xsi_set_current_line(267, ng0);

LAB250:    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB248:    goto LAB220;

LAB223:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB225;

LAB227:    *((unsigned int *)t37) = 1;
    goto LAB230;

LAB229:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB230;

LAB231:    t38 = (t0 + 4976U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng31)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB235;

LAB234:    t42 = (t38 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB235;

LAB238:    if (*((unsigned int *)t39) > *((unsigned int *)t38))
        goto LAB237;

LAB236:    *((unsigned int *)t40) = 1;

LAB237:    memset(t44, 0, 8);
    t45 = (t40 + 4);
    t25 = *((unsigned int *)t45);
    t26 = (~(t25));
    t27 = *((unsigned int *)t40);
    t28 = (t27 & t26);
    t30 = (t28 & 1U);
    if (t30 != 0)
        goto LAB239;

LAB240:    if (*((unsigned int *)t45) != 0)
        goto LAB241;

LAB242:    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t44);
    t33 = (t31 & t32);
    *((unsigned int *)t47) = t33;
    t48 = (t37 + 4);
    t49 = (t44 + 4);
    t50 = (t47 + 4);
    t34 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t34 | t51);
    *((unsigned int *)t50) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB243;

LAB244:
LAB245:    goto LAB233;

LAB235:    t43 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB237;

LAB239:    *((unsigned int *)t44) = 1;
    goto LAB242;

LAB241:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB242;

LAB243:    t55 = *((unsigned int *)t47);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t47) = (t55 | t56);
    t57 = (t37 + 4);
    t58 = (t44 + 4);
    t59 = *((unsigned int *)t37);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t8 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t8));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB245;

LAB246:    xsi_set_current_line(262, ng0);

LAB249:    xsi_set_current_line(263, ng0);
    t80 = (t0 + 6816);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 4976U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 5, t82, 5, t84, 3);
    t83 = (t0 + 6816);
    xsi_vlogvar_assign_value(t83, t85, 0, 0, 5);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng32)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB248;

LAB253:    xsi_set_current_line(276, ng0);

LAB256:    xsi_set_current_line(277, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB255;

LAB257:    xsi_set_current_line(279, ng0);

LAB260:    xsi_set_current_line(280, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB262;

LAB261:    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB262;

LAB265:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB264;

LAB263:    *((unsigned int *)t16) = 1;

LAB264:    memset(t37, 0, 8);
    t29 = (t16 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB266;

LAB267:    if (*((unsigned int *)t29) != 0)
        goto LAB268;

LAB269:    t36 = (t37 + 4);
    t22 = *((unsigned int *)t37);
    t23 = *((unsigned int *)t36);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB270;

LAB271:    memcpy(t47, t37, 8);

LAB272:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB285;

LAB286:    xsi_set_current_line(285, ng0);

LAB289:    xsi_set_current_line(286, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB287:    goto LAB259;

LAB262:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB264;

LAB266:    *((unsigned int *)t37) = 1;
    goto LAB269;

LAB268:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB269;

LAB270:    t38 = (t0 + 4976U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng31)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB274;

LAB273:    t42 = (t38 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB274;

LAB277:    if (*((unsigned int *)t39) > *((unsigned int *)t38))
        goto LAB276;

LAB275:    *((unsigned int *)t40) = 1;

LAB276:    memset(t44, 0, 8);
    t45 = (t40 + 4);
    t25 = *((unsigned int *)t45);
    t26 = (~(t25));
    t27 = *((unsigned int *)t40);
    t28 = (t27 & t26);
    t30 = (t28 & 1U);
    if (t30 != 0)
        goto LAB278;

LAB279:    if (*((unsigned int *)t45) != 0)
        goto LAB280;

LAB281:    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t44);
    t33 = (t31 & t32);
    *((unsigned int *)t47) = t33;
    t48 = (t37 + 4);
    t49 = (t44 + 4);
    t50 = (t47 + 4);
    t34 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t34 | t51);
    *((unsigned int *)t50) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB282;

LAB283:
LAB284:    goto LAB272;

LAB274:    t43 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB276;

LAB278:    *((unsigned int *)t44) = 1;
    goto LAB281;

LAB280:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB281;

LAB282:    t55 = *((unsigned int *)t47);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t47) = (t55 | t56);
    t57 = (t37 + 4);
    t58 = (t44 + 4);
    t59 = *((unsigned int *)t37);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t8 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t8));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB284;

LAB285:    xsi_set_current_line(280, ng0);

LAB288:    xsi_set_current_line(281, ng0);
    t80 = (t0 + 6816);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 4976U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 5, t82, 5, t84, 3);
    t83 = (t0 + 6816);
    xsi_vlogvar_assign_value(t83, t85, 0, 0, 5);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng32)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB287;

LAB292:    xsi_set_current_line(294, ng0);

LAB295:    xsi_set_current_line(295, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB294;

LAB296:    xsi_set_current_line(297, ng0);

LAB299:    xsi_set_current_line(298, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB301;

LAB300:    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB301;

LAB304:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB303;

LAB302:    *((unsigned int *)t16) = 1;

LAB303:    memset(t37, 0, 8);
    t29 = (t16 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB305;

LAB306:    if (*((unsigned int *)t29) != 0)
        goto LAB307;

LAB308:    t36 = (t37 + 4);
    t22 = *((unsigned int *)t37);
    t23 = *((unsigned int *)t36);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB309;

LAB310:    memcpy(t47, t37, 8);

LAB311:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB324;

LAB325:    xsi_set_current_line(303, ng0);

LAB328:    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB326:    goto LAB298;

LAB301:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB303;

LAB305:    *((unsigned int *)t37) = 1;
    goto LAB308;

LAB307:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB308;

LAB309:    t38 = (t0 + 4976U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng31)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB313;

LAB312:    t42 = (t38 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB313;

LAB316:    if (*((unsigned int *)t39) > *((unsigned int *)t38))
        goto LAB315;

LAB314:    *((unsigned int *)t40) = 1;

LAB315:    memset(t44, 0, 8);
    t45 = (t40 + 4);
    t25 = *((unsigned int *)t45);
    t26 = (~(t25));
    t27 = *((unsigned int *)t40);
    t28 = (t27 & t26);
    t30 = (t28 & 1U);
    if (t30 != 0)
        goto LAB317;

LAB318:    if (*((unsigned int *)t45) != 0)
        goto LAB319;

LAB320:    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t44);
    t33 = (t31 & t32);
    *((unsigned int *)t47) = t33;
    t48 = (t37 + 4);
    t49 = (t44 + 4);
    t50 = (t47 + 4);
    t34 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t34 | t51);
    *((unsigned int *)t50) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB321;

LAB322:
LAB323:    goto LAB311;

LAB313:    t43 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB315;

LAB317:    *((unsigned int *)t44) = 1;
    goto LAB320;

LAB319:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB320;

LAB321:    t55 = *((unsigned int *)t47);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t47) = (t55 | t56);
    t57 = (t37 + 4);
    t58 = (t44 + 4);
    t59 = *((unsigned int *)t37);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t8 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t8));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB323;

LAB324:    xsi_set_current_line(298, ng0);

LAB327:    xsi_set_current_line(299, ng0);
    t80 = (t0 + 6816);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 4976U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 5, t82, 5, t84, 3);
    t83 = (t0 + 6816);
    xsi_vlogvar_assign_value(t83, t85, 0, 0, 5);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng32)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB326;

LAB331:    xsi_set_current_line(312, ng0);

LAB334:    xsi_set_current_line(313, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB333;

LAB335:    xsi_set_current_line(315, ng0);

LAB338:    xsi_set_current_line(316, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB340;

LAB339:    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB340;

LAB343:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB342;

LAB341:    *((unsigned int *)t16) = 1;

LAB342:    memset(t37, 0, 8);
    t29 = (t16 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB344;

LAB345:    if (*((unsigned int *)t29) != 0)
        goto LAB346;

LAB347:    t36 = (t37 + 4);
    t22 = *((unsigned int *)t37);
    t23 = *((unsigned int *)t36);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB348;

LAB349:    memcpy(t47, t37, 8);

LAB350:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB363;

LAB364:    xsi_set_current_line(321, ng0);

LAB367:    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB365:    goto LAB337;

LAB340:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB342;

LAB344:    *((unsigned int *)t37) = 1;
    goto LAB347;

LAB346:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB347;

LAB348:    t38 = (t0 + 4976U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng31)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB352;

LAB351:    t42 = (t38 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB352;

LAB355:    if (*((unsigned int *)t39) > *((unsigned int *)t38))
        goto LAB354;

LAB353:    *((unsigned int *)t40) = 1;

LAB354:    memset(t44, 0, 8);
    t45 = (t40 + 4);
    t25 = *((unsigned int *)t45);
    t26 = (~(t25));
    t27 = *((unsigned int *)t40);
    t28 = (t27 & t26);
    t30 = (t28 & 1U);
    if (t30 != 0)
        goto LAB356;

LAB357:    if (*((unsigned int *)t45) != 0)
        goto LAB358;

LAB359:    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t44);
    t33 = (t31 & t32);
    *((unsigned int *)t47) = t33;
    t48 = (t37 + 4);
    t49 = (t44 + 4);
    t50 = (t47 + 4);
    t34 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t34 | t51);
    *((unsigned int *)t50) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB360;

LAB361:
LAB362:    goto LAB350;

LAB352:    t43 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB354;

LAB356:    *((unsigned int *)t44) = 1;
    goto LAB359;

LAB358:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB359;

LAB360:    t55 = *((unsigned int *)t47);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t47) = (t55 | t56);
    t57 = (t37 + 4);
    t58 = (t44 + 4);
    t59 = *((unsigned int *)t37);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t8 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t8));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB362;

LAB363:    xsi_set_current_line(316, ng0);

LAB366:    xsi_set_current_line(317, ng0);
    t80 = (t0 + 6816);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 4976U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 5, t82, 5, t84, 3);
    t83 = (t0 + 6816);
    xsi_vlogvar_assign_value(t83, t85, 0, 0, 5);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(319, ng0);
    t2 = ((char*)((ng32)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB365;

LAB370:    xsi_set_current_line(330, ng0);

LAB373:    xsi_set_current_line(331, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB372;

LAB374:    xsi_set_current_line(333, ng0);

LAB377:    xsi_set_current_line(334, ng0);
    t4 = (t0 + 4976U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB379;

LAB378:    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB379;

LAB382:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB381;

LAB380:    *((unsigned int *)t16) = 1;

LAB381:    memset(t37, 0, 8);
    t29 = (t16 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB383;

LAB384:    if (*((unsigned int *)t29) != 0)
        goto LAB385;

LAB386:    t36 = (t37 + 4);
    t22 = *((unsigned int *)t37);
    t23 = *((unsigned int *)t36);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB387;

LAB388:    memcpy(t47, t37, 8);

LAB389:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB402;

LAB403:    xsi_set_current_line(339, ng0);

LAB406:    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng7)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);

LAB404:    goto LAB376;

LAB379:    t10 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB381;

LAB383:    *((unsigned int *)t37) = 1;
    goto LAB386;

LAB385:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB386;

LAB387:    t38 = (t0 + 4976U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng31)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB391;

LAB390:    t42 = (t38 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB391;

LAB394:    if (*((unsigned int *)t39) > *((unsigned int *)t38))
        goto LAB393;

LAB392:    *((unsigned int *)t40) = 1;

LAB393:    memset(t44, 0, 8);
    t45 = (t40 + 4);
    t25 = *((unsigned int *)t45);
    t26 = (~(t25));
    t27 = *((unsigned int *)t40);
    t28 = (t27 & t26);
    t30 = (t28 & 1U);
    if (t30 != 0)
        goto LAB395;

LAB396:    if (*((unsigned int *)t45) != 0)
        goto LAB397;

LAB398:    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t44);
    t33 = (t31 & t32);
    *((unsigned int *)t47) = t33;
    t48 = (t37 + 4);
    t49 = (t44 + 4);
    t50 = (t47 + 4);
    t34 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t34 | t51);
    *((unsigned int *)t50) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB399;

LAB400:
LAB401:    goto LAB389;

LAB391:    t43 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB393;

LAB395:    *((unsigned int *)t44) = 1;
    goto LAB398;

LAB397:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB398;

LAB399:    t55 = *((unsigned int *)t47);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t47) = (t55 | t56);
    t57 = (t37 + 4);
    t58 = (t44 + 4);
    t59 = *((unsigned int *)t37);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t8 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t8));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB401;

LAB402:    xsi_set_current_line(334, ng0);

LAB405:    xsi_set_current_line(335, ng0);
    t80 = (t0 + 6816);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 4976U);
    t84 = *((char **)t83);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 5, t82, 5, t84, 3);
    t83 = (t0 + 6816);
    xsi_vlogvar_assign_value(t83, t85, 0, 0, 5);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 6656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng32)));
    memcpy(t16, t2, 8);
    t3 = (t0 + 6496);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 6);
    goto LAB404;

LAB409:    xsi_set_current_line(348, ng0);

LAB412:    xsi_set_current_line(349, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB411;

LAB413:    xsi_set_current_line(351, ng0);

LAB416:    xsi_set_current_line(353, ng0);
    t4 = (t0 + 6816);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memcpy(t16, t7, 8);
    t9 = (t0 + 9544);
    t10 = (t0 + 3704);
    t29 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t29);
    t35 = (t0 + 8576);
    xsi_vlogvar_assign_value(t35, t16, 0, 0, 6);

LAB419:    t36 = (t0 + 9640);
    t38 = *((char **)t36);
    t39 = (t38 + 80U);
    t41 = *((char **)t39);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t45 = (t43 + 0U);
    t46 = *((char **)t45);
    t8 = ((int  (*)(char *, char *))t46)(t0, t38);

LAB421:    if (t8 != 0)
        goto LAB422;

LAB417:    t38 = (t0 + 3704);
    xsi_vlog_subprogram_popinvocation(t38);

LAB418:    t48 = (t0 + 9640);
    t49 = *((char **)t48);
    t48 = (t0 + 3704);
    t50 = (t0 + 9544);
    t57 = 0;
    xsi_delete_subprogram_invocation(t48, t49, t0, t50, t57);
    goto LAB415;

LAB420:;
LAB422:    t36 = (t0 + 9736U);
    *((char **)t36) = &&LAB419;
    goto LAB1;

LAB424:    xsi_set_current_line(358, ng0);

LAB427:    xsi_set_current_line(359, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB426;

LAB428:    xsi_set_current_line(361, ng0);

LAB431:    xsi_set_current_line(363, ng0);
    t4 = (t0 + 6816);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memcpy(t16, t7, 8);
    t9 = (t0 + 9544);
    t10 = (t0 + 3704);
    t29 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t29);
    t35 = (t0 + 8576);
    xsi_vlogvar_assign_value(t35, t16, 0, 0, 6);

LAB434:    t36 = (t0 + 9640);
    t38 = *((char **)t36);
    t39 = (t38 + 80U);
    t41 = *((char **)t39);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t45 = (t43 + 0U);
    t46 = *((char **)t45);
    t8 = ((int  (*)(char *, char *))t46)(t0, t38);

LAB436:    if (t8 != 0)
        goto LAB437;

LAB432:    t38 = (t0 + 3704);
    xsi_vlog_subprogram_popinvocation(t38);

LAB433:    t48 = (t0 + 9640);
    t49 = *((char **)t48);
    t48 = (t0 + 3704);
    t50 = (t0 + 9544);
    t57 = 0;
    xsi_delete_subprogram_invocation(t48, t49, t0, t50, t57);
    goto LAB430;

LAB435:;
LAB437:    t36 = (t0 + 9736U);
    *((char **)t36) = &&LAB434;
    goto LAB1;

LAB439:    xsi_set_current_line(368, ng0);

LAB442:    xsi_set_current_line(369, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB441;

LAB443:    xsi_set_current_line(371, ng0);

LAB446:    xsi_set_current_line(373, ng0);
    t4 = (t0 + 6816);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memcpy(t16, t7, 8);
    t9 = (t0 + 9544);
    t10 = (t0 + 3704);
    t29 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t29);
    t35 = (t0 + 8576);
    xsi_vlogvar_assign_value(t35, t16, 0, 0, 6);

LAB449:    t36 = (t0 + 9640);
    t38 = *((char **)t36);
    t39 = (t38 + 80U);
    t41 = *((char **)t39);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t45 = (t43 + 0U);
    t46 = *((char **)t45);
    t8 = ((int  (*)(char *, char *))t46)(t0, t38);

LAB451:    if (t8 != 0)
        goto LAB452;

LAB447:    t38 = (t0 + 3704);
    xsi_vlog_subprogram_popinvocation(t38);

LAB448:    t48 = (t0 + 9640);
    t49 = *((char **)t48);
    t48 = (t0 + 3704);
    t50 = (t0 + 9544);
    t57 = 0;
    xsi_delete_subprogram_invocation(t48, t49, t0, t50, t57);
    goto LAB445;

LAB450:;
LAB452:    t36 = (t0 + 9736U);
    *((char **)t36) = &&LAB449;
    goto LAB1;

LAB454:    xsi_set_current_line(378, ng0);

LAB457:    xsi_set_current_line(379, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB456;

LAB458:    xsi_set_current_line(381, ng0);

LAB461:    xsi_set_current_line(383, ng0);
    t4 = (t0 + 6816);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memcpy(t16, t7, 8);
    t9 = (t0 + 9544);
    t10 = (t0 + 3704);
    t29 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t29);
    t35 = (t0 + 8576);
    xsi_vlogvar_assign_value(t35, t16, 0, 0, 6);

LAB464:    t36 = (t0 + 9640);
    t38 = *((char **)t36);
    t39 = (t38 + 80U);
    t41 = *((char **)t39);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t45 = (t43 + 0U);
    t46 = *((char **)t45);
    t8 = ((int  (*)(char *, char *))t46)(t0, t38);

LAB466:    if (t8 != 0)
        goto LAB467;

LAB462:    t38 = (t0 + 3704);
    xsi_vlog_subprogram_popinvocation(t38);

LAB463:    t48 = (t0 + 9640);
    t49 = *((char **)t48);
    t48 = (t0 + 3704);
    t50 = (t0 + 9544);
    t57 = 0;
    xsi_delete_subprogram_invocation(t48, t49, t0, t50, t57);
    goto LAB460;

LAB465:;
LAB467:    t36 = (t0 + 9736U);
    *((char **)t36) = &&LAB464;
    goto LAB1;

LAB469:    xsi_set_current_line(388, ng0);

LAB472:    xsi_set_current_line(389, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB471;

LAB473:    xsi_set_current_line(391, ng0);

LAB476:    xsi_set_current_line(393, ng0);
    t4 = (t0 + 6816);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memcpy(t16, t7, 8);
    t9 = (t0 + 9544);
    t10 = (t0 + 3704);
    t29 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t29);
    t35 = (t0 + 8576);
    xsi_vlogvar_assign_value(t35, t16, 0, 0, 6);

LAB479:    t36 = (t0 + 9640);
    t38 = *((char **)t36);
    t39 = (t38 + 80U);
    t41 = *((char **)t39);
    t42 = (t41 + 272U);
    t43 = *((char **)t42);
    t45 = (t43 + 0U);
    t46 = *((char **)t45);
    t8 = ((int  (*)(char *, char *))t46)(t0, t38);

LAB481:    if (t8 != 0)
        goto LAB482;

LAB477:    t38 = (t0 + 3704);
    xsi_vlog_subprogram_popinvocation(t38);

LAB478:    t48 = (t0 + 9640);
    t49 = *((char **)t48);
    t48 = (t0 + 3704);
    t50 = (t0 + 9544);
    t57 = 0;
    xsi_delete_subprogram_invocation(t48, t49, t0, t50, t57);
    goto LAB475;

LAB480:;
LAB482:    t36 = (t0 + 9736U);
    *((char **)t36) = &&LAB479;
    goto LAB1;

LAB485:    xsi_set_current_line(400, ng0);

LAB488:    xsi_set_current_line(401, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB487;

LAB490:    xsi_set_current_line(407, ng0);

LAB493:    xsi_set_current_line(408, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB492;

LAB495:    xsi_set_current_line(414, ng0);

LAB498:    xsi_set_current_line(415, ng0);
    t5 = ((char*)((ng18)));
    memcpy(t16, t5, 8);
    t7 = (t0 + 6496);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 6);
    goto LAB497;

}


extern void work_m_06233053205216907816_2144025757_init()
{
	static char *pe[] = {(void *)Always_62_0,(void *)Always_68_1};
	static char *se[] = {(void *)sp_check_stock};
	xsi_register_didat("work_m_06233053205216907816_2144025757", "isim/testbench_105422235_isim_beh.exe.sim/work/m_06233053205216907816_2144025757.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
