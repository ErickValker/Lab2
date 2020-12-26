#include "context.h"

Context::Context() {
}

void Context::push_on_stack(float value) {
    values_stack.push(value);
}

float Context::pop_from_stack() {
    if (values_stack.empty()) {
        throw StackIsEmptyException();
    }
    float result = values_stack.top();
    values_stack.pop();
    return result;
}

void Context::set_value_of_variable(string variable, float value) {
    variables_value[variable] = value;
}

float Context::get_value_of_variable(string variable) {

    if (variables_value.find(variable) == variables_value.end()) {
        throw VariableNotFoundException();
    } else {
        return variables_value[variable];
    }
}


Context::~Context() {
}
