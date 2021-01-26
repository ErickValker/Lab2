#include "Factory.h"


Factory::Factory() {
}

void Factory::register_operation_by_name(const std::string &key, IOperationMaker *maker) {
    if (makers.find(key) != makers.end())
    {
        throw new std::exception();
    }
    makers[key] = maker;
}

Operation *Factory::get_operation_by_name(string operation_name) {
    /*if (operation_name.compare("+") == 0) {
        return new Plus;
    } else if (operation_name.compare("-") == 0) {
        return new Minus;
    } else if (operation_name.compare("PUSH") == 0) {
        return new Push;
    } else if (operation_name.compare("POP") == 0) {
        return new Pop;
    } else if (operation_name.compare("/") == 0) {
        return new Division;
    } else if (operation_name.compare("*") == 0) {
        return new Multiplication;
    } else if (operation_name.compare("SQRT") == 0) {
        return new Sqrt;
    } else if (operation_name.compare("DEFINE") == 0) {
        return new Define;
    } else if (operation_name.compare("PRINT") == 0) {
        return new Print;
    } else {
        throw WrongCommandNameException();
    }*/
    auto i = makers.find(operation_name);
    if (i == makers.end()){
        throw new std::exception();
    }
    IOperationMaker* maker = i->second;
    return maker->create();
}


Factory::~Factory() {
}
