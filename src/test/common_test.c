/***************************************************************************//**
 * @file    common_test.c
 *
 * @author  MSC Technologies Gmbh
 *
 * @date    04.06.2020
 *
 * @brief   common c-file for bom_hal library   
 *
  ******************************************************************************/

#include "common.h"
#include "common_test.h"

int compare_status(int expected, hal_error func)
{
  const char* hal_status_expected;
  const char* hal_status_actual ;
  switch (expected) 
   {
      case TEST_HAL_E_OK: hal_status_expected ="HAL_E_OK";break;
      case TEST_HAL_E_FAIL: hal_status_expected = "HAL_E_FAIL";break;
      case TEST_HAL_E_INVALID_PARAMETER: hal_status_expected = "HAL_E_INVALID_PARAMETER";break;
      case TEST_HAL_E_NULL_POINTER: hal_status_expected = "HAL_E_NULL_POINTER";break;
      case TEST_HAL_E_NOT_INITIALIZED: hal_status_expected = "HAL_E_NOT_INITIALIZED";break;
   }

  switch (func) 
   {
      case HAL_E_OK: hal_status_actual ="HAL_E_OK";break;
      case HAL_E_FAIL: hal_status_actual = "HAL_E_FAIL";break;
      case HAL_E_INVALID_PARAMETER: hal_status_actual = "HAL_E_INVALID_PARAMETER";break;
      case HAL_E_NULL_POINTER: hal_status_actual = "HAL_E_NULL_POINTER";break;
      case HAL_E_NOT_INITIALIZED: hal_status_actual = "HAL_E_NOT_INITIALIZED";break;
   }
  if(expected == func)
  {
    printf("%s ... PASSED\n",hal_status_actual);
    printf("-----------------------------\n");
    return 0;
  }
  else
  {
    printf("%s ... FAILED \n",hal_status_actual);
    printf("expected: %s actual: %s \n\n", hal_status_expected, hal_status_actual);
    printf("-----------------------------\n");
    return 1;
  }
}

void evaluation_result(uint8_t passed, uint8_t conter )
{
  if (passed == conter)
  {
    printf ("RESULT: unittest_hal_board_get_name all PASSED --- \n");
    printf("-----------------------------\n");
  }
  else
  {
    printf ("* %u tests PASSED --- \n",passed);
    printf ("* %u tests FAILED --- \n",conter - passed);
    printf ("RESULT: unittest_hal_board_get_name FAILED --- \n\n");
    printf("-----------------------------\n");
  }
}