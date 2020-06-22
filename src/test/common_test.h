/***************************************************************************//**
 * @file    common_test.h
 *
 * @author  MSC Technologies Gmbh
 *
 * @date    04.06.2020
 *
 * @brief   common Header file for unit-tests     
 *
  ******************************************************************************/
#ifndef _COMMON_TEST_H_
#define _COMMON_TEST_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Definition of some global types for unit-tests
 */
typedef enum
 {
    TEST_HAL_E_OK,                          /*!< Everything OK */                     
    TEST_HAL_E_FAIL,                        /*!< Generic Error */           
    TEST_HAL_E_INVALID_PARAMETER,           /*!< A invalid parameter has been passed to the function */
    TEST_HAL_E_NULL_POINTER,                /*!< A NULL pointer has been passed to the function */
    TEST_HAL_E_NOT_INITIALIZED,             /*!< The requested module or HAL in general is not initialized */
    TEST_HAL_E_ALREADY_INITIALIZED,         /*!< The requested module or HAL in general is already initialized */
    TEST_HAL_E_NOFEATURE,                   /*!< The requested feature is not available on the current hardware */
    TEST_HAL_E_NVRAM_INCOMPLETE_WRITE,      /*!< The requested write operation to NVRAM was only completed partially */
    TEST_HAL_E_NVRAM_INCOMPLETE_READ,       /*!< The requested read operation to NVRAM was only completed partially */
    TEST_HAL_E_GPS_NO_FIX,                  /*!< Requested GPS information not available due to no fix */
    TEST_HAL_E_SENSOR_INIT_FAILED,          /*!< One of the sensors could not be initialized */
    TEST_HAL_E_SENSOR_ERROR,                /*!< The requested sensor produced an error */
    TEST_HAL_E_PENDING,                     /*!< Operation currently in progress */
    TEST_HAL_E_DEVICE_ALREADY_MOUNTED,      /*!< Block device has already been mounted and device has not been ejected */
    TEST_HAL_E_DBUS_NOREPLY,                /*!< No reply to function call */
    TEST_HAL_E_WLAN_NOCARRIER,              /*!< No carrier */ 
    TEST_HAL_E_WLAN_PASSPHRASE,             /*!< Wrong passphrase */
    TEST_HAL_E_WLAN_ALREADY_CONNECTED,      /*!< Already connected to network */
    TEST_HAL_E_UNSUPPORTED = -1,            /*!< Unsupported by library */
 } test_hal_error;

/** 
 * @name	     compare_status
 * @brief	  compare 2 status return 0 if status1=status2 and 1 if not  	    
 * @retval	  int, 0 or 1
 */
int compare_status(int expected, hal_error func);

/** 
 * @name	     evaluation_result
 * @brief	  compare unsigned integer return expenses based on the result   	    
 * @retval	  int, 0 or 1
 */
void evaluation_result(uint8_t passed, uint8_t conter );


#ifdef __cplusplus
}  /* End of the 'extern "C"' block */
#endif
   
#endif /* _COMMON_TEST_H_ */