#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    int roll;
    string name;
    Students(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    };
};

int main()
{
    Students *rakib = new Students(3, "Rakib Hasan");
    Students *habib = new Students(1, "Habibur Rahman");
    // first way
    // rakib->roll = habib->roll;
    // rakib->name = habib->name;
    // second way
    *rakib = *habib;
    delete habib;

    cout << rakib->roll << " " << rakib->name << endl;

    return 0;
}