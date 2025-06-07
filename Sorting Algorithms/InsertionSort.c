#include <stdio.h>

int main()
{
    int a[6] = {12, 5, 10, 9, 7, 6};
    int i, j, key;

    printf("Before Sorting: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    // Insertion Sort logic
    for(i = 1; i < 6; i++)
    {
        key = a[i];
        j = i - 1;

        // Move elements of a[0..i-1] that are greater than key to one position ahead
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("\nAfter Sorting: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
