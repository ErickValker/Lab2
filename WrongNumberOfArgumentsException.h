#pragma once
#include <exception>
class WrongNumberOfArgumentsException :
	public std::exception
{
public:
	WrongNumberOfArgumentsException();
	~WrongNumberOfArgumentsException();
};

