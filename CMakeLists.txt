CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
 
 
# ***** project specific configuration that must be first *****
 
 
PROJECT(name_hal_unit-tests)

# *****  load MSC helpers *****
INCLUDE(version.in)

# ***** What to build

include_directories(BEFORE src/include/)
add_subdirectory(src/lib)

if (ENABLE_TESTS)
  add_subdirectory(src/test)
endif()

