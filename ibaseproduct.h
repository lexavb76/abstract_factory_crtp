#ifndef IBASEPRODUCT_H
#define IBASEPRODUCT_H

class IBaseProduct
{
public:
    virtual ~IBaseProduct() {};
    virtual void who_is() = 0;
};

#endif // IBASEPRODUCT_H
