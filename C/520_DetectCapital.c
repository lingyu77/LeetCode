/*
520. Detect Capital

Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".

Only the first letter in this word is capital if it has more than one letter, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
*/
#define CAPITAL_START_A 65 
#define CAPTTAL_END_Z 90

bool isCapital(char character) {
     if (character >= CAPITAL_START_A && character <= CAPTTAL_END_Z)
     {
         return true;                   
     } 
     return false;
}

bool detectCapitalUse(char* word) {
     int i = 0, firstLetter = 0, count = 0;
     int length = strlen(word);
     
     if (isCapital(word[0]) == true)
     {
         firstLetter = 1;
     }
     else
     {
         firstLetter = 0;
     }
     
     for (i = 0; i < length; i++)
     {
         if (isCapital(word[i]) == true)
             count++;
     }
     
     if ((firstLetter == 1 && count == length) ||
         (firstLetter == 1 && count == 1) ||
         (firstLetter == 0 && count == 0))
     {
         return true;    
     }
     return false;
}

bool detectCapitalUse2(char* word) {
    int False = 0;
    int True = 1;
    bool fstCap = False;
    bool foundCap = False;
    bool curCap = False;
    int len = strlen(word);
    
    if(word[0] >= 'A' && word[0] <= 'Z') {
        fstCap = True;
    }
    
    for(int i = 1; i < len; i++) {
		if(word[i] >= 'A' && word[i] <= 'Z') {
			curCap = True;
		} else {
			curCap = False;
		}
		
        if(!fstCap) {
            if(curCap) {
            	return False;
            }
        } else {
        	if(i == 1) {
        		foundCap = curCap;
        	} else {
        		if( foundCap != curCap) {
        			return false;
        	    }
            }    
        }
    }
    return True;
}
