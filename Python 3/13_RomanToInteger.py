class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        preNum = roman['M']
        result = 0

        for i in s:
            if preNum >= roman[i] :
                result = result + roman[i]
            else:
                result = result + roman[i] - 2 * preNum
            preNum = roman[i]

        return result