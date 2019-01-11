class Solution {
    //1 ms
    public int singleNumber(int[] nums) {
        int result = 0; 
        for (int num:nums) result = result ^ num;
        return result;
    }

    //63 ms
    public int singleNumberStream(int[] nums) {
        return Arrays.stream(nums).reduce(0, (a, b) -> a ^ b);
    }
}