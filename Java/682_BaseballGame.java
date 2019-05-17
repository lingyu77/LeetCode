// 3 ms
class Solution {
    public int calPoints(String[] ops) {
        Stack<Integer> stack = new Stack();
        
        for (String op : ops) {
            switch (op) {
                case "+":
                    int temp = stack.pop();
                    int top = temp + stack.peek();
                    stack.push(temp);
                    stack.push(top);
                    break;
                case "D":
                    stack.push(stack.peek() * 2);
                    break;
                case "C":
                    stack.pop();
                    break;
                default:
                    stack.push(Integer.valueOf(op));
            }
        }
        
        int ans = 0;
        for (int value : stack) 
            ans+= value;
        
        return ans; 
    }
}