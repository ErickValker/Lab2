#include "Plus.h"

class PlusMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Plus();
    }
};
