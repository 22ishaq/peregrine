#include <iostream>

#include "peregrine/version.hpp"

int main() {
    std::cout << "peregrine " << peregrine::version() << '\n';
    return 0;
}