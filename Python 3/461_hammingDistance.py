class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        distance = 0
        value = x ^ y

        while (value != 0):
            distance += 1 # Python doesn't support ++
            value &= value - 1

        return distance

    def hammingDistance2(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        return bin(x ^ y).count('1')

# Test Case
x = int(input("Please enter the first integer: "))
y = int(input("Please enter the second integer: "))

test = Solution()
result = test.hammingDistance2(x, y)
print('The Hamming Distance is ' + str(result))