/***************************************************************************//**
 * @file    hal_file3.c
 *
 * @author  
 *
 * @date    
 *
 * @brief   Hardware Abstraction Layer for 
 *
  ******************************************************************************/

#include "common.h"
#include "hal_file3.h"

hal_error division_int( int a, int b )
{
    printf("div = %d \n",a/b);
    return HAL_E_OK;
}