#include "client.h"
#include "factory1.h"
#include "factory2.h"

int main()
{
    Client<Factory1> c1{};
    Client<Factory2> c2{};
    c1.produce_prod_1();
    c1.produce_prod_1();
    c1.produce_prod_1();
    c1.print_prod_1();
    c1.produce_prod_2();
    c1.produce_prod_2();
    c1.print_prod_2();
    c2.produce_prod_1();
    c2.print_prod_1();
    c2.produce_prod_2();
    c2.print_prod_2();
    c1 += c1;
    return 0;
}
