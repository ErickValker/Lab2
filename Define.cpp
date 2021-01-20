#include "Define.h"


Define::Define() {
}

void Define::evaluate(const vector<string> &params, Context &context) {
    if (params.size() > 2) {
        throw TooManyArgumentsException();
    } else if (params.size() < 2) {
        throw NotEnoughArgumentsException();
    }

    std::string::size_type sz;
    float value;

    try {
        value = stof(params[1], &sz);
    }
    catch (const std::invalid_argument &ia) {
        throw WrongValueException();
    }

    if (sz != params[1].size()) {
        throw WrongValueException();
    }

    string variable = params[0];

    context.set_value_of_variable(variable, value);
}


Define::~Define() {
}
