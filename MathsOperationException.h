#pragma once
#include <exception>
class MathsOperationException :
	public std::exception
{
public:
	MathsOperationException();
	~MathsOperationException();
};

