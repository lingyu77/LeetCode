/*
657. Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, 
judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a 
character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). 
The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"
Output: true
Example 2:
Input: "LL"
Output: false 
*/
// 6 ms
bool judgeCircle(char* moves) {
    int horizontal = 0;
    int vertical = 0;
    int i = 0;
    int length = strlen (moves);

    if ((length % 2) != 0)
        return false;
     
    for (i = 0; i < length; i++)
    {
        switch (moves[i])
        {               
            case 'U':
                horizontal++;
                break;
            case 'D':
                horizontal--;
                break;
            case 'L':
                vertical--;
                break;
            case 'R':
                vertical++;
                break;
            default:     
                printf ("Error!\n"); 
         }       
     }    
       
     return (horizontal == 0 && vertical == 0);    
}
