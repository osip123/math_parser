//
// Created by endoc on 04.07.2024.
//

#ifndef MATH_PARSER_TOKENIZER_H
#define MATH_PARSER_TOKENIZER_H

#include "../tokens/tokens_list.h"

class Tokenizer {
private:
    Tokens new_Token;
public:
    static Tokens create_new_token(char symbol);
};


#endif //MATH_PARSER_TOKENIZER_H
