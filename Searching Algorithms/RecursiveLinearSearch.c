#include<stdio.h>

int LinearSearch(int arr[], int index, int item)
{
    if(arr[index] == item)
        return index;
    else if (index == -1)
        return -1;
    
    LinearSearch(arr, index - 1, item);
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};

   
    int len = sizeof(arr)/sizeof(arr[0]);

    int item = 30;
    
    int index = LinearSearch(arr, len - 1, item);

    if(index >= 0)
        printf("Item found at %d index", index);
    else
        printf("Item not found");
        
    return 0;
}