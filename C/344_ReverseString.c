/*
344. Reverse String
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".
*/

char* reverseString(char* s) {
    int i = 0;
    int j = 0;
    char temp;
    char result;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) 
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }  
    return s;   
}
