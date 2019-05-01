// 37 ms
class Solution {
    public boolean checkRecord(String s) {
        long absent = s.chars().filter(ch -> ch == 'A').count();
        if (absent > 1) return false;
        if (s.indexOf("LLL") != -1) return false;
        return true;
    }
}

/* Reference : 0 ms
class Solution {
    public boolean checkRecord(String s) {
        if(s == null || s.equals("")) {
            return false;
        }
        int lCount=0, aCount=0;
        for(int i=0; i < s.length(); i++) {
            if(s.charAt(i) == 'A') {
                aCount++;
                lCount = 0;
            } else if(s.charAt(i) == 'L') {
                lCount++;
            } else {
                lCount = 0;
            }
            if(aCount > 1 || lCount > 2) {
                return false;
            }
        }
        return true;
        
    }
}
*/