#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[0] << endl;          // normal array index access
    cout << s.at(0) << endl;       // built in function for access
    cout << s.back() << s.front(); // first element and last element
    return 0;
}