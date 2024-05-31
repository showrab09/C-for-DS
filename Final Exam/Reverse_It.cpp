#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cl;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cl >> arr[i].sec >> arr[i].id;
    }
    int half = floor(n / 2);
    int lastcounter = n - 1;
    for (int i = 0; i < half; i++)
    {
        char temp = arr[i].sec;
        arr[i].sec = arr[lastcounter].sec;
        arr[lastcounter].sec = temp;
        lastcounter--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cl << " " << arr[i].sec << " " << arr[i].id << endl;
    }

    return 0;
}