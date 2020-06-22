set(SRC_PROG
main_prog.c
)

set(SRC_LIB
common.c
hal_file1.c
hal_file2.c
hal_file3.c
)

add_library(name_hal
    SHARED
    ${SRC_LIB}
    )

set_target_properties(name_hal PROPERTIES VERSION ${VERSION_STRING} SOVERSION ${VERSION_MAJOR})

target_link_libraries(name_hal pthread)
add_executable(main_prog main_prog.c)

target_link_libraries(main_prog name_hal)

install(TARGETS main_prog RUNTIME DESTINATION bin)
install(TARGETS name_hal RUNTIME DESTINATION lib)
