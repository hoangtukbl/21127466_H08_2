#pragma once
#include <vector>
#include "Gate.h"
#include "Prince.h"
#include "Academic.h"
#include "Power.h"
#include "Business.h"

using namespace std;
class Castle
{
private:
    vector <Gate*> challenges;
public:
    void input();
    bool winGame(Prince &);
};
