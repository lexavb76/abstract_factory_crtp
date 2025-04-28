#ifndef CLIENT_H
#define CLIENT_H

#include "ibaseproduct.h"
#include <iostream>
#include <memory>
#include <vector>

template<typename Factory>
class Client
{
    Factory factory;
    using IProd = std::unique_ptr<IBaseProduct>;
    std::vector<IProd> vp1;
    std::vector<IProd> vp2;

public:
#if 1
    friend Client &operator+=(Client &one, Client &) //Restricted template expansion (Barton-Nackman Trick with in-class defined friend)
    {
        std::cout << "Client::operator+=" << std::endl;
        return one;
    }
#endif
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

#if 1
template<typename T>
Client<T> &operator+=(Client<T> &one, Client<T> &)
{
    std::cout << "::operator+=" << std::endl;
    return one;
}
#endif

#endif // CLIENT_H
