#include "Push.h"

class PushMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Push();
    }
};