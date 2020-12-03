#include <iostream>
#include <stdio.h>
#include "base.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "equation.cpp"

using namespace std;

int main(int argc, char* argv[]) {	
//char* testInput[] = {"", "3", "+", "4"};
        /*testInput[0][0] = ' ';
        testInput[1][0] = '4';
        testInput[2][0] = '+';
        testInput[2][1] = ' ';
        testInput[3][0] = '4';*/
	Equation* build = new Equation();
	Base* b = build->parse(argv, argc);
	cout << b->stringify() << " =";
	cout << " " << b->evaluate() << endl;
	return 0;
}


