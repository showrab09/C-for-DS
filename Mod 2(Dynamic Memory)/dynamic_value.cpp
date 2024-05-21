#include <bits/stdc++.h>
using namespace std;
int main()
{
    // first int is static and new int is dynamic
    int *a = new int;
    // with new, we are creating a dynamic int address and storing it in pointer a
    *a = 100;          // dereferenceing
    cout << a << endl; // a is the address of 100 value
    cout << *a;        // *a is the value of a address
    return 0;
}