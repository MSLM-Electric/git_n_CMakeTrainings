add_library(Srcs src1.c src2.c)
target_include_directories("${PROJECT_SOURCE_DIR}/inc" Srcs INTERFACE .)