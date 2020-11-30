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
		if(length < 2)
			return Op(*input[0]+48);
		Op* op1  = new Op(*input[length-1]+48);
		if(*input[length-2] == '+')
			return new Add(parse(input, length-2), op1);
		if(*input[length-2] == '-')
                	return new Sub(parse(input, length-2), op1);
		if(*input[length-2] == '*')
                	return new Mult(parse(input, length-2), op1);
		if(*input[length-2] == '/')
                	return new Div(parse(input, length-2), op1);
	}
};

