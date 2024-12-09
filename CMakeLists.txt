cmake_minimum_required(VERSION 3.16)

include(${CMAKE_SOURCE_DIR}/3rdparty/QtCloudMusicMaterial/public.cmake)

project(
    QtCloudMusic
    VERSION 1.0.0
    DESCRIPTION "qt cloudmusic project"
    LANGUAGES CXX
)

# 添加子目录构建
add_subdirectory(${CMAKE_SOURCE_DIR}/3rdparty/QtCloudMusicMaterial)

# 添加头文件搜索目录
MY_ADD_PROJECT_INCLUDE_FUNC(
    ${CMAKE_SOURCE_DIR}/inc
    ${CMAKE_SOURCE_DIR}/3rdparty/QtCloudMusicMaterial/inc
)

# 添加 Qt 包
MY_ADD_QT_PACK_FUNC(
    Widgets
)

# 添加链接库
MY_ADD_LINK_LIB_FUNC(
    QtCloudMusicMaterial
)

# 设置宏定义
add_definitions(${MY_BUILD_DEFINE})

# 设置头文件搜索目录
include_directories(${MY_PROJECT_INCLUDE})

# 设置依赖库链接目录
link_directories(${MY_PROJECT_LINKDIR})

# 查找 Qt 包
find_package(Qt${MY_QT_VERSION_MAJOR} COMPONENTS ${MY_FIND_QT_PACK} REQUIRED)

# 设置输出目录
set(EXECUTABLE_OUTPUT_PATH ${MY_BUILD_BINDIR})
set(LIBRARY_OUTPUT_PATH ${MY_BUILD_BINDIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${MY_BUILD_LIBDIR})

# 创建可执行程序
add_executable(${PROJECT_NAME}
    ${MY_PROJECT_QRC}
    ${MY_PROJECT_HEADER}
    ${MY_PROJECT_SOURCE}
)

# 指定目标链接库
target_link_libraries(${PROJECT_NAME} PRIVATE ${MY_FIND_QT_PACK_LINK} ${MY_PROJECT_LINKLIB})
