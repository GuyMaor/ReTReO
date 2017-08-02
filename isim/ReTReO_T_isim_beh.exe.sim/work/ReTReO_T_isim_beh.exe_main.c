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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000776949342_2249333309_init();
    work_m_00000000000188460503_0886308060_init();
    work_m_00000000000151549744_3222512165_init();
    work_m_00000000000571929752_2942457252_init();
    work_m_00000000004090936845_0326308628_init();
    work_m_00000000002022585961_4005512124_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002022585961_4005512124");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
