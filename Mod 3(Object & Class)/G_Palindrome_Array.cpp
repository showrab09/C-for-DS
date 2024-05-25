#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // size of array
    scanf("%d", &n);

    int arr[n];
    // taking input for array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // making it reverse
    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // printing output for array
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}