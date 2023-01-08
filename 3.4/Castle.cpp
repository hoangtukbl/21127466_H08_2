#include "Castle.h"

void Castle::input(){
    cout<<"input number of gate: ";
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int type;
        Gate* p = nullptr;
        cout << "input type of Gate (1 = Business; 2 = Academic; 3 = Power) : ";
        cin >> type;
        switch (type)
        {
        case 1:
            p = new Business;
            p->input();
            challenges.push_back(p);
            break;
        case 2:
            p = new Academic;
            p->input();
            challenges.push_back(p);
            break;
        case 3:
            p = new Power;
            p->input();
            challenges.push_back(p);
            break;
        default:
            p = new Gate;
            challenges.push_back(p);
        }
    }
}

bool Castle::winGame(Prince& a){
    for (int i = challenges.begin(); i < challenges.end(); i++)
    {
        if (!challenges[i]->pass(a)){
            cout << "the hero is dead";
            return false;
        }
    }
    return true;
}