cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(sort)

add_executable(bubble 
    bubble/bubble.cpp
    bubble/bubble.h 
    bubble/bubbleSort.cpp
)

add_executable(choice
    choice/choice.cpp
    choice/choice.h
    choice/choiceSort.cpp
)