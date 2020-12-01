#ifndef __TEST_ONE_HPP__
#define __TEST_ONE_HPP__

#include "gtest/gtest.h"
#include "equation.cpp"
#include "add.hpp"
#include "div.hpp"

TEST(AddTest, PositiveNumsEval) {
	char** testInput = {"5", "+", "3"};
	Equation* eq = new Equation();
	Base* b = eq->parse(testInput, 3);
	EXPECT_EQ(b->evaluate() 8);
}
TEST(AddTest, ZeroNumsEval) {
        char** testInput = {"0", "+", "0"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 3);
        EXPECT_EQ(b->evaluate() 0);
}
TEST(AddTest, PositiveNumsString) {
        char** testInput = {"5", "+", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 3);
	EXPECT_EQ(b->stringify(), "5 + 3");
}
TEST(AddTest, ZeroNumsString) {
        char** testInput = {"0", "+", "0"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 3);
        EXPECT_EQ(b->stringify(), "0 + 0");

TEST(DivTest, PositiveNumsEval) {
        char** testInput = {"6", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 3);
        EXPECT_EQ(b->evaluate() 2);
}
TEST(AddTest, ZeroNumsEval) {
        char** testInput = {"0", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 0);
        EXPECT_EQ(b->evaluate() 0);
}
TEST(DivTest, PositiveNumsString) {
        char** testInput = {"6", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 3);
        EXPECT_EQ(b->stringify(), "6 / 3");
}
TEST(AddTest, ZeroNumsString) {
        char** testInput = {"0", "/", "3"};
        Equation* eq = new Equation();
        Base* b = eq->parse(testInput, 0);
        EXPECT_EQ(b->stringify(), "0 / 3");
}

