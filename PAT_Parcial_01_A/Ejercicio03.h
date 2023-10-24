#pragma once
#include <stack>

class MinStack
{
public:
    MinStack();

    void push(int value);
    void pop();
    int top();
    int getMin();

private:
    std::stack<int> mainStack; // Pila principal
    std::stack<int> minStack;  // Pila para el seguimiento de mínimos
};