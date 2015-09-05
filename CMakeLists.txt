### wPlot project ###

# In order to work following variables must be set
#
# QT_DIR: Path to Qt installation.

cmake_minimum_required (VERSION 3.0.0)

# Variables that should be set before execution
if (WIN32)
	set (QT_DIR "" CACHE PATH "Qt library path")
	set (BOOST_ROOT "" CACHE PATH "Boost library path")
else (WIN32)
	set (QT_DIR "/usr/include" CACHE PATH "Qt library path")
	set (BOOST_ROOT "/usr/include" CACHE PATH "Boost library path")
endif (WIN32)

message ("Generating WTrade project")
message ("Setting QT_DIR To ${QT_DIR}")
message ("Setting BOOST_ROOT to ${BOOST_ROOT}")

add_subdirectory (src)
add_subdirectory (subtrees)
add_subdirectory (test)