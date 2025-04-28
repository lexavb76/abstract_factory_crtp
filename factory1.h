#ifndef FACTORY1_H
#define FACTORY1_H

#include "ibaseproduct.h"
#include "ifactory.h"

class Factory1 final  : public IFactory<Factory1>
{
public:
    IBaseProduct* create_product_1();
    IBaseProduct* create_product_2();
};

#endif // FACTORY1_H
