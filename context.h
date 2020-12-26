#pragma once
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include "StackIsEmptyException.h"
#include "VariableNotFoundException.h"

using namespace std;

class Context
{
private:
	stack <float> values_stack;
	map<string, float> variables_value;
public:
	Context();
	void push_on_stack(float value);
	float pop_from_stack();
	void set_value_of_variable(string variable, float value);
	float get_value_of_variable(string variable);
	~Context();
};