#include <stdio.h>

// Function to merge two halves
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for(i = 0; i < n1; i++)
        L[i] = a[l + i];
    for(j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    // Merge the temp arrays back into a[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] if any
    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[] if any
    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

// Recursive merge sort function
void mergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }
}

int main()
{
    int a[6] = {12, 5, 10, 9, 7, 6};
    int i;

    printf("Before Sorting: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    mergeSort(a, 0, 5);  // Sort the entire array

    printf("\nAfter Sorting: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
