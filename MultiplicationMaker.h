#include "Multiplication.h"

class MultiplicationMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Multiplication();
    }
};
