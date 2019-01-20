// 0ms
class Solution {
    public int missingNumber(int[] nums) {
        int length = nums.length;
        int sumAll = (length * (length + 1)) / 2;
        int sum = 0;
        for (int i : nums) sum += i; 
        return (sumAll - sum);
    }
}