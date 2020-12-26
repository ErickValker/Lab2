#pragma once
#include <exception>
class WrongCommandNameException :
	public std::exception
{
public:
	WrongCommandNameException();
	~WrongCommandNameException();
	virtual const char* what() const throw()
	{
		return "Wrong command name";
	}
};

