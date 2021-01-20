#include "Minus.h"


Minus::Minus()
{
}

void Minus::evaluate(const vector<string> &params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	float first_val = context.pop_from_stack();
	float second_val = context.pop_from_stack();
	float result = second_val - first_val; //???
	context.push_on_stack(result);
}


Minus::~Minus()
{
}
