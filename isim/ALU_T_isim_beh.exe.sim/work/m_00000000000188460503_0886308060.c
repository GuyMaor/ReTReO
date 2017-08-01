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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Guy/Documents/School/Research/ReTReO/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void NetDecl_13_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2272U);
    t3 = *((char **)t2);
    t2 = (t0 + 2432U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t20 = (t0 + 5584);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t5 + 4);
    t28 = *((unsigned int *)t5);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 5456);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_14_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2272U);
    t4 = *((char **)t2);
    t2 = (t0 + 2432U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 16, t4, 16, t6, 16);
    t2 = (t0 + 5648);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t20 = (t0 + 5472);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_23_2(char *t0)
{
    char t10[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5488);
    *((int *)t2) = 1;
    t3 = (t0 + 4920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2592U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 3);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 3);
    if (t6 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(25, ng0);
    t7 = (t0 + 2272U);
    t8 = *((char **)t7);
    t7 = (t0 + 2432U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 16, t9, 16);
    t7 = (t0 + 3312);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB24;

LAB8:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t0 + 2432U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB24;

LAB10:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t0 + 2432U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB25;

LAB26:
LAB27:    t39 = (t0 + 3312);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 16);
    goto LAB24;

LAB12:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t0 + 2432U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB28;

LAB29:
LAB30:    t39 = (t0 + 3312);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 16);
    goto LAB24;

LAB14:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB32;

LAB31:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t8 = (t0 + 3312);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);
    goto LAB24;

LAB16:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t0 + 2432U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB33;

LAB34:
LAB35:    t21 = (t0 + 3312);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 16);
    goto LAB24;

LAB18:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t0 + 2432U);
    t7 = *((char **)t3);
    memset(t41, 0, 8);
    xsi_vlog_signed_multiply(t41, 16, t4, 16, t7, 16);
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t41, 0, 0, 16);
    goto LAB24;

LAB20:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t0 + 2432U);
    t7 = *((char **)t3);
    memset(t41, 0, 8);
    xsi_vlog_signed_divide(t41, 16, t4, 16, t7, 16);
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t41, 0, 0, 16);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB27;

LAB28:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB30;

LAB32:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB31;

LAB33:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB35;

}

static void Always_35_3(char *t0)
{
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
    char *t12;

LAB0:    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5504);
    *((int *)t2) = 1;
    t3 = (t0 + 5168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2912U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3472);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

LAB9:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 3472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB11;

}


extern void work_m_00000000000188460503_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_13_0,(void *)NetDecl_14_1,(void *)Always_23_2,(void *)Always_35_3};
	xsi_register_didat("work_m_00000000000188460503_0886308060", "isim/ALU_T_isim_beh.exe.sim/work/m_00000000000188460503_0886308060.didat");
	xsi_register_executes(pe);
}
