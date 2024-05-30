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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].marks > arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
            else if (arr[i].marks == arr[j].marks) // jodi marks same hoy tahole age jar beshi she age jabe
            {
                if (arr[i].age < arr[j].age)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].marks << endl;
    }
    return 0;
}
