#pragma once
#include "Operation.h"
#include "OperationMaker.h"
class Division :
	public Operation
{
public:
	Division();
	void evaluate(const vector<string>&, Context &context);
	~Division();
};

