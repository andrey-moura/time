#Require a minimum version
cmake_minimum_required(VERSION 3.10)

project(uva-time)

add_library(uva-time
	${CMAKE_CURRENT_LIST_DIR}/src/time.cpp
)

include_directories(${CMAKE_CURRENT_LIST_DIR})

#Tests

#Create tests for parent project
cspec_configure("uva-time" ${CMAKE_CURRENT_LIST_DIR} "uva-time")