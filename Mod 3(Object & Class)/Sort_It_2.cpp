#include <bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *num = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    };
    sort(num, num + n, greater<int>());
    return num;
};
int main()
{
    int n;
    cin >> n;
    int *p = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}