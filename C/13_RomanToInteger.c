/*
13. Roman to Integer
Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.
*/

/*
roman numeral

Symbol	I	V	X	L	C	D	M
Value	1	5	10	50	100	500	1,000
*/
#define _I 1
#define _V 5
#define _X 10
#define _L 50
#define _C 100
#define _D 500
#define _M 1000

int romanToInt(char* s) {
    int i = 0;
    int length = strlen(s);
    int result = 0;
    int preNum = _M;  
    
    for (i = 0; i < length; i++)
    {
        switch (s[i])
        {
            case 'I':
                 result = (preNum >= _I)? result + _I : result + _I - (2 * preNum);
                 preNum = _I;
                 break;
            case 'V':
                 result = (preNum >= _V)? result + _V : result + _V - (2 * preNum);
                 preNum = _V;
                 break;
            case 'X':
                 result = (preNum >= _X)? result + _X : result + _X - (2 * preNum);
                 preNum = _X;
                 break;
            case 'L':
                 result = (preNum >= _L)? result + _L : result + _L - (2 * preNum);
                 preNum = _L;
                 break;
            case 'C':
                 result = (preNum >= _C)? result + _C : result + _C - (2 * preNum);
                 preNum = _C;
                 break;
            case 'D':
                 result = (preNum >= _D)? result + _D : result + _D - (2 * preNum);
                 preNum = _D;
                 break;
            case 'M':
                 result = (preNum >= _M)? result + _M : result + _M - (2 * preNum);
                 preNum = _M;
                 break;                   
        }
    }
    
    return result;
}
