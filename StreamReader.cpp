#include "StreamReader.h"


StreamReader::StreamReader(std::istream &in) :input(in) {

}

bool StreamReader::has_next_line()
{
	if (getline(input, cur_line)) {
		return true;
	}
	return false;
}

string StreamReader::next_line() {
	return cur_line;
}

StreamReader::~StreamReader()
{
}
