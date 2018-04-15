'''
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
'''
class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        horizontal = 0
        vertical = 0

        # Python does not have a switch case statement.
        for i in moves:
            if (i == 'U'): horizontal += 1
            elif (i == 'D'): horizontal -= 1
            elif (i == 'L'): vertical -= 1
            elif (i == 'R'): vertical += 1

        return horizontal == vertical == 0

    def judgeCircle2(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        return (moves.count('U') == moves.count('D')) and (moves.count('L') == moves.count('R'))