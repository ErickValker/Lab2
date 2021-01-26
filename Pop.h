#pragma once
#include "Operation.h"
#include "OperationMaker.h"
class Pop :
	public Operation
{
public:
	Pop();
	void evaluate(const vector<string>&, Context &context);
	~Pop();
};

