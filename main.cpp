#include <iostream>
#include "functions.h"

int main() {
    std::string currentLine;
    int indents = 0;
    while(getline(std::cin, currentLine)){
        indents -= countChar(currentLine, '}');
        std::cout << indenting(removeLeadingSpaces(currentLine), indents) << std::endl;
        indents += countChar(currentLine, '{');
    }
}