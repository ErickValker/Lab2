#pragma once
#include "Operation.h"
class Minus :
	public Operation
{
public:
	Minus();
	void evaluate(vector<string>, Context &context);
	~Minus();
};

