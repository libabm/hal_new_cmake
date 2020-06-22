
/***************************************************************************//**
 * @file    file1.c
 *
 * @author  
 *
 * @date    
 *
 * @brief   Hardware Abstraction Layer for 
 *
  ******************************************************************************/

#include "common.h"
#include "hal_file1.h"

hal_error add_int( int a, int b )
{
    printf("summe = %d \n",a+b);
    return HAL_E_OK;
}
