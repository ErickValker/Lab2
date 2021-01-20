#include "Push.h"



Push::Push()
{
}

void Push::evaluate(const vector<string> &params, Context &context)
{
	if (params.size() > 1) {
		throw TooManyArgumentsException();
	}
	else if (params.size() < 1) {
		throw NotEnoughArgumentsException();
	}
	try{
		size_t sz;
		float value = stof(params[0], &sz);
		if (sz != params[0].size()) {
			throw WrongValueException();
		}
		context.push_on_stack(value);
	}
	catch (const std::invalid_argument& ia) {
		float value = context.get_value_of_variable(params[0]);
		context.push_on_stack(value);
	}
}

Push::~Push()
{
	std::cout << "operation push" << std::endl;
}
