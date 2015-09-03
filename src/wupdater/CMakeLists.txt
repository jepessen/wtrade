cmake_minimum_required (VERSION 3.1.0)

project (wupdater)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Core REQUIRED)
include_directories (${CMAKE_SOURCE_DIR}/src ${Qt5Widgets_INCLUDE_DIRS})
file (GLOB WUPDATER_SOURCES "*.cpp")

# Compile project
add_definitions (-DWUPDATER_LIBRARY)
add_library (wupdater SHARED ${WUPDATER_SOURCES})
target_link_libraries (wupdater  ${Qt5Core_LIBRARIES})
set_property (TARGET wupdater PROPERTY CXX_STANDARD 11)
set_property (TARGET wupdater PROPERTY CXX_STANDARD_REQUIRED ON)
