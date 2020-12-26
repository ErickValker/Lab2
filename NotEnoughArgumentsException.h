#pragma once
#include "WrongNumberOfArgumentsException.h"
class NotEnoughArgumentsException :
	public WrongNumberOfArgumentsException
{
public:
	NotEnoughArgumentsException();
	~NotEnoughArgumentsException();
	virtual const char* what() const throw()
	{
		return "Not enough arguments";
	}
};