#include "Factory.h"

template<typename T>
class OperationMaker : public IOperationMaker
{
public:
    OperationMaker(const std::string& name) {
        Factory::Instance().register_operation_by_name(name, this);
    }

    virtual Operation * create() const {
        return new T();
    }
};