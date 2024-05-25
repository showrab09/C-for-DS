#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    int roll;
    int cls;
    double cgpa;

    Students(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    };
};
Students *fun()
{
    Students *karim = new Students(1, 11, 3.08);
    return karim;
}

int main()
{
    Students *ans = fun();
    cout << ans->roll << " " << ans->cls << "  " << ans->cgpa << endl; // pointer ke dereference kore access korte hoy (*ans).roll
    delete ans;                                                        // here we are deleting the data willingly

    cout << ans->roll << " " << ans->cls << "  " << ans->cgpa;
    return 0;
}
// we wanted to pass objects pointer but it was deleted from fun function thats why we need dynamic object