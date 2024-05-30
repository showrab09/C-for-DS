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
    getchar();
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].age >> arr[i].c >> arr[i].marks;
        getchar(); // to delete privious line enter
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].c << " " << arr[i].marks << endl;
    }
    return 0;
}
// input
// 4
// Yasa Rahman
//  15 D 100
// Yamin Rahman
// 12 A 99
// Showrab Bin Habib
// 25 A 90
// Shumon Jayed
// 30 D 99