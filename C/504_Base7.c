#include <stdbool.h>
/*
504. Base 7
Given an integer, return its base 7 string representation.

Example 1:
Input: 100
Output: "202"
Example 2:
Input: -7
Output: "-10"
Note: The input will be in range of [-1e7, 1e7].
*/
char* convertToBase7(int num) {
    char *result;
    char *temp2;
    int temp = 0;
    bool sign = true;
    
    result = malloc(sizeof(char) * 128);
    temp2 = malloc(sizeof(char) * 128);
    memset(result, 0, sizeof(result));
    memset(temp2, 0, sizeof(temp2));

    if (num == 0) return "0";
    
    if (num < 0)
    {
        num = abs(num);
        sign = false;    
    }

    while(num != 0)
    {
        temp = num % 7;
        num /= 7;

        memcpy(temp2, result, sizeof(result));
 
        if (num == 0 && sign == false)
            sprintf(result, "-%d%s", temp, temp2);
        else
            sprintf(result, "%d%s", temp, temp2);
    }
 
    return result;
}
