#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {

     int index = 0, peek = 0;
     int lengthS = strlen(s);
     char *stack = malloc(lengthS * sizeof(char));

     memset (stack, 0, sizeof(stack));

     for (index = 0; index < lengthS; index++)
     {
        if (s[index] == '(' || s[index] == '[' || s[index] == '{')
        {
            stack[peek++] = s[index];                     
        }            
        else 
        {
            if (peek == 0)
            {
                return false;               
            }
            
            if ((s[index] == ')' && stack[peek - 1] != '(') ||
                (s[index] == ']' && stack[peek - 1] != '[') ||
                (s[index] == '}' && stack[peek - 1] != '{'))
            {
                return false;                  
            }

            peek--;       
        }      
     }

     return (peek == 0);
}
