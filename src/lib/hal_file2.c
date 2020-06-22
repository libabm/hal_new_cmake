/***************************************************************************//**
 * @file    hal_file2.c
 *
 * @author  
 *
 * @date    
 *
 * @brief   Hardware Abstraction Layer for 
 *
  ******************************************************************************/

#include <pthread.h>
#include "common.h"
#include "hal_file2.h"

hal_error multiplication_int( int a, int b )
{
    printf("mult = %d \n",a*b);
    return HAL_E_OK;
}