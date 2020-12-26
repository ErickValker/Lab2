#pragma once
#include "Operation.h"
class Push :
	public Operation
{
public:
	Push();
	void evaluate(vector<string>, Context &context);
	~Push();
};

