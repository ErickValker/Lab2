#pragma once
#include "Operation.h"
#include <string>
class Define :
	public Operation
{
public:
	Define();
	void evaluate(vector<string>, Context &context);
	~Define();
};

