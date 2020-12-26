#pragma once
#include <exception>
class ContextExceptions :
	public std::exception
{
public:
	ContextExceptions();
	~ContextExceptions();
};

