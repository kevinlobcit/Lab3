//
// Created by Owntrolf on 2018-09-28.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

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
        stack()
        {
            stackTop = -1;
        }

        //Puts an integer at the top of the array
        //returns true if successful, false if the stack is already full
        bool push(int toPush)
        {
            if(stackTop < stackSize)
            {
                intStack[++stackTop] = toPush;
                return 1;
            }
            return 0;
        }

        //Returns the current int of the top of the intStack and decreases the stackTop by 1 afterwards
        int pop()
        {
            return intStack[stackTop--];
        }

        //returns the current int of the top of the intStack without decreasing the stackTop
        const int top()
        {
            return intStack[stackTop];
        }

        const bool empty()
        {
            if(stackTop == -1)
                return 1;
            return 0;
        }

        const bool full()
        {
            if(stackTop == stackSize)
                return 1;
            return 0;
        }

        const string print()
        {
            return 0;
        }


};


#endif //LAB3_STACK_HPP