//
// Created by endoc on 05.07.2024.
//

#ifndef MATH_PARSER_PRINT_H
#define MATH_PARSER_PRINT_H

#include "iostream"
#include "./Tokenizer.h"
#include "../tokens/tokens_list.h"

class Print {
private:
    Tokenizer D_T;
public:
    void print_token(char symbol);
};


#endif //MATH_PARSER_PRINT_H
