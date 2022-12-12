#include "employee.h"
#include "worker.h"
#include "office.h"
#include <vector>

class company
{
private:
    string name;
    vector <employee*> a;
public:
    company(/* args */);
    void inputAll();
    long sumSalary();
    void outputAll();
    void biggestSalaries();
    ~company();
};
