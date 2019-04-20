// 2ms
class Solution {
    public String addBinary(String a, String b) {
        int indexA = a.length() - 1;
        int indexB = b.length() - 1;
        int carry = 0;
        StringBuilder ans = new StringBuilder();
        
        if (a.isEmpty()) return b;
        if (b.isEmpty()) return a;
        
        while (indexA >= 0 || indexB >= 0 || carry == 1) {
               int tempA = indexA >= 0? a.charAt(indexA) - '0' : 0;
               int tempB = indexB >= 0? b.charAt(indexB) - '0' : 0;
            
               ans.append((tempA + tempB + carry) % 2);
               carry = (tempA + tempB + carry) / 2;
               indexA--;
               indexB--;
        }
        return ans.reverse().toString();
    }
}