#ifndef IFACTORY_H
#define IFACTORY_H

//#include "ibaseproduct.h"
template<typename Derived>
class IFactory
{
public:
    auto&& create_product_1() { return Derived::create_product_1(); };
    auto&& create_product_2() { return Derived::create_product_2(); };
};

#endif // IFACTORY_H
