// 140 ms
class Solution {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        
        return IntStream.range(0, nums.length)
                    .filter(n -> n % 2 == 0)
                    .map(i -> nums[i])
                    .sum();
    }
}