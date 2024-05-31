#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cl;
    char sec;
    int id;
    int math;
    int eng;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cl >> arr[i].sec >> arr[i].id >> arr[i].math >> arr[i].eng;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].eng < arr[j].eng) // checking english marks
            {
                swap(arr[i], arr[j]);
            }
            else if (arr[i].eng == arr[j].eng) // if english marks are same
            {
                if (arr[i].math < arr[j].math) // then check math marks
                {
                    swap(arr[i], arr[j]);
                }
                else if (arr[i].math == arr[j].math) // if math marks are also same
                {
                    if (arr[i].id > arr[j].id) // check their id
                    {
                        swap(arr[i], arr[j]);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cl << " " << arr[i].sec << " " << arr[i].id << " " << arr[i].math << " " << arr[i].eng << endl;
    }

    return 0;
}