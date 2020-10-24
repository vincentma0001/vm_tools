

# set module name
set(MODULE_NAME tst_lib)

# add __USE_DLL__ macro define
ADD_DEFINITIONS(-D__USE_DLL__)

# get src file for current directories
aux_source_directory(. SRCS)

# create modules
add_library(${MODULE_NAME} SHARED ${SRCS})
