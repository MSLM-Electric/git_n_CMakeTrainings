#cmake_minimum_required(VERSION 2.8)
cmake_minimum_required(VERSION 3.0)
project(TestProgram2 VERSION 1.0.0 LANGUAGES C)

add_executable(TestProgram2 main.c)

add_subdirectory(src)

#target_include_directories(TestProgram2 PUBLIC inc)

target_link_libraries(TestProgram2)

#install(TARGETS TestProgramm2 DESTINATION bin)