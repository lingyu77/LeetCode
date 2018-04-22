/*
442. Find All Duplicates in an Array
Given an array of integers, 1 <= a[i] <= n (n = size of array), some elements 
appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
*/
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int* returnArray = (int*) malloc(sizeof(int) * (numsSize / 2));
     
    *returnSize = 0;
    memset(returnArray, 0, sizeof(int) * (numsSize / 2));   

    for (i = 0; i < numsSize; i++)
    {
        if (nums[abs(nums[i]) - 1] >= 0)
        {
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];                      
        }
        else
        {            
            returnArray[(*returnSize)++] = abs(nums[i]); // Duplicate items
        }
    }

    return returnArray;
}

// Reference
int* findDuplicates2(int* nums, int numsSize, int* returnSize) {
    int *result = NULL, i, j = 0;
    
    if (!nums || numsSize < 2) {
        *returnSize = 0;
        return result;
    }
    
    result = (int *)calloc(numsSize, sizeof(int));
    for (i = 0; i < numsSize; ++i) {
        result[nums[i] - 1]++;
    }
    
    for (i = 0; i < numsSize; ++i) {
        if (result[i] > 1) {
            result[j++] = i + 1;
        }
    }
    
    *returnSize = j;
    return result;
}
