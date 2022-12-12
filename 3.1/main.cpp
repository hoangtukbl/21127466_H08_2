// #pragma once
#include "office.h"
#include "worker.h"
#include "employee.h"
using namespace std;
int main(){
    worker man(2211,"Hoang TU",1,2,2002,"tpHCM" );
    cout<<man.getAddress()<<" " <<man.getDate() << " "<< man.getID() << " " << man.getName() << " "<< endl ;
    office man2(22,"Hoang",1,2,2022,"HN");
    cout<<man2.getAddress()<<" " <<man2.getDate() << " "<< man2.getID() << " " << man2.getName() << " "<< endl ;
    return 1;


}