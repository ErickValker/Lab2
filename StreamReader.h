#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class StreamReader
{
private:
	istream &input;
	string cur_line;
public:
	explicit StreamReader(std::istream &);
	bool has_next_line();
	string next_line();
	~StreamReader();
};