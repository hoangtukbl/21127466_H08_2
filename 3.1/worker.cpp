#include "worker.h"

worker::worker(){

}

worker::worker(int ID, string NAME , int DAY, int MONTH, int YEAR  , string ADDRESS){
    setAddress(ADDRESS);
    setDate(DAY,MONTH,YEAR);
    setID(ID);
    setName(NAME);
}

long worker::salary(){
    return this->pay*item;
}

void worker::output(){
    employee::output();
    cout << "Item: "<<this->item << endl;
    cout << "Salary: "<<this->salary()<<endl;
}

void worker::setItem(int n){
    this->item = n;
}

void worker::input(){
    employee::input();
    int n;
    cout << "nhap so item lam duoc trong thang: "<<endl;
    cin >> n;
    this->setItem(n);
}
