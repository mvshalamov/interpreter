#pragma once

#include "iostream"

#ifndef INTERPRETER_INTERPRETER_H
#define INTERPRETER_INTERPRETER_H

#endif //INTERPRETER_INTERPRETER_H

enum TypeToken {Int, Plus};

class Token {
private:
    std::string type_token;
    std::string value;
public:
    Token(TypeToken type_token, std::string value): type_token(type_token), value(value) {}
    std::string GetValue();
    std::string GetTypeToken();
};

class Interpreter {
private:

public:
    Interpreter(std::string str);

};
