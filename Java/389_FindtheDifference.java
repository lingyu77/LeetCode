// 1 ms
class Solution {
    public char findTheDifference(String s, String t) {
        char ans = t.charAt(s.length());
        char[] sc = s.toCharArray();
        char[] tc = t.toCharArray();
        
        for (int i = 0; i < s.length(); i++) {
            ans ^= sc[i];
            ans ^= tc[i];
        }
        return ans;
    }
}

/* Reference : 0 ms
class Solution {
    public char findTheDifference(String s, String t) {
        char[] c1 = s.toCharArray();
        char[] c2 = t.toCharArray();
        int res = c2[c1.length];
        for(int i=0; i<c1.length;i++){
            res -= c1[i];
            res += c2[i];
        }        
        return (char)res;
    }
}
*/