#pragma once
#include "Operation.h"
#include <cmath>
#include "OperationMaker.h"
class Sqrt :
	public Operation
{
public:
	Sqrt();
	void evaluate(const vector<string>&, Context &context);
	~Sqrt();
};

