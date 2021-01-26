#pragma once
#include "Operation.h"
#include <string>
#include "OperationMaker.h"
class Define :
	public Operation
{
public:
	Define();
	void evaluate(const vector<string>&, Context &context);
	~Define();
};

