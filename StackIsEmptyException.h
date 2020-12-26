#pragma once

#include "ContextExceptions.h"

class StackIsEmptyException :
        public ContextExceptions {
public:
    StackIsEmptyException();

    ~StackIsEmptyException();

    virtual const char *what() const throw() {
        return "Stack is empty";
    }
};

