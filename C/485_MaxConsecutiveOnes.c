/*
485. Max Consecutive Ones
Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
Note:

The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000
*/
//64 ms
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i = 0, count = 0, max = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            if (count > max)
            {
                max = count;          
            }         
        }
        else
        {
            count = 0;   
        }
    }
    return max;
}

//Sample
int findMaxConsecutiveOnes2(int* nums, int numsSize) {
    int i;
    int ans = 0;
    int tmp = 0;
    if(numsSize==1) {
        return nums[0];
    }
    for(i=0;i<numsSize;i++) {
        if(nums[i]==0) {
            if(tmp>ans) ans = tmp;
            tmp = 0;
        }
        else {
            tmp++;
            
        }
    }
    if(tmp>ans) return tmp;
    else return ans;
}
