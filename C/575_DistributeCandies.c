#include <stdbool.h>
#include <stdint.h>
/*
575. Distribute Candies

Given an integer array with even length, where different numbers in this array 
represent different kinds of candies. Each number means one candy of the corresponding
 kind. You need to distribute these candies equally in number to brother and sister. 
 Return the maximum number of kinds of candies the sister could gain.
Example 1:
Input: candies = [1,1,2,2,3,3]
Output: 3
Explanation:
There are three different kinds of candies (1, 2 and 3), and two candies for each kind.
Optimal distribution: The sister has candies [1,2,3] and the brother has candies [1,2,3], too. 
The sister has three different kinds of candies. 
Example 2:
Input: candies = [1,1,2,3]
Output: 2
Explanation: For example, the sister has candies [2,3] and the brother has candies [1,1]. 
The sister has two different kinds of candies, the brother has only one kind of candies. 
Note:

The length of the given array is in range [2, 10,000], and will be even.
The number in given array is in range [-100,000, 100,000].
*/
# define KIND_MAX 100001

int distributeCandies(int* candies, int candiesSize) {
    int i = 0, j = 0, kind = 0;
    int max = candiesSize / 2;
    bool repeat = false;
    int *syster;
 
    syster = (int *)malloc(sizeof(int) * max); 
    memset(syster, KIND_MAX, sizeof(int) * max);
    
    for (i = 0; i < candiesSize && kind < max ; i++)
    {
        repeat = false;
        for (j = 0; j < kind; j++)
        {
            if (candies[i] == syster[j])
            {
                repeat = true;
                break;
            }               
        }

        if (repeat == false)
        {
            syster[kind] = candies[i];
            kind++;
        }
    }
    
    free(syster);

    return kind;
}

int distributeCandies2(int* candies, int candiesSize) {
    int max = candiesSize >> 1;
    
    uint8_t hash[200001] = {0};
    int rtn = 0;
    int i = 0;
    for (i = 0; i < candiesSize; ++i) {
        int index = candies[i] + 100000;
        if (hash[index] == 0) {
            ++rtn;
            hash[index] = 1;
            if (rtn == max) return max;
        }
    }
    return rtn;
}
