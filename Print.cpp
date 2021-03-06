#include "Print.h"



Print::Print()
{
}

void Print::evaluate(const vector<string> &params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	float value = context.pop_from_stack();
	cout << value << endl;
	context.push_on_stack(value);
}

static OperationMaker<Print> maker("PRINT");

Print::~Print()
{
}
