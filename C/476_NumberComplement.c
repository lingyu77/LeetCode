/*
476. Number Complement
Given a positive integer, output its complement number. The complement strategy 
is to flip the bits of its binary representation.

Note:
The given integer is guaranteed to fit within the range of a 32-bit signed integer.
You could assume no leading zero bit in the integer¡¦s binary representation.
Example 1:
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and 
its complement is 010. So you need to output 2.
Example 2:
Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its
 complement is 0. So you need to output 0.
*/
// 3 ms
int findComplement(int num) {
    unsigned int base = 1;
    
    while (base <= num)
    {
        base <<= 1;      
    }   
    return (base - 1) ^ num;
}

// 0ms Reference
int findComplement2(int num) {
    int b, i = 1,sum = 0;
	while (num){
		b = num % 2;
		if (b == 1)b = 0;
		else b = 1;
		b *= i;
		i *= 2;
		num /= 2;
		sum += b;
	}
	return sum;
}
