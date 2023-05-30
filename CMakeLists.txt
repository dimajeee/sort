cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(sort)

add_executable(bubble 
    src/bubble/bubble.cpp
    src/bubble/bubble.h 
    src/bubble/bubbleSort.cpp
)

add_executable(choice
    src/choice/choice.cpp
    src/choice/choice.h
    src/choice/choiceSort.cpp
)

add_executable(insert
    src/insert/insert.cpp
    src/insert/insert.h
    src/insert/insertSort.cpp
)

add_executable(Hoara
    src/Hoara/Hoara.cpp
    src/Hoara/Hoara.h
    src/Hoara/HoaraSort.cpp
)