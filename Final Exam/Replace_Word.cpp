#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, x;
        cin >> s >> x;
        int pos = 0;
        int xsize = x.size();
        int not_found = -1;

        while ((pos = s.find(x, pos)) != not_found)
        {
            s.replace(pos, xsize, "#");
            pos++;
        }

        cout << s << endl;
    }

    return 0;
}
