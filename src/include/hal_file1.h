/***************************************************************************//**
 * @file    hal_file1.h
 *
 * @author  
 *
 * @date    
 *
 * @brief   Hardware Abstraction Layer for ...
 *
  ******************************************************************************/
 
#ifndef _HAL_FILE1_H_
#define _HAL_FILE1_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>
#include "hal_types.h"


/** 
 * @name	    add_int
 * @brief	    add 2 integer
 * @param	    a: zah1
 * @param	    b: zah2
 * @retval	  hal_error
 * @returns   HAL_E_OK                Everything fine 
 * @returns   HAL_E_FAIL              Failed 
 */
hal_error add_int( int a, int b );


   
#ifdef __cplusplus
}  /* End of the 'extern "C"' block */
#endif
   
#endif /* _HAL_FILE1_H_ */