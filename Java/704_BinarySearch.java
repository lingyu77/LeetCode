// 0 ms
class Solution {
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } else {
                if (nums[mid] < target) left = mid + 1;
                else right = mid - 1;                
            }
        }
        
        return (-1);
    }
} 

/* Solution 2: 0 ms : Arrays API
class Solution {
    public int search(int[] nums, int target) {
        int index = Arrays.binarySearch(nums, target);
        return (index > -1)? index : -1;
    }
}
*/