#ifndef PRODUCT12_H
#define PRODUCT12_H

#include "iproduct2.h"

class Product12 final : public IProduct2
{
public:
    Product12();
    void who_is() override;
};

#endif // PRODUCT12_H
