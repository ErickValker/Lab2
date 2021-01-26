#include "Define.h"

class DefineMaker : public IOperationMaker
{
public:
    virtual Operation * create() const
    {
        return new Define();
    }
};