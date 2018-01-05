/*
136. Single Number
Given an array of integers, every element appears twice except for one. 
Find that single one.

Note:
Your algorithm should have a linear runtime complexity. 
Could you implement it without using extra memory?
*/

int singleNumber(int* nums, int numsSize) {
    int i = 0;
    int result = nums[0];
    
    for (i = 1; i < numsSize; i++)
    {
        result = result ^ nums[i];
    }
    return result;
}
