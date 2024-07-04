cmake_minimum_required(VERSION 3.28)
project(math_parser)

set(CMAKE_CXX_STANDARD 17)

add_executable(math_parser main.cpp
        src/tokens/tokens_list.h
        src/tokenizer/Tokenizer.cpp
        src/tokenizer/Tokenizer.h
        src/tokenizer/Tokenizer.h
        src/parser/parser.cpp
        src/parser/parser.h
        src/parser/parser.h)
