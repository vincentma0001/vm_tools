
# set cmake version request:
cmake_minimum_required (VERSION 3.8.0)

# set working dirs:
SET(HOME  /vm/vm_tools)
SET(TNAME vm_tools)
SET(VER   1.0.0.0)

# set project output dirs and source dirs
SET(PROJECT_BINARY_DIR ${HOME}/prj/cmake)
SET(PROJECT_SOURCE_DIR ${HOME}/src)

# set libs output dirs
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY          ${HOME}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG    ${HOME}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE  ${HOME}/lib)

# set libs file (debug release) output dirs
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY          ${HOME}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG    ${HOME}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE  ${HOME}/lib)

# set execute file (debug release) output dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY          ${HOME}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG    ${HOME}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE  ${HOME}/bin)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set c++ flags
set(CMAKE_CXX_FLAGS "-std=c++11 -g ${CMAKE_CXX_FLAGS}")

# add include directories for projects and submudules
include_directories(${HOME} ${PROJECT_SOURCE_DIR})


# create project
project(${TNAME} VERSION ${VER})
# create configure file
configure_file("${TNAME}_ver.h.in" "${HOME}/${TNAME}_ver.h")

# set sub modules
add_subdirectory(${HOME}/tst/tst_list)
add_subdirectory(${HOME}/tst/tst_stdmap)
add_subdirectory(${HOME}/tst/tst_prfmt)
add_subdirectory(${HOME}/tst/tst_cycbuf)
add_subdirectory(${HOME}/tst/tst_singleton)
add_subdirectory(${HOME}/tst/tst_bits)
add_subdirectory(${HOME}/tst/tst_string)
add_subdirectory(${HOME}/tst/tst_file)
#add_subdirectory(${HOME}/tst/tst_util)
#add_subdirectory(${HOME}/tst/tst_kernal)
add_subdirectory(${HOME}/tst/tst_utst)
add_subdirectory(${HOME}/tst/tst_lib/lib)
add_subdirectory(${HOME}/tst/tst_lib/bin)
add_subdirectory(${HOME}/tst/tst_error)
add_subdirectory(${HOME}/tst/tst_cfgs_w)
add_subdirectory(${HOME}/tst/tst_cfgs)
add_subdirectory(${HOME}/tst/tst_test)
