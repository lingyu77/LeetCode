/*
771. Jewels and Stones
You're given strings J representing the types of stones that are jewels, and S 
representing the stones you have.  Each character in S is a type of stone you 
have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are 
letters. Letters are case sensitive, so "a" is considered a different type of 
stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.

*/
// 5 ms
#include <stdio.h>
#include <string.h>

int numJewelsInStones(char* J, char* S) {
    int lengthS = strlen(S);
    int i = 0, count = 0;
    char *pch = NULL;
    
    for (i = 0; i < lengthS; i++)
    {
        pch = strchr(S, J[i]);
        
        while (pch != NULL)
        {
           count++; 
           pch = strchr(pch + 1, J[i]); 
        }        
    }
    
    return count;
}
