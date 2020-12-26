#pragma once
#include "MathsOperationException.h"
class DivisionByZero :
	public MathsOperationException
{
public:
	DivisionByZero();
	~DivisionByZero();
	virtual const char* what() const throw()
	{
		return "Cannot be divided by zero";
	}
};

