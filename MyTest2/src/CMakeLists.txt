
#add_library(src src1.c src2.c)

#cmake_minimum_required(VERSION 3.0)
#add_library(TestProgram2Lib STATIC src1.c src2.c)

set(SOURCES ${SOURCES}
      ${SOURCES_PREFIX}/src1.c
      ${SOURCES_PREFIX}/src2.c

      PARENT_SCOPE)