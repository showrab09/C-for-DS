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
        // our public var and passed var is same so computer
        //  confused kontar value koi rakhbe. tai this keyword diye mention kora hoyeche
        // (*this).roll ekhane dereference kore access kora hoyeche, cuz this ekta pointer

    }; // this is a constructor
};

int main()
{
    Students rahim(12, 5, 3.45); // calling the constructor
    Students karim(1, 5, 3.99);  // calling the constructor
    cout << "roll : " << rahim.roll << " class : " << rahim.cls << " " << "CGPA : " << rahim.cgpa << endl;
    cout << "roll : " << karim.roll << " class : " << karim.cls << " " << "CGPA : " << karim.cgpa;

    return 0;
}