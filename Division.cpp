#include "Division.h"



Division::Division()
{
}

void Division::evaluate(vector<string> params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	float first = context.pop_from_stack();
	if (first == 0) {
		throw DivisionByZero();
	}
	float second = context.pop_from_stack();
	float result = second / first;
	context.push_on_stack(result);
}


Division::~Division()
{
}
