<<<<<<< HEAD
cmake_minimum_required(VERSION 2.8)
#cmake_minimum_required(VERSION 3.0)
project(MyTest2 VERSION 1.0.0 C CXX ASM)
=======
cmake_minimum_required(VERSION 3.12)
project(MyTest2)
>>>>>>> tmp

# Установка пути к исходным файлам
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

<<<<<<< HEAD
#set(SOURCES "")
#set(SOURCES_PREFIX ${CMAKE_SOURCE_DIR}/src)
#add_subdirectory(src)

file(GLOB SOURCES_FILES src/*.c)

file(GLOB INCLUDE_HEADERS12 "inc/*.h")

#add_library(${INCLUDE_HEADERS12})

#target_include_directories(TestProgram2 PUBLIC inc)
#include_directories(INCLUDE_HEADERS12 "${PROJECT_SOURCE_DIR}/inc")

add_library(TestProgram2 ${SOURCES_FILES} ${INCLUDE_HEADERS12})
=======
# Добавление исходных файлов
set(SOURCES
    ${SOURCE_DIR}/src1.c
    ${SOURCE_DIR}/src2.c
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

# Добавление заголовочных файлов
set(HEADERS
    ${INCLUDE_DIR}/src1.h
    ${INCLUDE_DIR}/src2.h
)
>>>>>>> tmp

# Создание исполняемого файла
add_executable(MyTest2 ${SOURCES} ${HEADERS})

<<<<<<< HEAD
#install(TARGETS TestProgramm2 DESTINATION bin)

#set(LIB_INSTALL_DIR ${PROJECT_SOURCE_DIR}/lib)

#install(FILES ${INCLUDE_HEADERS12} DESTINATION ${LIB_INSTALL_DIR}/inc PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)
=======
# Установка пути к заголовочным файлам
if(${CMAKE_VERSION} VERSION_LESS "2.8.12")
    include_directories(MyTest2 PUBLIC ${INCLUDE_DIR})
else()
    target_include_directories(MyTest2 PUBLIC ${INCLUDE_DIR})
endif()
>>>>>>> tmp
