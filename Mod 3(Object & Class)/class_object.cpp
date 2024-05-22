#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    char name[100];
    int roll;
    double cgpa;
}; // this is our class

int main()
{
    // a and b objects
    Students a, b;
    cin.getline(a.name, 100); // for taking full name
    cin >> a.roll >> a.cgpa;  // for string input we can do it directly

    getchar(); // for separating first data
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    // a.cgpa = 1.5;
    // a.roll = 20;
    // char temp[100] = {"Showrab"};
    // strcpy(a.name, temp);
    // we cannot input in string second time, thats y we created temp string and then copied the element using strcpy

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa;

    return 0;
};