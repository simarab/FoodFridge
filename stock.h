#ifndef STOCK_H
#define STOCK_H

#include <stdio.h>
#include <string>
#include <vector>
#include "Product.h"

using namespace std;
class Stock
{
private:
    vector <Product> stock;
public:
    void Donate(string, int);
    void Recieve(string);
    void Admin(string, int);
};

#endif // STOCK_H
