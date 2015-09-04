cmake_minimum_required (VERSION 3.1.0)

project (trade)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Core REQUIRED)
include_directories (${CMAKE_SOURCE_DIR}/src ${Qt5Widgets_INCLUDE_DIRS})
file (GLOB TRADE_SOURCES "*.cpp")

# Compile project
add_definitions (-DTRADE_LIBRARY)
add_library (trade SHARED ${TRADE_SOURCES})
target_link_libraries (trade  ${Qt5Core_LIBRARIES})
set_property (TARGET trade PROPERTY CXX_STANDARD 11)
set_property (TARGET trade PROPERTY CXX_STANDARD_REQUIRED ON)
