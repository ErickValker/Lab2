#pragma once
#include "Context.h"
#include <vector>
#include <iostream>
#include "TooManyArgumentsException.h"
#include "NotEnoughArgumentsException.h"
#include "DivisionByZero.h"
#include "NegativeSqrt.h"
#include "WrongCommandNameException.h"
#include "WrongValueException.h"

using namespace std;

class Operation
{
public:
	Operation();
	virtual void evaluate(const vector<string>&, Context &context) = 0;
	~Operation();
};