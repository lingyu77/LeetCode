// 7 ms
class Solution {
    public boolean validPalindrome(String s) {
        for (int i = 0, j = s.length() - 1; i <= j; i++, j--) {
            if (s.charAt(i) != s.charAt(j)) {
                return isPalindrome(s.substring(i + 1, j + 1)) || isPalindrome(s.substring(i, j));
            }
        }
        return true;
    }
    
    private boolean isPalindrome(String s) {
        for (int i = 0, j = s.length() - 1; i <= j; i++, j--) {
            if (s.charAt(i) != s.charAt(j)) return false;
        }
        return true;
    }
}

/* Reference : 3 ms
class Solution {
    public boolean validPalindrome(String s) {
        if (s.length() < 3) {
            return true;
        }
        char[] chars = s.toCharArray();
        int i = 0;
        int j = chars.length - 1;
        int diffi = -1;
        int diffj = -1;
        while (i < j) {
            if (chars[i] != chars[j]) {
                if (diffi != -1) {
                    break;
                }
                diffi = i;
                diffj = j;
                i++;
                continue;
            }
            i++;
            j--;
        }
        if (i >= j) {
            return true;
        }
        i = diffi;
        j = diffj - 1;
        while (i < j) {
            if (chars[i] != chars[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
*/