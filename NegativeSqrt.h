#pragma once
#include "MathsOperationException.h"
class NegativeSqrt :
	public MathsOperationException
{
public:
	NegativeSqrt();
	~NegativeSqrt();
	virtual const char* what() const throw()
	{
		return "Cannot take root of a negative number";
	}
};

