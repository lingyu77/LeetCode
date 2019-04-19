// 2 ms
class Solution {
    public boolean buddyStrings(String A, String B) {
        char tempA = '1', tempB = '2', tempC = '3', tempD = '4';
        int diff = 0;
        
        if (A.length() != B.length()) return false;
        
        // A is euqal to B 
        if (A.equals(B)) {
            Set<Character> set = new HashSet();
            for (char c : A.toCharArray())
                set.add(c);
            if (set.size() < B.length()) return true;
            return false;
        }
        
        // A is not qequal to B
        for (int i = 0; i < A.length(); i++) {
            if (A.charAt(i) != B.charAt(i)) {
                
                if (diff == 2) {
                    diff++;
                    break;
                }
                
                if (diff == 0) {
                    tempA = A.charAt(i);
                    tempB = B.charAt(i);
                    diff++;
                } else if (diff == 1) {
                    tempC = A.charAt(i);
                    tempD = B.charAt(i);
                    diff++;
                } 
            }
        }

        if (diff == 2 && tempA == tempD && tempB == tempC)
            return true;
        return false;
    }
}