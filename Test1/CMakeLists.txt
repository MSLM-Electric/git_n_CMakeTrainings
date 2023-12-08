cmake_minimum_required(VERSION 2.8)
if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

set(PRJ_NAME cmakeTrain)
project(prjCmakeTRAIN VERSION 1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

option(USE_MYSRC_OSM "use my src hihi" ON)


configure_file(prjTrainConfigVersion.h.in prjCmakeTRAINConfig.h)

add_subdirectory("${PROJECT_SOURCE_DIR}" Srcs)

file(GLOB THISHEADERS inc/*.h)
include_directories(inc)
set(HEADER_FILES THISHEADERS)  
message(55${HEADER_FILES})

list(APPEND SRC_LIBS Srcs)
#list(APPEND SRC_INCLUDES "${PROJECT_SOURCE_DIR}/src")
#message(${SRC_INCLUDES})

##add_library(mylib ${THISHEADERS})
add_library(mylib SRC_LIBS)
add_executable(prjCmakeTRAIN main.c)

target_link_libraries(prjCmakeTRAIN PUBLIC ${SRC_LIBS})
target_include_directories(prjCmakeTRAIN PUBLIC ${PROJECT_BINARY_DIR}/inc)
