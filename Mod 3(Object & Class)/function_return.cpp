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
Students fun()
{
    Students rahim(12, 5, 3.45); // here Students is data type everywhere
    return rahim;
};

int main()
{
    Students ans = fun(); // students is data type
    cout << ans.roll << " " << ans.cls << " " << ans.cgpa;
    return 0;
}