// 6 ms
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> ans = new ArrayList<Integer>();
        
        for (int i = 0; i < nums.length; i++) {
            int value = Math.abs(nums[i]) - 1;

            if (nums[value] > 0)
                nums[value] = -nums[value];
        }
        
        for (int j = 0; j < nums.length; j++) {
            if (nums[j] > 0) 
                ans.add(j + 1);
        }
        
        return ans;
    }
}