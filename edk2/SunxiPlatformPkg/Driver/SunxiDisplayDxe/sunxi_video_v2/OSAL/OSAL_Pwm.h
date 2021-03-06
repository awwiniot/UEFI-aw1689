/** @file
*
*  Copyright (c) 2007-2014, Allwinner Technology Co., Ltd. All rights reserved.
*  http://www.allwinnertech.com
*
*  tangmanliang <tangmanliang@allwinnertech.com>
*  
*  This program and the accompanying materials                          
*  are licensed and made available under the terms and conditions of the BSD License         
*  which accompanies this distribution.  The full text of the license may be found at        
*  http://opensource.org/licenses/bsd-license.php                                            
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             
*
**/

#ifndef  __OSAL_PWM_H__
#define  __OSAL_PWM_H__

#include "OSAL.h"
#include <pwm.h>

//for_test
//#define CONFIG_PWM_SUNXI
#ifndef CONFIG_PWM_SUNXI
#define  __OSAL_PWM_MASK__
#endif

__hdle OSAL_Pwm_request(u32 pwm_id);

int OSAL_Pwm_free(__hdle p_handler);

int OSAL_Pwm_Enable(__hdle p_handler);

int OSAL_Pwm_Disable(__hdle p_handler);

int OSAL_Pwm_Config(__hdle p_handler, int duty_ns, int period_ns);

int OSAL_Pwm_Set_Polarity(__hdle p_handler, int polarity);

#endif
