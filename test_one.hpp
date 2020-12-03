#ifndef __TEST_ONE_HPP__
#define __TEST_ONE_HPP__

#include "gtest/gtest.h"
#include "equation.cpp"
#include "add.hpp"
#include <stdio.h>
#include "div.hpp"

TEST(AddTest, PositiveNumsEval) {
	char* testInput[] = {"","4","+","4"};
	Equation* eq = new Equation();
	Base* b = eq->parse(testInput, 4);
	EXPECT_EQ(b->evaluate(), 8);
}
TEST(AddTest, ZeroNumsEval) {
        char* testInput[] = {"","0", "+", "0"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
        EXPECT_EQ(b->evaluate(), 0);
}
TEST(AddTest, PositiveNumsString) {
        char* testInput[] = {"","5", "+", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
	EXPECT_EQ(b->stringify(), "5.0 + 3.0");
}
TEST(AddTest, ZeroNumsString) {
        char* testInput[] = {"","0", "+", "0"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
        EXPECT_EQ(b->stringify(), "0.0 + 0.0");
}
TEST(DivsionTest, PositiveNumsDivEval) {
        char* testInput[] = {"","6", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
        EXPECT_EQ(b->evaluate(), 2);
}
TEST(DivisionTest, ZeroNumsAddEval) {
        char* testInput[] = {"","0", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
        EXPECT_EQ(b->evaluate(), 0);
}
TEST(DivisionTest, PositiveNumsDivString) {
        char* testInput[] = {"","6", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
        EXPECT_EQ(b->stringify(), "6.0 / 3.0");
}
TEST(DivisionTest, ZeroNumsAddString) {
        char* testInput[] = {"","0", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 4);
        EXPECT_EQ(b->stringify(), "0.0 / 3.0");
}
#endif
