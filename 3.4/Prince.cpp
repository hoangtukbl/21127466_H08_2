#include "Prince.h"

Prince::Prince(){
    this->power = 0;
    this->iQ = 0;
    this->money = 0;
}
void Prince::setIQ(int i){
    this->iQ = i;
}
void Prince::setMoney(int m){
    this->money = m;
}
void Prince::setPower(int p){
    this->power = p;
}

Prince::Prince(int i,int m, int p){
    setIQ(i);
    setMoney(m);
    setPower(p);
}

int Prince::getIQ(){
    return this->iQ;
}
int Prince::getMoney(){
    return this->money;
}
int Prince::getPower(){
    return this->power;
}
