#include "Plus.h"



Plus::Plus()
{
}

void Plus::evaluate(const vector<string> &params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	float first_value = context.pop_from_stack();
	float second_value = context.pop_from_stack();
	float result = first_value + second_value;
	context.push_on_stack(result);
}


Plus::~Plus()
{
}
