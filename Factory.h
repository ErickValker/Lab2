#pragma once

#include "IOperationMaker.h"
#include "OperationMaker.h"
#include <iostream>
#include <string>
#include "Operation.h"
#include "Plus.h"
#include "Minus.h"
#include "Push.h"
#include "Pop.h"
#include "Division.h"
#include "Multiplication.h"
#include "Sqrt.h"
#include "Define.h"
#include "Print.h"

class Factory {
private:
    Factory();

    Factory(Factory const &) = delete;

    Factory &operator=(Factory const &) = delete;

    ~Factory();

public:
    std::map<std::string, IOperationMaker *> makers;

    void register_operation_by_name(const std::string &key, IOperationMaker *maker);

    static Factory &Instance() {
        static Factory singleton;
        return singleton;
    };


    Operation *get_operation_by_name(string);
};