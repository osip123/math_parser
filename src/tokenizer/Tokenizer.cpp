//
// Created by endoc on 04.07.2024.
//

#include "Tokenizer.h"

Tokens Tokenizer::create_new_token(char symbol) {
    if (symbol == 'cos')
        return Tokens::COS;

    if (symbol == 'sin'){
        return Tokens::SIN;
    }

    if (symbol == 'tg'){
        return Tokens::TG;
    }

    if (symbol == 'ctg'){
        return Tokens::CTG;
    }

    if (symbol == 'arctg'){
        return Tokens::ARTG;
    }

    if (symbol == 'atctg'){
        return Tokens::ARCTG;
    }

    if (symbol == 'arcsin'){
        return Tokens::ARSIN;
    }

    if (symbol == 'arccos'){
        return Tokens::ARCOS;
    }

    if (symbol == '('){
        return Tokens::LPAR;
    }

    if (symbol == ')'){
        return Tokens::RPAR;
    }

    return Tokens::UNNOWN;
}
