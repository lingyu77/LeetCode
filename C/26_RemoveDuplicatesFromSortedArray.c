/*
26. Remove Duplicates from Sorted Array

Given a sorted array, remove the duplicates in-place such that each element 
appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the
 input array in-place with O(1) extra memory.

Example:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums 
being 1 and 2 respectively.
It doesn't matter what you leave beyond the new length.
*/
// 16 ms
int removeDuplicates(int* nums, int numsSize) {
    int i = 0, j = 0;
    
    for (j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i++] = nums[j];            
        }
    } 
    return (i + 1);
}

//Sample
int removeDuplicates2(int* nums, int numsSize) {
    int cnt = 0;
    for(int i=1;i<numsSize;i++){
        if(nums[i] == nums[i-1])
            cnt++;
        else
            nums[i-cnt] = nums[i];
    }
    return numsSize-cnt;
}
