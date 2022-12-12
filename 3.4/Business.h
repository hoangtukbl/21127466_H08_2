#include "Gate.h"
#include "Prince.h"

class Business:public Gate
{
private:
    int number;
    int price;
public:
    void input();
    bool pass(Prince &);
};

