#include <stdio.h>

int main()
{
    int a[100];
    int n, i, first;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Store the first element
    first = a[0];

    // Shift all elements to the left
    for(i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Put the first element at the end
    a[n - 1] = first;

    printf("Array after rotating left by one position: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
