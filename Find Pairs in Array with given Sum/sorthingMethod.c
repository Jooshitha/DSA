#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int cmpfunc (const void *a, const void *b)
{
  return (*(int *) a - *(int *) b);
}

 
// Function to find a pair in an array with a given sum using sorting
void findPair(int nums[], int n, int target)
{
    // sort the array in ascending order
    qsort (nums, n, sizeof (int), cmpfunc);
 
    // maintain two indices pointing to endpoints of the array
    int low = 0;
    int high = n - 1;
    int flag = 0;
    // reduce the search space `nums[low…high]` at each iteration of the loop
 
    // loop till the search space is exhausted
    while (low < high)
    {
        // sum found
        if (nums[low] + nums[high] == target)
        {
            printf("Pair found (%d, %d) \n",nums[low] ,nums[high]);
            flag=1;
            
        }
        
 
        // increment `low` index if the total is less than the desired sum;
        // decrement `high` index if the total is more than the desired sum
        (nums[low] + nums[high] < target)? low++: high--;
    }
    if(flag==0)
    {
        printf("Pair not found");
    }
 
    // we reach here if the pair is not found
    
}
 
int main()
{
    int nums[] = {5, 2, 3, 4, 1, 6, 7};
    int target = 7;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);
 
    return 0;
}