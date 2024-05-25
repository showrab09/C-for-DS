#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    for (int x = 0; x < c; x++)
    {
        int n, t;
        cin >> n >> t;
        int num[n];

        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        int counter = 0;

        // Check all combinations of three distinct numbers
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (num[i] + num[j] + num[k] == t)
                    {
                        counter = 1;
                    }
                }
            }
        }

        if (counter == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
