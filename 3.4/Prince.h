#pragma once

#include <iostream>
using namespace std;
class Prince
{
private:
    int money;
    int iQ;
    int power;
public:
    Prince();
    Prince(int,int,int);
    void input();
    void output();
    int getMoney();
    int getIQ();
    int getPower();
    void setMoney(int );
    void setPower(int );
    void setIQ(int );
    ~Prince();
};


