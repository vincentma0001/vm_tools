
# set module name
set(MODULE_NAME tst_test)

# define txt encoding
#ADD_DEFINITIONS(-DUNICODE)

# set c++ flags
set(CMAKE_CXX_FLAGS "-ldl ${CMAKE_CXX_FLAGS}")

# get src file for current directories
aux_source_directory(. SRCS)

# create modules
add_executable(${MODULE_NAME} ${SRCS})

# link library
#target_link_libraries(${MODULE_NAME}
#    ${PROJECT_SOURCE_DIR}/lib/lib_name.lib
#)

