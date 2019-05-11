// 0 ms
class Solution {
    public int maxSubArray(int[] A) {
        int max = Integer.MIN_VALUE;
        int sum = 0;

        for (int i = 0; i < A.length; i++) {
            sum = (sum < 0)? A[i] : sum + A[i];
            if (sum > max) max = sum;
        }

        return max;
    }
}