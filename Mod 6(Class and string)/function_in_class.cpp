#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string name;
    int age;
    Students(string name, int age)
    {
        this->name = name;
        this->age = age;
    };
    void fun()
    {
        cout << "Heelooo boss" << endl;
    }
};

int main()
{
    Students showrab("Habib", 30);
    cout << showrab.name << "  " << showrab.age << endl;
    showrab.fun();

    return 0;
}