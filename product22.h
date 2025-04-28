#ifndef PRODUCT22_H
#define PRODUCT22_H

#include "iproduct2.h"

class Product22 final : public IProduct2
{
public:
    Product22();
    void who_is() override;
};

#endif // PRODUCT22_H
