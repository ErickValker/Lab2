#pragma once
#include "Operation.h"
#include "OperationMaker.h"
class Push :
	public Operation
{
public:
	Push();
	void evaluate(const vector<string>&, Context &context);
	~Push();
};

