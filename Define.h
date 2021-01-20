#pragma once
#include "Operation.h"
#include <string>
class Define :
	public Operation
{
public:
	Define();
	void evaluate(const vector<string>&, Context &context);
	~Define();
};

