#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for string iterator
    string s = {"Hello"};
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}