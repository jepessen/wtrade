cmake_minimum_required (VERSION 3.1.0)

project (yahoodataconnection)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin/connections)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Core REQUIRED)
find_package (Qt5Network REQUIRED)
include_directories (${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/src/connections ${Qt5Core_INCLUDE_DIRS} ${Qt5Network_INCLUDE_DIRS})
file (GLOB YDC_SOURCES "*.cpp")
file (GLOB YDC_RESOURCES *.qrc)

# Compile project
add_definitions (-DYAHOODATACONNECTION_LIBRARY)
QT5_ADD_RESOURCES (YDC_BUILT_RESOURCES ${YDC_RESOURCES})
set_source_files_properties (${YDC_BUILT_RESOURCES} PROPERTIES GENERATED ON)
add_library (yahoodataconnection SHARED ${YDC_SOURCES} ${YDC_BUILT_RESOURCES})
target_link_libraries (yahoodataconnection  ${Qt5Core_LIBRARIES})
target_link_libraries (yahoodataconnection  ${Qt5Network_LIBRARIES})
target_link_libraries (yahoodataconnection  trade)
target_link_libraries (yahoodataconnection  wupdater)
set_property (TARGET yahoodataconnection PROPERTY CXX_STANDARD 11)
set_property (TARGET yahoodataconnection PROPERTY CXX_STANDARD_REQUIRED ON)
