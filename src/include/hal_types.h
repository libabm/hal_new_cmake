/***************************************************************************//**
 * @file    hal_types.h
 *
 * @author  
 *
 * @date    
 *
 * @brief   Hardware Abstraction Layer, definition of some global types       
 *
  ******************************************************************************/
 #ifndef _HAL_TYPES_H_
 #define _HAL_TYPES_H_
 
 #ifdef __cplusplus
 extern "C" {
 #endif
 
 /**
 * @brief   Definition of some global types
 */
 typedef enum
 {
     HAL_E_OK,                          /*!< Everything OK */                     
     HAL_E_FAIL,                        /*!< Generic Error */
     HAL_E_UNSUPPORTED = -1,            /*!< Unsupported by library */
 } hal_error;
 
 #ifdef __cplusplus
 }  /* End of the 'extern "C"' block */
 #endif
 
 #endif /* _HAL_TYPES_H_ */
