// 3 ms
class Solution {
    public List<String> commonChars(String[] A) {
        List<String> ans = new ArrayList<>();
        final int SIZE = 26;
        int[] letter = new int[SIZE];
        
        // Base
        for (char c : A[0].toCharArray()) letter[c - 'a']++;
               
        // Loop all strings in A and compare elements
        for (int i = 1; i < A.length; i++) {
            int[] temp = new int[SIZE];
            
            for (char c : A[i].toCharArray()) temp[c - 'a']++;
                  
            for (int j = 0; j < SIZE; j++)
                if (letter[j] > temp[j]) letter[j] = temp[j];
        }
        
        for (int k = 0; k < SIZE; k++)
            while (letter[k]-- > 0) ans.add(String.valueOf((char)('a' + k)));
        
        return ans;
    }
}

/* Reference : 1ms
class Solution {
    public List<String> commonChars(String[] A) {
        List<String> res = new ArrayList<>();
        if (A == null || A.length == 0) {
            return res;
        }
        int[] arr = new int[26];
        for (int i = 0; i < A[0].length(); i ++) {
            arr[A[0].charAt(i) - 'a'] ++;
        }
        for (int i = 1; i < A.length; i ++) {
            countAndUpdate(A[i], arr);
        }
        for (int i = 0; i < 26; i ++) {
            if (arr[i] > 0) {
                for (int j = 0; j < arr[i]; j ++) {
                    res.add((char)(i + 'a') + "");
                }
            }
        }
        return res;
    }
    private void countAndUpdate(String s, int[] ori) {
        int[] arr = new int[26];
        for (int i = 0; i < s.length(); i ++) {
            arr[s.charAt(i) - 'a'] ++;
        }
        for (int i = 0; i < 26; i++) {
            ori[i] = Math.min(ori[i], arr[i]);
        }
    }
}
*/