#pragma once
#include "WrongNumberOfArgumentsException.h"
class TooManyArgumentsException :
	public WrongNumberOfArgumentsException
{
public:
	TooManyArgumentsException();
	~TooManyArgumentsException();
	virtual const char* what() const throw()
	{
		return "Too many arguments";
	}
};

