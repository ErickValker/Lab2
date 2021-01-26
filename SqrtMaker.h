#include "Sqrt.h"

class SqrtMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Sqrt();
    }
};