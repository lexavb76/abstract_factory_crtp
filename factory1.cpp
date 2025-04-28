#include "factory1.h"
#include "product1.h"
#include "product2.h"
#include <iostream>

IBaseProduct* Factory1::create_product_1()
{
    std::cout << "Factory_1: Product_1" << std::endl;
    return new Product1{};
}

IBaseProduct* Factory1::create_product_2()
{
    std::cout << "Factory_1: Product_2" << std::endl;
    return new Product2{};
}
