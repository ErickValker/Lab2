#pragma once
#include "Operation.h"
#include <iostream>

using namespace std;

class Print :
	public Operation
{
public:
	Print();
	void evaluate(vector<string>, Context &context);
	~Print();
};

