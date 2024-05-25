#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    // sort(num, num + n); //ascending order// starting pointer of a and ending pointer of a
    sort(num, num + n, greater<int>()); // descending order

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "  ";
    }

    return 0;
}