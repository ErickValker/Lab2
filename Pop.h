#pragma once
#include "Operation.h"
class Pop :
	public Operation
{
public:
	Pop();
	void evaluate(const vector<string>&, Context &context);
	~Pop();
};

