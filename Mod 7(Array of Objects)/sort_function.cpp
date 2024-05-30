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
bool cmp(Student a, Student b) // our own method for sorting
{
    // if (a.marks > b.marks)
    //     return true; // if false they will swap
    // else
    //     return false;
    // shortcut
    // return a.marks >= b.marks;
    // more shortcut
    if (a.marks == b.marks)
        return a.age < b.age;
    else
        return a.marks < b.marks;
};

int main()
{
    int n;
    cin >> n;
    getchar();
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].age >> arr[i].c >> arr[i].marks;
        getchar(); // to delete privious line enter
    }
    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].c << " " << arr[i].marks << endl;
    }
    return 0;
}
