#include <iostream>
#include "src/tokenizer/Print.h"

int main() {

    while (true){
        char symbol;
        std::cin >> symbol;

        Print printer;

        printer.print_token(symbol);

    }
    return 0;
}
