#pragma once
/******************************************************************************/
/* File   : Pwm.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstPwm.hpp"
#include "CfgPwm.hpp"
#include "Pwm_core.hpp"
#include "infPwm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Pwm:
      INTERFACES_EXPORTED_PWM
      public abstract_module
   ,  public class_Pwm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstPwm_Type* lptrConst = (ConstPwm_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, PWM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, PWM_CONST,       PWM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   PWM_CONFIG_DATA, PWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, PWM_CODE) DeInitFunction (void);
      FUNC(void, PWM_CODE) MainFunction   (void);
      PWM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Pwm, PWM_VAR) Pwm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
