// 2 ms
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        int index = 0;

        for (int num : nums) {
            int complement = target - num;
            
            if (map.containsKey(complement) && map.get(complement) != index)
               return new int[]{map.get(complement), index};
            else
               map.put(num, index++); 
        }
        
        throw new IllegalArgumentException("No solution!");
    }
}