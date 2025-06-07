#include <stdio.h>

int main()
{
    int a[100], temp[100];
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reverse logic
    for(int i = 0; i < n; i++)
    {
        temp[i] = a[n - 1 - i];
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}
