#pragma once
#include "Operation.h"
class Minus :
	public Operation
{
public:
	Minus();
	void evaluate(const vector<string>&, Context &context);
	~Minus();
};

