#pragma once
#include "ContextExceptions.h"
class VariableNotFoundException :
	public ContextExceptions
{
public:
	VariableNotFoundException();
	~VariableNotFoundException();
	virtual const char* what() const throw()
	{
		return "Variable not found";
	}
};

