#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int *b = new int[3]; // creating same array to copy elemeent
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i]; // copying elements to b array
    }
    delete[] a; // deleted a array

    a = new int[5]; // initializing previous a array again
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i]; // copying b array elemts to a array
    }
    a[4] = 500;   // new value
    a[3] = 10000; // new value
    delete[] b;   // deleted b array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " "; // final array
    }

    return 0;
}