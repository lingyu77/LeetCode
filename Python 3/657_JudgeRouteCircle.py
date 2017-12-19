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