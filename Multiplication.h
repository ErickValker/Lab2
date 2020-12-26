#pragma once
#include "Operation.h"
class Multiplication :
	public Operation
{
public:
	Multiplication();
	void evaluate(vector<string>, Context &context);
	~Multiplication();
};

