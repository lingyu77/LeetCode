/*
The Hamming distance between two integers is the number of positions at which 
the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ? x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ¡ô   ¡ô

The above arrows point to positions where the corresponding bits are different.
*/
int hammingDistance(int x, int y) {
    int distance = 0;
    int value = x ^ y;
  
    while (value != 0)
    {
        distance++;
        value &= value - 1; // Key point : count how many bit 1
    }
  
    return distance;   
}
