#include "Academic.h"

void Academic::input(){
    cout<< "input the min IQ: ";
    int temp;
    cin>>temp;
    this->minIQ = temp;

}

bool Academic::pass(Prince &a){
    if(a.getIQ() >= minIQ){
        return true;
    }
    else    
        return false;
}