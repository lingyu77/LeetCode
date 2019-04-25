// 2 ms
class Solution {
    public int[] diStringMatch(String S) {
        int length = S.length();
        int[] output = new int[length + 1];
        int low = 0;
        int high = length;
        int i = 0;
        
        for (char c : S.toCharArray())
            output[i++] = c == 'I'? low++ : high--;
        
        output[i] = low;
        return output;
    }
}