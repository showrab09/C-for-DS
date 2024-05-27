#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = {"Showrab"};
    // cout << s << endl;
    // cout << s.size() << endl;
    // cout << s.capacity() << endl; // capacity dynamically increases
    // s.clear(); //clear the string
    // cout << s<<endl;
    string s = {"Hello_world"};
    s.resize(5); // it can resize the actual string size
    cout << s << endl;
    s.resize(7, 'X'); // in extra space we are putting x
    cout << s;
    return 0;
}