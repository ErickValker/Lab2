#include "Sqrt.h"



Sqrt::Sqrt()
{
}

void Sqrt::evaluate(vector<string> params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	float value = context.pop_from_stack();
	if (value < 0) {
		throw NegativeSqrt();
	}
	float result = sqrt(value);
	context.push_on_stack(result);
}


Sqrt::~Sqrt()
{
}
