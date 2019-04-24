// 113 ms
class Solution {
    public int repeatedStringMatch(String A, String B) {
        StringBuilder repeating = new StringBuilder(A);
        int count = 1;
        while (repeating.length() < B.length()) {
            repeating.append(A);
            count++;
        }
        
        if (repeating.indexOf(B) != -1) return count;
        
        repeating.append(A);
        count++;
        if (repeating.indexOf(B) != -1) return count;
        else return (-1);
    }
}

/* 
Reference. 1 ms
class Solution {
    public int repeatedStringMatch(String A, String B) {
        if(A.equals(B)) {
            return 1;
        }
        
        StringBuilder str = new StringBuilder();
        int tLength = A.length() + B.length();
        
        while(str.length() < tLength) {
            if(str.lastIndexOf(B) > -1) {
                return str.length() / A.length();
            }
            str.append(A);
        }
        
        return str.lastIndexOf(B) > -1 ? str.length() / A.length(): -1;
    }
}
*/