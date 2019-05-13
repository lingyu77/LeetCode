// 2 ms
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> nums1Set = new HashSet<>();
        Set<Integer> intersection = new HashSet<>();
        
        for (int num : nums1) nums1Set.add(num);
        
        for (int num : nums2)
            if (nums1Set.contains(num)) intersection.add(num);
        
        int[] ans = new int[intersection.size()];
        int i = 0;
        
        for (Integer element : intersection) 
            ans[i++] = element;
        
        return ans;
    }
}