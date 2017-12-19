class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        result = []

        def isSelfDividingNumbers(number):
            tempNumber = number
            num = 0

            while (number != 0):
                num = number % 10

                if (num == 0):
                    return False
                elif ((tempNumber % num) != 0):
                    return False
                number //= 10 # This is one of the major changes between Python 2 and Python 3.
            return True

        for i in range(left, right + 1): # Python 3 range == Python 2 xrange
            if isSelfDividingNumbers(i):
                result.append(i)

        return result
