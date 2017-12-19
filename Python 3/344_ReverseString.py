class Solution:
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        length = len(s)
        listResult = list(s)

        for i in s:
            length -= 1
            listResult[length] = i
            # Python string is immutable and cannot be changed.
            # Use list to assign the value.

        return ''.join(listResult)

    def reverseString2(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s[::-1]