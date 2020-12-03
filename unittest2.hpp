#ifndef __UNIT_TEST_2_HPP__
#define __UNIT_TEST_2_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "equation.cpp"

TEST(MultTest, MultStringifyAndEvaluateNumbers) {
    char* test[] = {"","2","*","1"};
    Equation* test2 = new Equation();
    EXPECT_EQ(test2->parse(test, 4)->stringify(), "2.0 * 1.0");
    EXPECT_EQ(test2->parse(test, 4)->evaluate(), 2);
}

TEST(PowTest, PowStringifyAndEvaluateNumbers) {
	char* test[]  = {"","2","**","1"};
	Equation* test2 = new Equation();
	EXPECT_EQ(test2->parse(test, 4)->stringify(), "2.0 ** 1.0");
	EXPECT_EQ(test2->parse(test, 4)->evaluate(), 2);
}

TEST(SubTest, SubStringifyAndEvaluateNumbers) {
	char* test[] = {"","2","-","1"};
	Equation* test2 = new Equation();
	EXPECT_EQ(test2->parse(test, 4)->stringify(), "2.0 - 1.0");
	EXPECT_EQ(test2->parse(test, 4)->evaluate(), 1);
}
#endif
