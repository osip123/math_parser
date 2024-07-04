//
// Created by endoc on 04.07.2024.
//

#ifndef MATH_PARSER_PARSER_H
#define MATH_PARSER_PARSER_H

#include "../tokens/tokens_list.h"
#include "../tokenizer/Tokenizer.h"

#include "vector"

class parser {
private:
    Tokenizer new_token;
private:
    std::vector<Tokens> token_list;
private:
    Tokens token;
public:
    std::vector<Tokens> create_token_list(char symbol);
};


#endif //MATH_PARSER_PARSER_H
