#pragma once
#include <fstream>
#include "context.h"

using namespace std;

class Calculator{
private:
    Context context;
public:
	Calculator();

    void calculate(istream&);

	~Calculator();
};

