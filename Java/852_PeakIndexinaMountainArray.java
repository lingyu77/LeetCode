// 0 ms
class Solution {
    public int peakIndexInMountainArray(int[] A) {
        int length = A.length;
        for (int i = (length / 2), j = length; i < length && i >= 0;) {
            if (A[i + 1] < A[i] && A[i - 1] < A[i]) return i;
             
            if (A[i + 1] > A[i]) {
                i = (i + j) / 2;
             } else {
                j = i;
                i /= 2;
             }
         }
        
         return 0;
    }
}