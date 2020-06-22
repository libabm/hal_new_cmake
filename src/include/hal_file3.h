/***************************************************************************//**
 * @file    hal_sensor.h
 *
 * @author  MSC Technologies Gmbh
 *
 * @date    16.06.2020
 *
 * @brief   Hardware Abstraction Layer for various sensors
 *
  ******************************************************************************/
 
#ifndef _HAL_FILE3_H_
#define _HAL_FILE3_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "hal_types.h"
#include <stdint.h>

/** 
 * @name	    add_int
 * @brief	    multiplication 2 integer
 * @param	    a: zah1
 * @param	    b: zah2
 * @retval	  hal_error
 * @returns   HAL_E_OK                Everything fine 
 * @returns   HAL_E_FAIL              Failed 
 */
hal_error division_int( int a, int b );


#ifdef __cplusplus
}  /* End of the 'extern "C"' block */
#endif
   
#endif /* _HAL_FILE3_H_ */