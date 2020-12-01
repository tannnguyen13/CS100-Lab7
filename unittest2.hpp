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
    char** test = new char *[3];
    test = {"2","*","1"};
    Equation* Etest = new Equation();
    EXPECT_EQ(Etest->parse(test, 3)->stringify(), "2.0 * 1.0");
    EXPECT_EQ(Etest->parse(test, 3)->evaluate(), 2);
}

TEST(PowTest, PowStringifyAndEvaluateNumbers) {
	char** test = new char *[3];
	test = {"2","**","1"};
	Equation* Etest = new Equation();
	EXPECT_EQ(Etest->parse(test, 3)->stringify(), "2.0 ** 1.0");
	EXPECT_EQ(Etest->parse(test, 3)->evaluate(), 2);
}

TEST(SubTest, SubStringifyAndEvaluateNumbers) {
	char** test = new char*[3];
	test = {"2","-","1"};
	Equation* Etest = new Equation();
	EXPECT_EQ(Etest->parse(test, 3)->stringify(), "2.0 - 1.0");
	EXPECT_EQ(Etest->parse(test, 3)->evaluate(), 1);
}
#endif
