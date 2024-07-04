#include <iostream>
#include "src/tokens/tokens_list.h"
#include "src/tokenizer/Tokenizer.h"

int main() {

    Tokenizer tokenizer{};

    Tokenizer::create_new_token('ctg');

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
