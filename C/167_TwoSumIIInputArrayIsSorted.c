/*
167. Two Sum II - Input array is sorted
Given an array of integers that is already sorted in ascending order, find two 
numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add 
 to the target, where index1 must be less than index2. Please note that your 
 returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not 
use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
// 0 ms
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i = 0, j = numbersSize - 1;
    int sum = 0;
    int* returnArrary = (int*) malloc(sizeof(int) * 2);
    
    memset(returnArrary, 0, sizeof(int) * 2);
    
    while (i < j)
    {
        sum = number[i] + number[j];
        
        if (sum == target)
        {
            break;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }        
    }
    
    *returnSize = 2;
    returnArrary[0] = i + 1;
    returnArrary[1] = j + 1;
    
    return returnArrary;
}
