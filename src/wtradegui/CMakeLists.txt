cmake_minimum_required (VERSION 3.0.0)

project (wtradegui)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Widgets REQUIRED)
include_directories (${CMAKE_SOURCE_DIR}/src ${Qt5Widgets_INCLUDE_DIRS})
file (GLOB WTRADE_SOURCES "*.cpp")

# Compile project
add_library (wtradegui ${WTRADE_SOURCES})
target_link_libraries(wtradegui  ${Qt5Widgets_LIBRARIES})
set_property(TARGET wtrade PROPERTY CXX_STANDARD 11)
set_property(TARGET wtrade PROPERTY CXX_STANDARD_REQUIRED ON)
