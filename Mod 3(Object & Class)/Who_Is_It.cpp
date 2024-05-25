#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    int roll;
    char name[100];
    char sec;
    int marks;
};
int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {

        Students a, b, c;
        cin >> a.roll >> a.name >> a.sec >> a.marks;
        cin >> b.roll >> b.name >> b.sec >> b.marks;
        cin >> c.roll >> c.name >> c.sec >> c.marks;
        if (a.marks > b.marks && a.marks > c.marks)
        {
            cout << a.roll << " " << a.name << " " << a.sec << " " << a.marks << endl;
        }
        else if (b.marks > a.marks && b.marks > c.marks)
        {
            cout << b.roll << " " << b.name << " " << b.sec << " " << b.marks << endl;
        }
        else if (c.marks > a.marks && c.marks > b.marks)
        {
            cout << c.roll << " " << c.name << " " << c.sec << " " << c.marks << endl;
        }
        else if (a.marks == b.marks == c.marks)
        {
            if (a.roll < b.roll && a.roll < c.roll)
            {
                cout << a.roll << " " << a.name << " " << a.sec << " " << a.marks << endl;
            }
            else if (b.roll < a.roll && b.roll < c.roll)
            {
                cout << b.roll << " " << b.name << " " << b.sec << " " << b.marks << endl;
            }
            else if (c.roll < a.roll && c.roll < b.roll)
            {
                cout << c.roll << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
        }
        else if (a.marks == b.marks)
        {
            if (a.roll < b.roll)
            {
                cout << a.roll << " " << a.name << " " << a.sec << " " << a.marks << endl;
            }
            else
            {
                cout << b.roll << " " << b.name << " " << b.sec << " " << b.marks << endl;
            }
        }
        else if (a.marks == c.marks)
        {
            if (a.roll < c.roll)
            {
                cout << a.roll << " " << a.name << " " << a.sec << " " << a.marks << endl;
            }
            else
            {
                cout << c.roll << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
        }
        else if (b.marks == c.marks)
        {
            if (b.roll < c.roll)
            {
                cout << b.roll << " " << b.name << " " << b.sec << " " << b.marks << endl;
            }
            else
            {
                cout << c.roll << " " << c.name << " " << c.sec << " " << c.marks << endl;
            }
        }
    }
    return 0;
}