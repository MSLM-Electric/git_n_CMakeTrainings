cmake_minimum_required(VERSION 3.12)
project(MyTest2)

# Установка пути к исходным файлам
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

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

# Создание исполняемого файла
add_executable(MyTest2 ${SOURCES} ${HEADERS})

# Установка пути к заголовочным файлам
if(${CMAKE_VERSION} VERSION_LESS "2.8.12")
    include_directories(MyTest2 PUBLIC ${INCLUDE_DIR})
else()
    target_include_directories(MyTest2 PUBLIC ${INCLUDE_DIR})
endif()
