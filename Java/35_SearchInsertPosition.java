// 0 ms
class Solution {
    public int searchInsert(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            
            if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        } 
        
        return left;
    }
}

/* Reference : 0 ms
class Solution {
public int searchInsert(int[] nums, int target) {
    for (int i = 0; i < nums.length; i++){
        
        if(nums[i] == target || nums[i] > target)
            return i;
        }
        return nums.length;
    }
}
*/

/* 0 ms
class Solution {
public int searchInsert(int[] nums, int target) {
        int index = Arrays.binarySearch(nums, target);
        return (index > -1)? index : Math.abs(index + 1);
    }
}
*/