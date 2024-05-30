#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss) // stringstream a & use korte hoy
{
    string new_word;
    if (ss >> new_word)
    {
        print(ss);
        cout << new_word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);

    return 0;
}