// 1 ms
class Solution {
    public String reverseStr(String s, int k) {
        char[] letters = s.toCharArray();
        int length = s.length();
        
        for (int i = 0; i < length; i += 2 * k) {
            int start = i;
            int end = ((i + k) > (length - 1))? (length - 1) : (i + k - 1);

            //swap
            while (start < end) {
                char temp = letters[start];
                letters[start] = letters[end];
                letters[end] = temp;
                start++;
                end--;
            }
        }
        
        return new String(letters);
    }
}