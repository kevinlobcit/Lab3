//
// Created by Owntrolf on 2018-09-28.
//

#define CATCH_CONFIG_MAIN //this tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack")
{
    stack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("A new stack has 11 ints added", "[stack")
{
    stack tester;

    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(8) == true);
    REQUIRE(tester.push(9) == true);
    REQUIRE(tester.push(10) == false);
}

TEST_CASE("A new stack with 4 ints pushed and one popped", "[stack")
{
    stack tester;

    tester.push(0);
    tester.push(1);
    tester.push(2);
    tester.push(3);

    REQUIRE(tester.pop() == 3);
}

TEST_CASE("A new stack with 4 ints and using top()", "[stack")
{
    stack tester;

    tester.push(0);
    tester.push(1);
    tester.push(2);
    tester.push(3);

    REQUIRE(tester.top() == 3);
    REQUIRE(tester.top() == 3);
}

TEST_CASE("A new stack with nothing and testing if it is empty", "[stack")
{
    stack tester;

    REQUIRE(tester.empty() == 1);
}

TEST_CASE("A stack with a full array and using full()", "[stack")
{
    stack tester;

    tester.push(0);
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.push(7);
    tester.push(8);
    tester.push(9);

    REQUIRE(tester.full() == 1);
}

TEST_CASE("A stack with 5 ints and using print()", "[stack")
{
    stack tester;

    tester.push(0);
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.push(4);

    REQUIRE(tester.print().compare("0 1 2 3 4 "));
}