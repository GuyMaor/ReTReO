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
static const char *ng0 = "C:/Users/Guy/Documents/ReTReO/ReTReO/Reg_Block.v";
static int ng1[] = {0, 0};



static void Always_36_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t39[8];
    char t40[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
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
    unsigned int t58;
    int t59;
    char *t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 5);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 5);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
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

LAB11:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);
    t37 = (t0 + 1888U);
    t38 = *((char **)t37);
    t37 = (t0 + 2768);
    t41 = (t0 + 2768);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 2768);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t48 = (t0 + 2048U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 31U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 31U);
    xsi_vlog_generic_convert_array_indices(t39, t40, t43, t46, 2, 1, t47, 5, 2);
    t57 = (t39 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (!(t58));
    t60 = (t40 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (!(t61));
    t63 = (t59 && t62);
    if (t63 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t64 = *((unsigned int *)t39);
    t65 = *((unsigned int *)t40);
    t66 = (t64 - t65);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t37, t38, 0, *((unsigned int *)t40), t67);
    goto LAB14;

}

static void Always_42_1(char *t0)
{
    char t4[8];
    char t15[8];
    char t40[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
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

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4272);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 2208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 5);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 5);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
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

LAB11:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);
    t37 = (t0 + 2768);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t41 = (t0 + 2768);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 2768);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t48 = (t0 + 2208U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 31U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 31U);
    xsi_vlog_generic_get_array_select_value(t40, 16, t39, t43, t46, 2, 1, t47, 5, 2);
    t57 = (t0 + 2608);
    xsi_vlogvar_assign_value(t57, t40, 0, 0, 16);
    goto LAB12;

}


extern void work_m_00000000000151549744_3222512165_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000000151549744_3222512165", "isim/ReTReO_T_isim_beh.exe.sim/work/m_00000000000151549744_3222512165.didat");
	xsi_register_executes(pe);
}
