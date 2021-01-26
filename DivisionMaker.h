#include "Division.h"

class DivisionMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Division();
    }
};
