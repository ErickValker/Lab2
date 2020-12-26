#pragma once
#include "Operation.h"
class Division :
	public Operation
{
public:
	Division();
	void evaluate(vector<string>, Context &context);
	~Division();
};

