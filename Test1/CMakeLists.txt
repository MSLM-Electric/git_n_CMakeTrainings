cmake_minimum_required(VERSION 3.0.2)
if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

set(PRJ_NAME cmakeTrain)
project(prjCmakeTRAIN VERSION 1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

option(USE_MYSRC_OSM "use my src hihi" ON)
add_definitions(-DDEBUG_ON_VS)
add_definitions(-DREALEASE_MODE)
get_directory_property( DirDefs DIRECTORY ${CMAKE_SOURCE_DIR} COMPILE_DEFINITIONS )
foreach( d ${DirDefs} )
    message( STATUS "Found Define: " ${d} )
    if(${d} STREQUAL DEBUG_ON_VS)
        message("DEBUG_ON_VS added")
        set(DEBUG_ON_VS_FLAG TRUE)
    endif()
endforeach()
message( STATUS "DirDefs: " ${DirDefs} )
message( "COMPILE_DEFINITIONS = ${DirDefs}" )
#option(DEBUG_ON_VS_FLAG STATUS DEBUG_ON_VS)
if(DEBUG_ON_VS_FLAG)
    message("DEBUG_ON_VS_FLAG True")
else()
    message("DEBUG_ON_VS_FLAG False")
endif()
message(${DEBUG_ON_VS_FLAG})
configure_file(prjTrainConfigVersion.h.in prjCmakeTRAINConfig.h)

# Установка пути к исходным файлам
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

# Добавление исходных файлов
set(SOURCES
    ${SOURCE_DIR}/src1.c
    ${SOURCE_DIR}/src2.c
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

# Создание исполняемого файла
add_executable(prjCmakeTRAIN ${SOURCES})

# Установка пути к заголовочным файлам
target_include_directories(prjCmakeTRAIN PUBLIC ${INCLUDE_DIR})