#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0; // for counting the words
    while (ss >> word)
    {
        cout << word << endl; // for printing all words separatedly
        count++;              // for counting the words
    }
    cout << count;
    return 0;
}