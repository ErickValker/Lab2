#include "Parser.h"



Parser::Parser()
{

}

vector<string> Parser::get_params(string cur_string)
{
	vector<string> result;
	if (cur_string[0] == '#' || cur_string.size() == 0) {
		return result;
	}

	std::string delimiter = " ";
	size_t pos = 0;
	std::string token;
	while ((pos = cur_string.find(delimiter)) != std::string::npos) {
		token = cur_string.substr(0, pos);
		if (token.length() != 0) {
			result.push_back(token);
		}
		cur_string.erase(0, pos + delimiter.length());
	}
	token = cur_string;
	if (token.length() != 0) {
		result.push_back(token);
	}
	return result;
}


Parser::~Parser()
{
}
