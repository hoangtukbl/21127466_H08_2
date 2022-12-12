#include "Power.h"

void Power::input(){
    cout<< "input the power need to pass: ";
    int temp;
    cin>>temp;
    this->minPower = temp;
}

bool Power::pass(Prince &a){
    if(a.getPower() >= minPower){
        a.setPower(a.getPower() - this->minPower);
        return true;
    }
    else    
        return false;
}