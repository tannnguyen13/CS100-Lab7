#include <iostream>
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
	Equation* build = new Equation();
	Base* b = build->parse(argv, argc);
	//b->stringify();
	//cout << " " << b->evaluate() << endl;
return 0;
}


