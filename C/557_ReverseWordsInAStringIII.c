/*
557. Reverse Words in a String III

Given a string, you need to reverse the order of characters in each word within 
a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Note: In the string, each word is separated by single space and there will not 
be any extra space in the string.
*/
// 119 ms
void reverse(char *s) {
    int i = 0;
    int j = 0;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) 
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

char* reverseWords(char* s) {
    char *pch;
    char *ptrResult = malloc(sizeof(char) * strlen(s));

    if (strlen(s) == 0)
    {
        return s;
    }
    
    pch = strtok (s, " ");    
    reverse(pch);     
    strcpy (ptrResult, pch);
    pch = strtok (NULL, " ");    

    while (pch != NULL)
    {
        strcat (ptrResult, " ");
        reverse(pch);     
        strcat (ptrResult, pch);
        pch = strtok (NULL, " "); 
    }
    
    strcpy(s, ptrResult);
    free(ptrResult);
    return s;
}


// Reference
// 4 ms
void reverse2(char* s, int b, int e)
{
    while (b < e)
    {
        char t = s[b];
        s[b] = s[e];
        s[e] = t;
        b++;
        e--;
    }
}
char* reverseWords2(char* s) {
    if (!s) return s;
    int b = 0;
    int e = 0;
    int i = 0;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == ' ')
        {
            e = i - 1;
            reverse2(s, b, e);
            b = i + 1;
        }
    }
    e = i - 1;
    reverse2(s, b, e);
    return s;
}
