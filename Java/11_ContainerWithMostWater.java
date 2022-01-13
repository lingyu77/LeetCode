class Solution {
    public int maxArea(int[] height) {
        int maxarea = 0;
        int left = 0;
        int right = height.length - 1;

        while (left < right) {
            maxarea = Math.max(maxarea,  Math.min(height[right], height[left]) * (right - left));

            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }

        return maxarea;
    }
}
