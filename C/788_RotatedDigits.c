/*
788. Rotated Digits
X is a good number if after rotating each digit individually by 180 degrees, 
we get a valid number that is different from X.  Each digit must be rotated - 
we cannot choose to leave it alone.

A number is valid if each digit remains a digit after rotation. 0, 1, and 8 
rotate to themselves; 2 and 5 rotate to each other; 6 and 9 rotate to each 
other, and the rest of the numbers do not rotate to any other number and 
become invalid.

Now given a positive number N, how many numbers X from 1 to N are good?

Example:
Input: 10
Output: 4
Explanation: 
There are four good numbers in the range [1, 10] : 2, 5, 6, 9.
Note that 1 and 10 are not good numbers, since they remain unchanged 
after rotating.

Note: N  will be in range [1, 10000].
*/
#define SAME     0 // 0, 1, 8 
#define VALID    1 // 2, 5, 6, 9
#define INVALID  2 // 3, 4, 7 
int rotatedDigits(int N) {
    int number[] = {SAME, SAME, VALID, INVALID, INVALID, VALID, VALID, INVALID, SAME, VALID};
    int i = 0, count = 0, num = 0;
    bool found = false;
    
    for (i = 2; i <= N; i++)
    {   
        num = i;
        found = false;

        while (num)
        {
            if (number[num % 10] == INVALID) 
            {
                found = false;
                break;
            }
            
            if (number[num % 10] == VALID) 
            {
                found = true;    
            }
            
            num = num / 10;                          
        }
       
        if (found == true)
        {
            count++;
        }
    }
    return count;    
}
