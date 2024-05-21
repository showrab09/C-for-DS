#include <bits/stdc++.h>
using namespace std;

int *fun()
{

    int *num = new int[5]; // static array delete hoye jay(function return hole data gone).. dynamic array delete hoy na
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    return num;
}
int main()
{
    int *a = fun();
    cout << a << endl;    // address of first array element
    cout << *a << endl;   // first array element
    cout << a[1] << endl; // specific array element
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}