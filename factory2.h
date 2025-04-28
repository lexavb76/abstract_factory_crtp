#ifndef FACTORY2_H
#define FACTORY2_H

#include "ibaseproduct.h"
#include "ifactory.h"

class Factory2 final : public IFactory<Factory2>
{
public:
    IBaseProduct* create_product_1();
    IBaseProduct* create_product_2();
};

#endif // FACTORY2_H
