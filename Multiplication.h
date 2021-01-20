#pragma once
#include "Operation.h"
class Multiplication :
	public Operation
{
public:
	Multiplication();
	void evaluate(const vector<string>&, Context &context);
	~Multiplication();
};

