#ifndef __EQUATION_CPP__
#define __EQUATION_CPP__

#include <iostream>
#include "base.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "op.hpp"
using namespace std;
class Equation {
	public:	
		Base* parse(char** input, int length) {
			Base* temp = new Op(input[1][0] - 48);
			for(unsigned int i = 2; i < length;i++) {
				if(input[i][0] == '+') {
					Base* temp2 = new Op(input[i+1][0] - 48);
					temp = new Add(temp, temp2);
					i++;
				}
				else if(input[i][0] == '-') {
					Base* temp2 = new Op(input[i+1][0] - 48);
					temp = new Sub(temp, temp2);
					i++;
				}
				else if(input[i][0] == '/') {
					Base* temp2 = new Op(input[i+1][0] - 48);
					temp = new Div(temp, temp2);
					i++;
				}
				else if(input[i][0] == '*' && input[i][1] == '*') {
					Base* temp2 = new Op(input[i+1][0] - 48);
					temp = new Pow(temp, temp2);
					i++;
				}
				else if(input[i][0] == '*') {
					Base* temp2 = new Op(input[i+1][0] - 48);
					temp = new Mult(temp, temp2);
					i++;
				}
				else if(isdigit(input[i][0])) {}
				else {
					std::cout << "Invalid Input" << endl;
					delete temp;
					temp = nullptr;
					return temp;
				}	
			}
			return temp;
		}
};

#endif
