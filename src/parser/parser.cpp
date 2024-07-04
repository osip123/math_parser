//
// Created by endoc on 04.07.2024.
//

#include "parser.h"

std::vector<Tokens> parser::create_token_list(char symbol) {
    token = Tokenizer::create_new_token(symbol);
    token_list.push_back(token);
    return std::vector<Tokens>();
}
