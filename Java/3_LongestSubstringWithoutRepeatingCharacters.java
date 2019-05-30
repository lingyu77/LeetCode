// 8 ms
class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> map = new HashMap<>();
        int maxLength = 0;
        int lastStart = 0;
        int length = s.length();
        
        for (int i = 0;  i < length; i++) {
            
           if (map.containsKey(s.charAt(i)))
               lastStart = Math.max(lastStart, map.get(s.charAt(i)) + 1);
            
           maxLength = Math.max(maxLength, i - lastStart + 1);
           map.put(s.charAt(i), i);
        }
        
        return maxLength;
    }
}