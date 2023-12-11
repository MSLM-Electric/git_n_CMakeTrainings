cmake_minimum_required(VERSION 2.8)
#cmake_minimum_required(VERSION 3.0)
project(MyTest2 VERSION 1.0.0 C CXX ASM)

add_executable(TestProgram2 main.c)

#set(SOURCES "")
#set(SOURCES_PREFIX ${CMAKE_SOURCE_DIR}/src)
#add_subdirectory(src)

file(GLOB SOURCES_FILES src/*.c)

file(GLOB INCLUDE_HEADERS12 "inc/*.h")

#add_library(${INCLUDE_HEADERS12})

#target_include_directories(TestProgram2 PUBLIC inc)
#include_directories(INCLUDE_HEADERS12 "${PROJECT_SOURCE_DIR}/inc")

add_library(TestProgram2 ${SOURCES_FILES} ${INCLUDE_HEADERS12})

target_link_libraries(TestProgram2)

#install(TARGETS TestProgramm2 DESTINATION bin)

#set(LIB_INSTALL_DIR ${PROJECT_SOURCE_DIR}/lib)

#install(FILES ${INCLUDE_HEADERS12} DESTINATION ${LIB_INSTALL_DIR}/inc PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)