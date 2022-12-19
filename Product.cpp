/**
Name: Rabinovich Sima
BMCC ID: 24254674
Semester and class name: FALL2022 CSC211H 1701
Date of submission: Thursday, Dec 15th, 2022
Time stamp: 5:00PM
Instructor Name: Dr. Azhar
*/

#include <iostream>
#include "Product.h"
#include <vector>

using namespace std;

Product :: Product(){
  productName = "";
  //expiration = 0;
  //type = "";
  amount = 0;
}
/**
Product :: Product(string name, int exp, string t, int num){
  productName = name;
  expiration = exp;
  type = t;
  amount = num;
}

enum type {dairy, produce, pantry};

void Product :: setExpiration(int exp){
  expiration = exp;
}
void Product :: setType(string t){
  type = t;
}
int Product :: getExpiration() const{
  return expiration;
}
string Product :: getType() const{
  return type;
}
*/
void Product :: setProductName(string name){
  productName = name;
}
void Product :: setAmount(int num){
  amount = num;
}
string Product :: getProductName() const{
  return productName;
}

int Product :: getAmount() const{
  return amount;
}
/**
Product(string, int, type, int);
*/
void Product :: status(){
  cout << productName <<  "\n\tRemaining amount: " << amount << endl;
}
void Product :: printProduct(){


}
