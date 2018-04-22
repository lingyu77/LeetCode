/*
747. Largest Number At Least Twice of Others
In a given integer array nums, there is always exactly one largest element.

Find whether the largest element in the array is at least twice as much as every
 other number in the array.

If it is, return the index of the largest element, otherwise return -1.

Example 1:

Input: nums = [3, 6, 1, 0]
Output: 1
Explanation: 6 is the largest integer, and for every other number in the array x,
6 is more than twice as big as x.  The index of value 6 is 1, so we return 1.
 

Example 2:

Input: nums = [1, 2, 3, 4]
Output: -1
Explanation: 4 isn't at least as big as twice the value of 3, so we return -1.
 

Note:

nums will have a length in the range [1, 50].
Every nums[i] will be an integer in the range [0, 99].
*/
// 20 ms
int dominantIndex(int* nums, int numsSize) {
    int max = 0, secMax = 0;
    int i = 0, indexMax = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            secMax = max;
            max = nums[i];
            indexMax = i;            
        }
        else if (nums[i] > secMax && nums[i] != max)
        {
            secMax = nums[i];     
        }       
    }
    
    if (max >= (secMax * 2))
    {
        return indexMax;        
    }

    return (-1);
}

// Reference
int dominantIndex2(int* nums, int numsSize) {
    if (numsSize == 0){
        return -1;
    }
    int h1 = 0;
    int h2 = 0;
    int ret = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] > h1){
            h2 = h1;
            h1 = nums[i];
            ret = i;
        }
        else if (nums[i] > h2){
            h2 = nums[i];
        }
    }
    return h1 >= 2* h2 ? ret : -1;
}
