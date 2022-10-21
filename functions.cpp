#include <iostream>
#include "functions.h"
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
    std::string result;
    for(int i = 0; i < line.length(); i++){
        if(!isspace(line[i])){
		    result += line.substr(i, line.length() - i);
		    break;
	    }	
    }
    return result;
}

int countChar(std::string line, char c){
    int result = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            result++;
	    }
    }
    return result;
}

std::string indenting(std::string line, int num){
    std::string indents;
    for (int i = 0; i < num; i++){
        indents += "\t";
    }
    return indents + line;
}