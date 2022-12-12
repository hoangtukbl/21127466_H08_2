#pragma once
// #ifndef _WORKER_H_
// #define _WORKER_H_H

#include "employee.h"

class worker : public employee
{
private:
    int item;
    const int pay = 20000;
public:
    worker();
    worker(int, string, int,int,int, string);
    void setItem(int n);
    long salary();
    void output();
    void input();
};

// #endif