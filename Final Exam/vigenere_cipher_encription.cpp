#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k;
    cin >> s >> k;
    int size = s.size();
    k.append(s);
    k.resize(size);
    for (int i = 0; i < size; i++)
    {
        if ((s[i] - 'a' + k[i] - 'a') > 25)
        {
            int mod = ((s[i] - 'a' + k[i] - 'a') % 26);
            cout << char(mod + 97);
        }
        else
        {
            cout << char((s[i] + k[i]) - 'a');
        }
    }

    return 0;
}