

# ***** test_applications *****

function(add_test_app _TARGET)

SET(ALL_TARGETS
${_TARGET}.c
common_test.c
)

add_executable(
    ${_TARGET} 
    ${ALL_TARGETS}
    )

target_link_libraries(${_TARGET} name_hal)
install(TARGETS ${_TARGET} RUNTIME DESTINATION bin)

endfunction()

#add_test_app(file1_test)
#add_test_app(file2_test)
