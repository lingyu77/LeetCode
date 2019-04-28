// 2 ms
class Solution {
    public int[] sortArrayByParityII(int[] A) {
        int i = 0;
        int j = 1;
        int length = A.length;
        
        while (i < length && j < length) {
            while (i < length && A[i] % 2 == 0) i += 2;
            while (j < length && A[j] % 2 != 0) j += 2;
            
            if (i < length && j < length)
                swap (A, i, j);
        }
        
        return A;
    }
    
    private void swap(int[] A, int i, int j) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

/* Reference : 1 ms
class Solution {
    public int[] sortArrayByParityII(int[] A) {
        int oddPos = 1;
        for (int i = 0; i < A.length; i += 2) {
            if (0 != (1 & A[i])) {
                while (0 != (1 & A[oddPos])) oddPos += 2;
                int tmp = A[i];
                A[i] = A[oddPos];
                A[oddPos] = tmp;
            }
        }
        return A;
    }
}
*/