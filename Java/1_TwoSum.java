class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        int index = 0;
        for(int i : nums) {
            map.put(i, index++);
        } 
        index = 0;
        for(int i : nums) {
            int complement = target - i;
            if (map.containsKey(complement) && map.get(complement) != index)
                return new int[]{index, map.get(complement)};
            else
                index++;
        }
        throw new IllegalArgumentException("No solution!");
    }
}