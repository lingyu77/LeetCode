/*
242. Valid Anagram

Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your 
solution to such case?
*/

/*
Definition:
Anagram : a word or phrase made by using the letters of another word or phrase 
in a different order           
*/
//34 ms
bool isAnagram(char* s, char* t) {
   int letter[26] = {0}, i = 0;
   int length = strlen(s);
    
   if (strlen(s) != strlen(t)) return false;
   
   for (i = 0; i < length; i++)
   {
       letter[s[i] - 'a']++;
       letter[t[i] - 'a']--;
   }

   for (i = 0; i < 26; i++)
   {      
       if (letter[i] != 0) return false;
   }   
   
   return true;
}
