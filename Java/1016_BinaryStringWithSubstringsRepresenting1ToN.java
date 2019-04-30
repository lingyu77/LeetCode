// 0 ms
class Solution {
    public boolean queryString(String S, int N) {
        for (int i = 1; i <=N; i++) {
            String sub = Integer.toBinaryString(i);
            if (S.indexOf(sub) == -1) return false;
        }
        
        return true;
    }
}

/* Refeerence : 0 ms
class Solution {
    public boolean queryString(String S, int N) {
         for(int i=1; i<=N; i++){
            String tmp = Integer.toString(i, 2);
            if(!S.contains(tmp)){
                return false;
            }
        }
        return true;
    }
}
*/