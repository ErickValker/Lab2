#pragma once
#include "Operation.h"
class Plus : 
	public Operation
{
public:
	Plus();
	void evaluate(const vector<string>&, Context &context);
	~Plus();
};

