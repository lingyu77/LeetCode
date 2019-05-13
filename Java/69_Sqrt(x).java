// 2ms
class Solution {
    public int mySqrt(int x) {
        long left = 1;
        long right = x;
        
        while (left <= right) {
            long mid = (left + right) >>> 1; // long forvoid mid*mid from overflow
            
            if ((mid * mid) == x) {
                return (int) mid;
            } else if ((mid * mid) < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return (int) (left - 1);
    }        
}


/* Reference: 1 ms
class Solution {
    public int mySqrt(int x) {
        /*
        sqrt(x) = y
        x =y^2
        if there is a line from 0 to X we need to find the sqrt(x) which might be either in the first half of that line or the mid of the line or the second half of that line. Thats why using binary search
        
        we are using mid = start+(end-start)/2 in order to avoid integer overflow
        */
        
        if (x == 0) return 0;
	int start = 1, end = x;
	while (start < end) { 
		int mid = start + (end - start) / 2;
		if (mid <= x / mid && (mid + 1) > x / (mid + 1))// Found the result
			return mid; 
		else if (mid > x / mid)// Keep checking the left part
			end = mid-1;
		else
			start = mid + 1;// Keep checking the right part
	}
	return start;
    }
}
*/