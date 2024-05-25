#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {
        char n[100005];
        int j = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] != ' ')
            {
                n[j++] = s[i];
            }
        }
        n[j] = '\0';
        int length = strlen(n);

        sort(n, n + length);
        cout << n;

        cout << endl;
    }

    return 0;
}