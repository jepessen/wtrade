cmake_minimum_required (VERSION 3.1.0)

project (wlogger)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Core REQUIRED)
find_package (Boost 1.55.0 COMPONENTS log REQUIRED)
include_directories (${CMAKE_SOURCE_DIR}/src ${Qt5Core_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
file (GLOB WLOGGER_SOURCES "*.cpp")

# Compile project
add_definitions (-DWLOGGER_LIBRARY)
add_definitions( -DBOOST_ALL_DYN_LINK )
add_library (wlogger SHARED ${WLOGGER_SOURCES})
target_link_libraries (wlogger  ${Qt5Core_LIBRARIES})
target_link_libraries (wlogger ${Boost_LOG_LIBRARY})
set_property (TARGET wlogger PROPERTY CXX_STANDARD 11)
set_property (TARGET wlogger PROPERTY CXX_STANDARD_REQUIRED ON)
