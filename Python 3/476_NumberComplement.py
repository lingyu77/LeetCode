class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        mask = (1 << num.bit_length())

        return (mask - 1) ^ num

    def findComplement2(self, num):
        """
        :type num: int
        :rtype: int
        """
        st=bin(num)
        lt=len(st)-2
        msk='1'*lt
        print(msk)
        msk=int(msk,2) # int(x, base=10)
        print(msk)
        return msk^num