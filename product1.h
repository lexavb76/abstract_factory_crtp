#ifndef PRODUCT1_H
#define PRODUCT1_H

#include "iproduct1.h"

class Product1 final : public IProduct1
{
public:
    void who_is() override;
};

#endif // PRODUCT1_H
