/*
434. Number of Segments in a String

Count the number of segments in a string, where a segment is defined to be a 
contiguous sequence of non-space characters.

Please note that the string does not contain any non-printable characters.

Example:

Input: "Hello, my name is John"
Output: 5
*/
// 0 ms
int countSegments(char* s) {
    char * pch = NULL;
    int counter = 0;
    
    pch = strtok (str," ");
    while (pch != NULL)
    {
        counter++;
        pch = strtok (NULL, " ");
    }    
    
    return counter;
}

//Reference
int countSegments2(char* s) {
    int count = 0;
	int sLen = strlen(s);
	bool flag = true;
	for ( int i = 0; i < sLen; i++ )
	{
		if ( s[i] != ' ' && flag )
		{
			flag = false;
			count++;
		}
		if ( s[i] == ' ' )
			flag = true;
	}
	return count;
}
