
# set module name
set(MODULE_NAME tst_kernal)

# get src file for current directories
aux_source_directory(. SRCS)

# create modules
add_executable(${MODULE_NAME} ${SRCS})
