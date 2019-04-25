// 2 ms
class Solution {
    public String removeOuterParentheses(String S) {
        int open = 0;
        StringBuilder output = new StringBuilder();

        for (char letter : S.toCharArray()) {
            if (letter == '(' && open++ > 0) output.append(letter);
            if (letter == ')' && open-- > 1) output.append(letter);
        }
        
        return output.toString();
    }
}