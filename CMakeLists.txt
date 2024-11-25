cmake_minimum_required(VERSION 3.16)

include(${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial/cmake/public.cmake)

project(
    QtCloudMusic
    VERSION 1.0.0
    DESCRIPTION "qt cloudmusic project"
    LANGUAGES CXX
)

MY_ADD_PROJECT_INCLUDE_FUNC(
    ${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial/inc
)

MY_ADD_QT_PACK_FUNC(
    Widgets
)

MY_ADD_LINK_LIB_FUNC(
    QtMaterial
)

include(${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial/cmake/option.cmake)
include(${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial/cmake/code.cmake)
include(${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial/cmake/exe.cmake)
include(${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial/cmake/link.cmake)

add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/QtMaterial)