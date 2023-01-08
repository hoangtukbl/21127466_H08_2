#pragma once
#include "Gate.h"
#include "Prince.h"

class Power:public Gate
{
private:
    int minPower;
public:
    void input();
    bool pass(Prince &);
};