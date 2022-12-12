#include "Gate.h"
#include "Prince.h"

class Academic:public Gate
{
private:
    int minIQ;
public:
    void input();
    bool pass(Prince &);
};

