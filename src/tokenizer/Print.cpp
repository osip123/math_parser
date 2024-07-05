//
// Created by endoc on 05.07.2024.
//

#include "Print.h"

void Print::print_token(char symbol) {
    Tokens this_token = D_T.create_new_token(symbol);

    if(this_token == Tokens::UNNOWN){
        std::cout << "sorry i not known this token" << std::endl;
    }

    if (this_token == Tokens::SIN){
        std::cout << "this is sin" << std::endl;
    }

    if (this_token == Tokens::COS){
        std::cout << "this is sin" << std::endl;
    }

    if (this_token == Tokens::TG){
        std::cout << "this is tg" << std::endl;
    }

    if (this_token == Tokens::CTG){
        std::cout << "this is tg" << std::endl;
    }

    if (this_token == Tokens::ARSIN){
        std::cout << "this is arcsin" << std::endl;
    }

    if (this_token == Tokens::ARCOS){
        std::cout << "this is arccos" << std::endl;
    }

    if (this_token == Tokens::LPAR){
        std::cout << "this is (" << std::endl;
    }

    if (this_token == Tokens::RPAR){
        std::cout << "this is )" << std::endl;
    }
}
