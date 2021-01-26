#include "Print.h"

class PrintMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Print();
    }
};