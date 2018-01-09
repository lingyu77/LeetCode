/*
412. Fizz Buzz
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output ¡§Fizz¡¨ instead of the number and 
for the multiples of five output ¡§Buzz¡¨. For numbers which are multiples of 
both three and five output ¡§FizzBuzz¡¨.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define LENGTH 32
 
char** fizzBuzz(int n, int* returnSize) {
       int i = 0;
       char **result = (char**)malloc(sizeof(char*) * n);
       
       for (i = 0; i < n; i++)
       {  
          result[i] = (char *)malloc(LENGTH + 1);
          
          if (((i + 1) % 3 == 0) && ((i + 1) % 5 == 0))
          {
              strcpy(result[i],"FizzBuzz");
          }
          else if ((i + 1) % 3 == 0)
          {
              strcpy(result[i],"Fizz"); 
          }
          else if ((i + 1) % 5 == 0)
          {
              strcpy(result[i],"Buzz");  
          }
          else
          {   
              snprintf(result[i], LENGTH, "%d", i + 1);   
          }         
       }
       *returnSize = n;
       
       return result;
}
