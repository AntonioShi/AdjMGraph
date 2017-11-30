cmake_minimum_required(VERSION 3.8)
project(AdjMGraph)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp AdjMGraph.h AdjGraph.cpp SeqList.h)
add_executable(AdjMGraph ${SOURCE_FILES} AdjMGraph.h AdjGraph.cpp SeqList.h)