/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output:  321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only hold integers within 
the 32-bit signed integer range. For the purpose of this problem, assume that 
your function returns 0 when the reversed integer overflows.
*/
int reverse(int x) {
    //32-bit signed integer range is -2,147,483,648(-2^31) to 2,147,483,647(2^31-1)
    int base = 0;
    int max = INT_MAX / 10;
    int min = INT_MIN / 10;

    while (x != 0)
    {
        if ((base > max) || (base < min))
        {
           return 0;       
        }
                 
        base = base * 10 + x % 10;     
        x /= 10;
    }
	
	return base;
}

int reverse2(int x) {
    long long val = 0;
	do 
	{
		val = val * 10 + x % 10;
		x /= 10;
	} while (x);
	
	return (val > INT_MAX || val < INT_MIN) ? 0 : val;
}
