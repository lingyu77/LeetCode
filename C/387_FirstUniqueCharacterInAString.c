/*
387. First Unique Character in a String
Given a string, find the first non-repeating character in it and return it's 
index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/
//12 ms
#define LETTER_LENGTH 26

int firstUniqChar(char* s) {
    int length = strlen(s);
    int i = 0;
    int letter[LETTER_LENGTH] = {0};
        
    for (i = 0; i < length; i++)
    {
        letter[s[i] - 'a']++;    
    }
    
    for (i = 0; i < length; i++)
    {
        if (letter[s[i] - 'a'] == 1) return i; 
    }
    
    return (-1);
}

/* 
Memo: 
It reduces performance if we write subfunction in 'for' statement.
e.g. 'for (i = 0; i < strlen(s); i++)'.
*/
