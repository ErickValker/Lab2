#pragma once
#include "Operation.h"
#include <iostream>

using namespace std;

class Print :
	public Operation
{
public:
	Print();
	void evaluate(const vector<string>&, Context &context);
	~Print();
};

