// 1 ms
class Solution {
    public int arrangeCoins(int n) {
       /*
        n = (x + 1) * x / 2
        x2 + x = 2n
        x2 + x + 1/4 - 1/4 = 2n
        (x + 1/2)2 = 2n + 1 / 4
        (x + 1/2)2 = (8n + 1) / 4
        x + 1/2 = sqrt(8n + 1) / 2
        x = (sqrt(8n + 1) / 2) - (1 / 2)
        x = (sqrt(8n + 1) - 1) / 2
       */
       return (int)(1.0 / 2.0 * ( Math.sqrt(8.0 * n + 1.0) - 1.0));
    }
}

/* Reference: 1 ms . Binary Search
class Solution {
    public int arrangeCoins(int n) {
        if (n <= 1)
            return n;
        
        long left = 1;
        long right = n;
        
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long sum = (mid + 1) * mid / 2;
            
            if (sum == n) {
                return (int) mid;
            } else if (sum < n) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return ((left + 1) * left / 2) > n? (int) (left -1) : (int) left;
    }
}
*/