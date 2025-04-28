#ifndef PRODUCT2_H
#define PRODUCT2_H

#include "iproduct1.h"

class Product2  : public IProduct1
{
public:
    void who_is() override;
};

#endif // PRODUCT2_H
