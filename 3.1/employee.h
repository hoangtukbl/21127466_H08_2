#pragma once

// #ifndef _EMPLOYEE_H_
// #define _EMPLOYEE_H_H
#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    int id;
    string name;
    int day;
    int month;
    int year;
    string address;

public:
    employee();
    void setID(int );
    void setName(string);
    void setDate(int,int,int );
    void setAddress(string);
    employee(int, string, int,int ,int, string);
    int getID();
    string getName();
    int getDate();
    string getAddress();
    virtual void output();
    virtual long salary();
    virtual void input();
    
};




// #endif