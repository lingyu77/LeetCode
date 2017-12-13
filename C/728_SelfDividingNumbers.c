/*
728. Self Dividing Numbers

A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
Note:

The boundaries of each input argument are 1 <= left <= right <= 10000.
*/

bool isSelfDividingNumbers(int number)
{
    int tempNumber = number;
    int num = 0; 
    
    while (number != 0)
    {
        num = number % 10;        

        if (num == 0)
        {
            return false;
        }
        else if ((tempNumber % num) != 0)
        {
            return false;
        }       
        number = number / 10;
    }     
    return true;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
 
    int i = 0;
    int* result = (int*)malloc(sizeof(int) * ((right - left) + 1));
    *returnSize = 0;

    for (i = left; i <= right; i++)
    {        
        if (isSelfDividingNumbers(i))
        {
            result[(*returnSize)++] = i;                             
        }
    }
    return result;   
}
