#include "Ejercicio03.h"

MinStack::MinStack()
{
}

void MinStack::push(int value)
{
    mainStack.push(value);
    if (minStack.empty() || value <= minStack.top())
    {
        minStack.push(value);
    }
}

void MinStack::pop()
{
    if (!mainStack.empty())
    {
        if (mainStack.top() == minStack.top())
        {
            minStack.pop();
        }
        mainStack.pop();
    }
}

int MinStack::top()
{
    if (!mainStack.empty())
    {
        return mainStack.top();
    }
    return -1;
}

int MinStack::getMin()
{
    if (!minStack.empty())
    {
        return minStack.top();
    }
    return -1;
}