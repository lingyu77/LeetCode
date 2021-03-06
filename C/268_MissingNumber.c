/*
268. Missing Number
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find 
the one that is missing from the array.

Example 1

Input: [3,0,1]
Output: 2
Example 2

Input: [9,6,4,2,3,5,7,0,1]
Output: 8

Note:
Your algorithm should run in linear runtime complexity. Could you implement it 
using only constant extra space complexity?
*/
//8 ms
int missingNumber(int* nums, int numsSize) {
    int sumAll = (numsSize * ( numsSize - 1)) / 2;
    int i = 0, sum = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    return (sumAll - sum);
}
