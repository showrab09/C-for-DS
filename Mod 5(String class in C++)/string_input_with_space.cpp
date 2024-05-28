#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); // int er por getline kaj kore na karon enter ke execute kore tai int er por enter ke ignore korte hoy
    // othoba getchar()
    string s, w;
    getline(cin, s);
    getline(cin, w);
    cout << n << endl
         << s << endl
         << w << endl;
    return 0;
}