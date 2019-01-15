// 3ms
class Solution {
    public void moveZeroes(int[] nums) {
        int length = 0;
        for (int i : nums) {
            if (i != 0) nums[length++] = i;
        }
        while (length < nums.length) nums[length++] = 0;
    }
}