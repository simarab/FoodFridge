#ifndef PRODUCT_H
#define PRODUCT_H

/**
Name: Rabinovich Sima
BMCC ID: 24254674
Semester and class name: FALL2022 CSC211H 1701
Date of submission: Thursday, Dec 15th, 2022
Time stamp: 5:00PM
Instructor Name: Dr. Azhar
*/

#include <stdio.h>
#include <string>

using namespace std;

class Product{
  private:
    string productName;
    //int expiration;
    //string type;
    int amount;
  public:
    Product();
    //Product(string, int, string, int);
    //void setExpiration(int);
    void setProductName(string);
    //void setType(string);
    void setAmount(int);
    //int getExpiration() const;
    string getProductName() const;
    //string getType() const;
    int getAmount() const;
    void status();
    void printProduct();
};
#endif
