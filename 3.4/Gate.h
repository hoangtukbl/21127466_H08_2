#pragma once
#include <iostream>
#include <vector>
#include "Prince.h"

using namespace std;

class Gate
{
private:
    
public:
    virtual void input();
    virtual bool pass(Prince &);
};
