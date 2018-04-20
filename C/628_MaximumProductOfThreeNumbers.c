/*
628. Maximum Product of Three Numbers
Given an integer array, find three numbers whose product is maximum and output 
the maximum product.

Example 1:
Input: [1,2,3]
Output: 6
Example 2:
Input: [1,2,3,4]
Output: 24
Note:
The length of the given array will be in range [3,104] and all elements are in 
the range [-1000, 1000].
Multiplication of any three numbers in the input won't exceed the range of 
32-bit signed integer.
*/
// 32 ms
int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int maximumProduct(int* nums, int numsSize) {
    int i = 0;
    int maxProCandidate1 = 0;
    int maxProCandidate2 = 0;

    qsort (nums, numsSize, sizeof(int), compare);

    maxProCandidate1 = nums[numsSize - 1] * nums[numsSize - 2] * nums[numsSize - 3];
    maxProCandidate2 = nums[numsSize - 1] * nums[0] * nums[1];    

    return (maxProCandidate1 > maxProCandidate2)? maxProCandidate1 : maxProCandidate2;    
}

// Reference : 12 ms
int maximumProduct2(int* nums, int numsSize) {
    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int max_product;
    for(int index = 0;index<numsSize; index++)
    {
        if(nums[index] >max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = nums[index];   
        }
        else if(nums[index] <=max1 && nums[index] >max2)
        {
            max3 = max2;
            max2 = nums[index];
        }
        else if(nums[index] <=max1 && nums[index] <= max2 && nums[index] >max3)
        {
            max3 = nums[index];
        }
        if(nums[index] <min1)
        {
            min2 = min1;
            min1 = nums[index];
        }
        else if(nums[index]>= min1 && nums[index]<min2)
        {
            min2 = nums[index];
        }
    }
    max_product = (min1*min2*max1)>(max1*max2*max3)?(min1*min2*max1):(max1*max2*max3);
    return max_product;  
}
