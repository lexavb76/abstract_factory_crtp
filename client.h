#ifndef CLIENT_H
#define CLIENT_H

#include "ibaseproduct.h"
#include <vector>
#include <memory>

template<typename Factory>
class Client
{
    Factory factory;
    using IProd = std::unique_ptr<IBaseProduct>;
    std::vector<IProd> vp1;
    std::vector<IProd> vp2;

public:
    void produce_prod_1()
    {
        vp1.push_back(static_cast<IProd>(factory.create_product_1()));
    }

    void produce_prod_2()
    {
        vp1.push_back(static_cast<IProd>(factory.create_product_2()));
    }

    void print_prod_1()
    {
        for (auto &&prod : vp1) {
            prod->who_is();
        }
    }

    void print_prod_2()
    {
        for (auto &&prod : vp1) {
            prod->who_is();
        }
    }

};

#endif // CLIENT_H
