cmake_minimum_required (VERSION 3.1.0)

project (demo_lineplot)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Widgets REQUIRED)
include_directories (${CMAKE_SOURCE_DIR} ${Qt5Widgets_INCLUDE_DIRS})
file (GLOB DEMO_SOURCES "*.cpp")

# Compile project
add_executable (demo_lineplot ${DEMO_SOURCES})
target_link_libraries(demo_lineplot  ${Qt5Widgets_LIBRARIES})
target_link_libraries(demo_lineplot  wplot)
set_property(TARGET demo_lineplot PROPERTY CXX_STANDARD 11)
set_property(TARGET demo_lineplot PROPERTY CXX_STANDARD_REQUIRED ON)