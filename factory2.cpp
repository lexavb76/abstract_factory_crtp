#include "factory2.h"
#include "product12.h"
#include "product22.h"
#include <iostream>

IBaseProduct* Factory2::create_product_1()
{
    std::cout << "Factory_2: Product_1" << std::endl;
    return new Product12;
}

IBaseProduct* Factory2::create_product_2()
{
    std::cout << "Factory_2: Product_2" << std::endl;
    return new Product22;
}
