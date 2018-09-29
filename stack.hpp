//
// Created by Owntrolf on 2018-09-28.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#include <string>

constexpr int stackSize = 10;

//The class of stack which puts numbers and takes numbers off from the top
class stack {

    //The variables for a stack
    //intStack is the int array of size stackSize which is 10
    //stackTop is where the current index of the top of the array
    private:
        int intStack[stackSize];
        int stackTop;

    //Things that can be publicly be called like the constructor and the push and pop
    public:

        //stack's constructor which sets the top to -1 because there is nothing in the stack
        stack();

        //Puts an integer at the top of the array
        //returns true if successful, false if the stack is already full
        const bool push(int toPush);

        //Returns the current int of the top of the intStack and decreases the stackTop by 1 afterwards
        const int pop();

        //returns the current int of the top of the intStack without decreasing the stackTop
        int top() const;

        //returns true if empty else false
        bool empty() const;

        //returns true if full else false
        bool full() const;

        //Prints the stack
        std::string print() const;



};


#endif //LAB3_STACK_HPP
