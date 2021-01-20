#pragma once
#include "Operation.h"
#include <cmath>
class Sqrt :
	public Operation
{
public:
	Sqrt();
	void evaluate(const vector<string>&, Context &context);
	~Sqrt();
};

