#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    // range based for loop and ispunct is built in function for checking punctuation
    for (char &c : s)
    {
        if (ispunct(c))
        {
            c = ' ';
        }
    }

    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word)
    {
        count++;
    }
    cout << count;
    return 0;
}