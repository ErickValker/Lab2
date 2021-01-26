#pragma once
#include "Operation.h"
#include "OperationMaker.h"
class Multiplication :
	public Operation
{
public:
	Multiplication();
	void evaluate(const vector<string>&, Context &context);
	~Multiplication();
};

