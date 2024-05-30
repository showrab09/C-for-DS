#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    char c;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].age >> arr[i].c >> arr[i].marks;
    }
    Student mn;

    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (mn.marks > arr[i].marks)
        {
            mn = arr[i]; // stroring whole object in mn object
        }
    }
    Student mx;         // creating object so can we show output of whole details
    mx.marks = INT_MIN; // initially putting it in the min value
    for (int i = 0; i < n; i++)
    {
        if (mx.marks < arr[i].marks)
        {
            mx = arr[i];
        }
    }
    cout << "Lowest: " << mn.name << " " << mn.age << " " << mn.c << " " << mn.marks << endl;
    cout << "Highest: " << mx.name << " " << mx.age << " " << mx.c << " " << mx.marks;
    return 0;
}
// input
// 6
// Yasa 15 D 100
// Yamin 12 A 99
// Showrab 25 A 90
// Shumon 30 D 70
// Kayes 20 D 20
// Tashfin 10 s 15