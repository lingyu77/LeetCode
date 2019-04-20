// 1 ms
class Solution {
    public String reverseOnlyLetters(String S) {
           StringBuilder stringBuilder = new StringBuilder();
        
           for (int i = 0, j = S.length() - 1; i < S.length();) {
               if (!Character.isLetter(S.charAt(i))) {
                   stringBuilder.append(S.charAt(i++));
               } else {
                   if (j >= 0 && Character.isLetter(S.charAt(j))) {
                       stringBuilder.append(S.charAt(j));
                       i++;
                   } 
                   j--;
               }
           }
        
           return stringBuilder.toString();
    }
}

/*
Reference : Reverse Pointer : O(N)
class Solution {
    public String reverseOnlyLetters(String S) {
        StringBuilder ans = new StringBuilder();
        int j = S.length() - 1;
        for (int i = 0; i < S.length(); ++i) {
            if (Character.isLetter(S.charAt(i))) {
                while (!Character.isLetter(S.charAt(j)))
                    j--;
                ans.append(S.charAt(j--));
            } else {
                ans.append(S.charAt(i));
            }
        }

        return ans.toString();
    }
}
*/