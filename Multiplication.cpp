#include "Multiplication.h"



Multiplication::Multiplication()
{
}

void Multiplication::evaluate(const vector<string> &params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	float first = context.pop_from_stack();
	float second = context.pop_from_stack();
	float result = first * second;
	context.push_on_stack(result);
}


Multiplication::~Multiplication()
{
}
