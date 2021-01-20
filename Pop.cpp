#include "Pop.h"



Pop::Pop()
{
}

void Pop::evaluate(const vector<string> &params, Context &context)
{
	if (params.size() != 0) {
		throw TooManyArgumentsException();
	}
	context.pop_from_stack();
}


Pop::~Pop()
{
}
