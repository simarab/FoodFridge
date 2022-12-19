/**
Name: Rabinovich Sima
BMCC ID: 24254674
Semester and class name: FALL2022 CSC211H 1701
Date of submission: Thursday, Dec 15th, 2022
Time stamp: 5:00PM
Instructor Name: Dr. Azhar
*/

#include <iostream>
#include "stock.h"
#include "Product.h"
#include <string>
#include <vector>

using namespace std;

void Stock :: Donate(string productName, int amount){
    for(int i=0; i<stock.size();i++){
        if(productName == stock[i].getProductName())
            stock[i].setAmount(amount+stock[i].getAmount());
    }
    cout << "Thank you for donating!" << endl;
}
void Stock:: Recieve(string productName){
    for(int i=0; i<stock.size();i++){
        if(productName == stock[i].getProductName())
            stock[i].setAmount(stock[i].getAmount()+1);
    }
}
void Stock:: Admin(string productName, int amount){
    for(int i=0; i<stock.size();i++){
        if(productName == stock[i].getProductName())
            stock[i].setAmount(amount);
    }
}
