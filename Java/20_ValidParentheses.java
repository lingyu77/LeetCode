// 2 ms 
class Solution {
    public boolean isValid(String s) {
        Map<Character, Character> map = new HashMap<Character, Character>() {{
            put('(', ')');
            put('{', '}');
            put('[', ']');
        }};
        
        Stack<Character> stack = new Stack<>();
        
        for (char c : s.toCharArray()) {
            if (map.containsKey(c)) {
                stack.push(c);
            } else {
                if (stack.empty() == true || map.get(stack.pop()) != c)
                    return false;
            }
        }
        
        return (stack.empty() == true)? true : false;
    }
}