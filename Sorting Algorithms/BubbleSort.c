#include <stdio.h>

int main()
{
    int a[6] = {12, 5, 10, 9, 7, 6};
    int temp;
    int i, j;

    printf("Before Sorting: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    // Bubble Sort Logic
    for(i = 0; i < 6 - 1; i++) // n-1 passes
    {
        for(j = 0; j < 6 - i - 1; j++) // pairwise comparison
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nAfter Sorting: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
