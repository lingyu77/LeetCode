/*
231. Power of Two

Given an integer, write a function to determine if it is a power of two.
*/
bool isPowerOfTwo(int n) {
    int temp = n, num = 0;
    
    if (n == 1) 
        return true;

    if (n == 0) 
        return false;
    
    while (temp >= 2 && num == 0)
    {
        num = temp % 2;
        temp = temp / 2;
    }
    
    if (num != 0 || temp < 0)
    {
        return false;           
    }
 
    return true;
}
