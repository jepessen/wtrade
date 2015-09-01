cmake_minimum_required (VERSION 3.0.0)

add_subdirectory (wtrade)
add_subdirectory (wtradegui)

add_dependencies (wtrade wtradegui)
