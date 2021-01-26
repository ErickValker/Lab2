#include "Pop.h"

class PopMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Pop();
    }
};
