// 3 ms
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Map<Integer, Integer> nums1Map = new HashMap<>();
        List<Integer> intersection = new ArrayList<>();
        
        for (int num : nums1) nums1Map.put(num, nums1Map.getOrDefault(num, 0) + 1);
        
        for (int num : nums2) {
            if (nums1Map.containsKey(num)) {
                intersection.add(num);
                
                if (nums1Map.get(num) == 1) {
                    nums1Map.remove(num);
                }
                else {
                    nums1Map.put(num, nums1Map.get(num) - 1);
                }
            }
        }
    
        int[] ans = new int[intersection.size()];
        int i = 0;
        
        for (Integer element : intersection) 
            ans[i++] = element;
        
        return ans;        
    }
}

/* Reference :  1 ms
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int lenA = nums1.length, lenB = nums2.length;
        int[] temp = new int[Math.min(lenA, lenB)];
        int idx1 = 0, idx2 = 0;
        int index = 0;
        while(idx1 < lenA && idx2 < lenB){
            int val1 = nums1[idx1];
            int val2 = nums2[idx2];
            if(val1 < val2){
                idx1++;
            }else if(val1 == val2){
                temp[index++] = val1; 
                idx1++;
                idx2++;
            } else{
                idx2++;
            }
        }
        // here index will be the len.
        return Arrays.copyOf(temp, index);
    }
}
*/