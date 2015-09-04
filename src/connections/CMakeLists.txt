cmake_minimum_required (VERSION 3.1.0)

add_subdirectory (yahoodataconnection)

add_dependencies (yahoodataconnection trade)
add_dependencies (yahoodataconnection wupdater)
