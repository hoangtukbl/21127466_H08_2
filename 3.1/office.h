#pragma once
#include "employee.h"

class office : public employee
{
private:
    int workday;
    const int pay = 300000;
public:
    office();
    office(int, string, int,int,int, string);
    void setDay(int n);
    long salary();
    void output();
    void input();
};

