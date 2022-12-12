#include "office.h"

office::office(){
    
}

office::office(int ID, string NAME, int DAY, int MONTH, int YEAR , string ADDRESS){
    setAddress(ADDRESS);
    setDate(DAY,MONTH,YEAR);
    setID(ID);
    setName(NAME);
}

// int office::getPay(){
//     return this->pay;
// }

void office::output(){
    employee::output();
    cout << "Work day: "<<this->workday << endl;
    cout << "Salary: "<<this->salary()<<endl;
}

long office::salary(){
    return this->pay*workday;
}

void office::setDay(int n){
    this->workday = n;
}

void office::input(){
    employee::input();
    int temp;
    cout << "nhap vao so ngay lam viec: "<<endl;
    cin >>temp;
    this->setDay(temp);
}