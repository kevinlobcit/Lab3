//
// Created by Owntrolf on 2018-09-28.
//

#include "stack.hpp"

//stack's constructor which sets the top to -1 because there is nothing in the stack
stack::stack()
{
    stackTop = -1;
}

//Puts an integer at the top of the array
//returns true if successful, false if the stack is already full
const bool stack::push(int toPush)
{

    if(++stackTop < stackSize)
    {
        intStack[stackTop] = toPush;
        return 1;
    }
    return 0;
}

//Returns the current int of the top of the intStack and decreases the stackTop by 1 afterwards
const int stack::pop()
{
    return intStack[stackTop--];
}

//returns the current int of the top of the intStack without decreasing the stackTop
int stack::top() const
{
    return intStack[stackTop];
}

bool stack::empty() const
{
    if(stackTop == -1)
        return 1;
    return 0;
}

bool stack::full() const
{
    if(stackTop == stackSize)
        return 1;
    return 0;
}

std::string stack::print() const
{
    std::string output = "";
    for(int i = stackTop; i >= 0; i--)
    {
        output += i + " ";
    }
    return output;
}