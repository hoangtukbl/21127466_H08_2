#include "employee.h"

employee::employee(){
    setAddress("");
    setDate(0,0,0);
    setID(0);
    setName("");
}
void employee::setAddress(string n){
    this->address = n;
}
void employee::setDate(int a, int b, int c){
    this->day = a;
    this->month = b;
    this->year = c;
}
void employee::setID(int n){
    this->id = n;
}
void employee::setName(string n){
    this->name = n;
}

employee::employee(int ID, string NAME , int DAY, int MONTH, int YEAR , string ADDRESS){
    setAddress(ADDRESS);
    setDate(DAY,MONTH,YEAR);
    setID(ID);
    setName(NAME);
}

int employee::getID(){
    return this->id;
}
string employee::getName(){
    return this->name;
}
string employee::getAddress(){
    return this->address;
}
int employee::getDate(){
    return this->day;
}

long employee::salary(){
    return 0;
}

void employee::output(){
    cout << "Id: "<<this->getID()<<endl;
    cout << "Name: "<<this->getName()<<endl;
    cout << "Hire date: "<<this->day << "/"<<this->month << "/" << this->year << endl;
    cout << "Address: "<<this->getAddress()<<endl;
}

void employee::input(){
    int temp1,temp2,temp3;
    cout << "nhap lan luot id, ngay thang lam viec , ten , dia chi: "<<endl;
    cin >> temp1;
    setID(temp1);
    cin >> temp1>>temp2>>temp3;
    setDate(temp1,temp2,temp3);
    cin.ignore();
    string temp;
    getline(cin,temp);
    setName(temp);
    getline(cin,temp);
    setAddress(temp);
    
}