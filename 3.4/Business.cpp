#include "Business.h"

void Business::input(){
    cout<<"input number of obj: ";
    int temp;
    cin>>temp;
    this->number = temp;
    cout<<"input the price: ";
    cin>>temp;
    this->price=temp;
}

bool Business::pass(Prince &a){
    long temp = this->number*this->price;
    if(temp <= a.getMoney()){
        a.setMoney(a.getMoney()-temp);
        return true;
    }
    else
        return false;
}