cmake_minimum_required (VERSION 3.1.0)

add_subdirectory (wtrade)
add_subdirectory (wtradegui)
add_subdirectory (wlogger)

add_dependencies (wtradegui wlogger)
add_dependencies (wtrade wlogger)
add_dependencies (wtrade wtradegui)
