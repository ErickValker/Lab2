#pragma once
#include "Operation.h"
class Plus : 
	public Operation
{
public:
	Plus();
	void evaluate(vector<string>, Context &context);
	~Plus();
};

