
#include "Operation.h"

class IOperationMaker
{
public:
    virtual Operation * create() const = 0;
    virtual ~IOperationMaker() = default;
};
