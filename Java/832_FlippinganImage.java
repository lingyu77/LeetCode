// 0 ms
class Solution {
    public int[][] flipAndInvertImage(int[][] A) {
        
        for (int i = 0; i < A.length; i++) {
            int[] temp = new int[A[i].length];
            
            for (int j = 0, k = A[i].length - 1; k >=0; k--, j++) {
                temp[j] = A[i][k] == 1? 0 : 1;
            }
            
            A[i] = temp;
        }
        
        return A;
    }
}