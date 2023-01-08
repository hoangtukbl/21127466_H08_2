#pragma once
#include "Gate.h"
#include "Prince.h"

class Business:public Gate
{
private:
    int number;
    int price;
public:
    Business();
    void input();
    bool pass(Prince &);
};

