class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = 0
        for i in nums:
            result ^= i
        return result

    def singleNumber2(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        # 2∗(a+b+c)−(a+a+b+b+c)=c
        return 2 * sum(set(nums)) - sum(nums)