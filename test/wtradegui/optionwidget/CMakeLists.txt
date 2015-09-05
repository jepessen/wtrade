cmake_minimum_required (VERSION 3.1.0)

project (test_wtradegui_optionwidget)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/export/bin)
set (CMAKE_PREFIX_PATH ${QT_DIR}/lib/cmake)
set (CMAKE_AUTOMOC ON)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package (Qt5Widgets REQUIRED)
include_directories (${CMAKE_SOURCE_DIR}/src ${Qt5Widgets_INCLUDE_DIRS})
file (GLOB TEST_SOURCES "*.cpp")

# Compile project
add_executable (test_wtradegui_optionwidget ${TEST_SOURCES})
target_link_libraries(test_wtradegui_optionwidget  ${Qt5Widgets_LIBRARIES})
target_link_libraries(test_wtradegui_optionwidget ${Qt5Core_LIBRARIES})
target_link_libraries(test_wtradegui_optionwidget wtradegui)
set_property(TARGET test_wtradegui_optionwidget PROPERTY CXX_STANDARD 11)
set_property(TARGET test_wtradegui_optionwidget PROPERTY CXX_STANDARD_REQUIRED ON)
