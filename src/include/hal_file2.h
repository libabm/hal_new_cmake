/***************************************************************************//**
 * @file    hal_file2.h
 *
 * @author  
 *
 * @date    
 *
 * @brief   Hardware Abstraction Layer for  
 *
  ******************************************************************************/
 
#ifndef _HAL_FILE2_H_
#define _HAL_FILE2_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "hal_types.h"

/** 
 * @name	    add_int
 * @brief	    multiplication 2 integer
 * @param	    a: zah1
 * @param	    b: zah2
 * @retval	  hal_error
 * @returns   HAL_E_OK                Everything fine 
 * @returns   HAL_E_FAIL              Failed 
 */
hal_error multiplication_int( int a, int b );

#ifdef __cplusplus
}  /* End of the 'extern "C"' block */
#endif
   
#endif /* _HAL_FILE2_H_ */