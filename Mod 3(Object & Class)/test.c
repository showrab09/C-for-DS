#include <stdio.h>

int main()
{
    int numbers[4];

    // Reading four numbers from the input
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Variable to store the result
    int found = 0;

    // Check all combinations of three numbers
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            for (int k = j + 1; k < 4; k++)
            {
                if (numbers[i] + numbers[j] + numbers[k] == 8)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
                break;
        }
        if (found)
            break;
    }

    // Output the result
    if (found)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
