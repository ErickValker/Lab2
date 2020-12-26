#pragma once
#include <exception>
class WrongValueException :
	public std::exception
{
public:
	WrongValueException();
	~WrongValueException();
	virtual const char* what() const throw()
	{
		return "Wrong value";
	}
};

