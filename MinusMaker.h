#include "Minus.h"

class MinusMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Minus();
    }
};