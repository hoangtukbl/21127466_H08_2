#include "company.h"

void company::inputAll(){
    int n;
    int type;
    employee* p;
    cout<<"nhap so luong nhan vien: ";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cout << "Nhap thong tin nhan vien thu " << i << endl;
        cout << "Loai nhan vien (1: Office; 2: Worker): ";
        cin >> type;
        
        p = NULL;
        if (type == 1 )
            p = new office;
        if (type == 2)
            p = new worker;

        p->input();
        a.push_back(p);
    }
}

void company::outputAll(){
    for (int i = a.begin() ; i <= a.end() ; i++)
        a[i]->output();
}

long company::sumSalary(){
    long  sum;
    for(int i = 0 ; i < a.size() ; i++){
        sum+=a[i]->salary();
    }
    return sum;
}

void company::biggestSalaries(){
    long temp = a.front()->salary();
    for (int i = a.begin() ; i <= a.end() ; i++)
        if (a[i]->salary() > temp)
            temp = a[i]->salary();
    for (int i = a.begin() ; i <= a.end() ; i++)
        if (a[i]->salary() == temp)
            a[i]->output();
}