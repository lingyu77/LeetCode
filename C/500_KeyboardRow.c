/*
500. Keyboard Row
Given a List of words, return the words that can be typed using letters of 
alphabet on only one row's of American keyboard like the image below.

American keyboard

Example 1:
Input: ["Hello", "Alaska", "Dad", "Peace"]
Output: ["Alaska", "Dad"]
Note:
You may use one character in the keyboard more than once.
You may assume the input string will only contain letters of alphabet.

*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
# define MAX_NUM_ALPHABET 26

bool inTheSameRow(char *words) {
    char table[MAX_NUM_ALPHABET] = {0, -1, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0, -1, -1, 1, 1, 1, 1, 0, 1, 1, -1, 1, -1, 1, -1};
    int i = 0;
    int length = strlen(words);

    for (i = 1; i < length; i++)
    {
        if (table[tolower(words[i - 1]) - 'a'] != table[tolower(words[i]) - 'a'])
            return false;
    }
    
    return true;
}

char** findWords(char** words, int wordsSize, int* returnSize) {

    char **result = (char**) malloc((sizeof(char*)*wordsSize));
    int i = 0;
    int count = 0;

    for (i = 0; i < wordsSize; i++)
    {
        if (inTheSameRow(words[i]))
        {
            result[count] = (char*) malloc(strlen(words[i]) + 1); 
            strcpy(result[count++], words[i]);        
        }
    }

    *returnSize = count;
    
    return result;        
}
