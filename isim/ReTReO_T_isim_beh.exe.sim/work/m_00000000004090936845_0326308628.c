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
static const char *ng0 = "C:/Users/Guy/Documents/ReTReO/ReTReO/ReTReO.v";
static unsigned int ng1[] = {36U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {37U, 0U};
static unsigned int ng6[] = {40U, 0U};
static unsigned int ng7[] = {44U, 0U};
static unsigned int ng8[] = {34U, 0U};
static unsigned int ng9[] = {35U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {39U, 0U};
static unsigned int ng12[] = {41U, 0U};
static unsigned int ng13[] = {42U, 0U};
static unsigned int ng14[] = {43U, 0U};



static void Cont_57_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 7176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6256);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 7);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 7);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 511U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 511U);
    t14 = (t0 + 8896);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 511U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 8);
    t27 = (t0 + 8736);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_58_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 7424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6256);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 127U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = (t0 + 8960);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 127U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 6);
    t27 = (t0 + 8752);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_62_2(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
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
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 7672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6256);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 127U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 9024);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 8768);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void Always_69_3(char *t0)
{
    char t6[8];
    char t15[8];
    char t37[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
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
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    int t50;

LAB0:    t1 = (t0 + 7920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8784);
    *((int *)t2) = 1;
    t3 = (t0 + 7952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 4416U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4416U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 5);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t5);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB16;

LAB13:    if (t27 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t15) = 1;

LAB16:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(76, ng0);

LAB20:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4416U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng5)));
    t50 = xsi_vlog_unsigned_case_compare(t3, 9, t2, 9);
    if (t50 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t50 = xsi_vlog_unsigned_case_compare(t3, 9, t2, 9);
    if (t50 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t50 = xsi_vlog_unsigned_case_compare(t3, 9, t2, 9);
    if (t50 == 1)
        goto LAB26;

LAB27:
LAB28:
LAB19:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(72, ng0);
    t39 = (t0 + 4416U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 0);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 255U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = ((char*)((ng3)));
    xsi_vlogtype_concat(t37, 16, 16, 2U, t48, 8, t38, 8);
    t49 = (t0 + 6096);
    xsi_vlogvar_assign_value(t49, t37, 0, 0, 16);
    goto LAB12;

LAB15:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(74, ng0);
    t30 = (t0 + 4096U);
    t31 = *((char **)t30);
    t30 = (t0 + 6096);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 16);
    goto LAB19;

LAB22:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 2816U);
    t5 = *((char **)t4);
    t4 = (t0 + 6096);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    goto LAB28;

LAB24:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3456U);
    t5 = *((char **)t4);
    t4 = (t0 + 6096);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    goto LAB28;

LAB26:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 3936U);
    t5 = *((char **)t4);
    t4 = (t0 + 6096);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    goto LAB28;

}

static void Always_85_4(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 8168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8800);
    *((int *)t2) = 1;
    t3 = (t0 + 8200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 4576U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t4, 7);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(88, ng0);
    t7 = (t0 + 6096);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 5136);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB21;

LAB9:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 5296);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB21;

LAB11:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 4976);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB21;

LAB13:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 15U);
    t10 = (t0 + 5456);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 4);
    goto LAB21;

LAB15:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 63U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 63U);
    t10 = (t0 + 5616);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 6);
    goto LAB21;

LAB17:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t11, 0, 8);
    t8 = (t11 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 63U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 63U);
    t10 = (t0 + 5776);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 6);
    goto LAB21;

LAB19:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 5936);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB21;

}

static void Always_98_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8816);
    *((int *)t2) = 1;
    t3 = (t0 + 8448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 4256U);
    t5 = *((char **)t4);
    t4 = (t0 + 6256);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    goto LAB2;

}


extern void work_m_00000000004090936845_0326308628_init()
{
	static char *pe[] = {(void *)Cont_57_0,(void *)Cont_58_1,(void *)Cont_62_2,(void *)Always_69_3,(void *)Always_85_4,(void *)Always_98_5};
	xsi_register_didat("work_m_00000000004090936845_0326308628", "isim/ReTReO_T_isim_beh.exe.sim/work/m_00000000004090936845_0326308628.didat");
	xsi_register_executes(pe);
}
