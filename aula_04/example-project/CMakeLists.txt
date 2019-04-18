cmake_minimum_required(VERSION 3.0)
project(school CXX)

add_library(school
	functions.cpp
	functions.h
	student.cpp
	student.h
	main.cpp
)

add_executable(
	main
	main.cpp
)

target_link_libraries(
	main
		PRIVATE
		school
)
	