#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <cmath>

RPN::RPN() : _error(false), _errorMessage("") {}

RPN::~RPN() {}

RPN::RPN(const RPN &copy) : _error(copy._error), _errorMessage(copy._errorMessage){
}

void RPN::push(int number) {
    this->_stack.push_back(number);
}

RPN	&RPN::operator=(const RPN &copy)
{
	this->_errorMessage = copy._errorMessage;
	this->_error = copy._error;
	return *this;
}

int RPN::pop() {
    if (this->_stack.empty()) {
        this->_error = true;
        this->_errorMessage = "Error: not enough operands";
        return 0;
    }

    int number = this->_stack.back();
    this->_stack.pop_back();
    return number;
}

bool RPN::performOperation(const char operation) {
    int a, b;
    b = pop();
    a = pop();

    if (this->_error) {
        return false;
    }

    switch (operation) {
        case '+': push(a + b); break;
        case '-': push(a - b); break;
        case '*': push(a * b); break;
        case '/':
            if (b == 0) {
                this->_error = true;
                this->_errorMessage = "Error: division by zero";
                return false;
            }
            push(a / b);
            break;
        default: 
            this->_error = true;
            this->_errorMessage = "Error: unknown operation";
            return false;
    }
    return true;
}

void RPN::parseExpression(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;
    while (iss >> token) {
        if (isdigit(token[0]) && token.length() == 1) { //&& token[0] == '-' && isdigit(token[1]))) {
            push(token[0] - '0');
        } else if (token.length() == 1 && std::string("+-*/").find(token[0]) != std::string::npos) {
            if (!performOperation(token[0])) {
                return;
            }
        } else {
            this->_error = true;
            this->_errorMessage = "Error: invalid token";
            return;
        }
    }
	if (this->_stack.size() != 1) {
        this->_error = true;
        this->_errorMessage = "Error: invalid expression";
        return ;
    }
}

int RPN::calculate() {
    return pop();
}

bool RPN::isError() const {
    return this->_error;
}

std::string RPN::getErrorMessage() const {
    return this->_errorMessage;
}