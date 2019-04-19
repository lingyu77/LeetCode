// 5 ms
class Solution {
    public boolean isPalindrome(String s) {
    
        if (s.isEmpty()) return true;
        
        char[] c = s.toLowerCase().toCharArray();
        int length = s.length();
        
        for (int i = 0, j = length - 1; i < j; i++, j--) {
            
            while ( i < length && !Character.isLetterOrDigit(c[i])) i++;
            while ( j >= 0 && !Character.isLetterOrDigit(c[j])) j--;
            
            if (i < j && c[i] != c[j]) return false;
        }
        return true;    
    }
}

/*
// 1 ms (Reference)
class Solution {
    private static char[] m = new char[128];
    static {
        for(int i = 0; i < 10; i ++) {
            m[i + '0'] = (char)(i+1);
        }
        
        for(int i = 0; i < 26; i ++) {
            m[i + 'a'] = m[i + 'A'] = (char)(i + 11);
        }
    }
    public boolean isPalindrome(String s) {
        if(s.length() == 0) return true;
        int l = 0, r = s.length() - 1;
        char[] chs = s.toCharArray();
        while(l <= r) {
            if(m[chs[l]] != 0 && m[chs[r]] != 0) {
                if(m[chs[l]] != m[chs[r]]) return false;
                else {
                    l ++;
                    r --;
                }
            }
            else {
                if(m[chs[l]] == 0) l ++;
                if(m[chs[r]] == 0) r --;
            }
        }
        return true;
    }
}

*/