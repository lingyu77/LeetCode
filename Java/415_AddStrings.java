// 2 ms
class Solution {
    public String addStrings(String num1, String num2) {
        StringBuilder stringBuilder = new StringBuilder();
        int carry = 0;
        
        for (int i = num1.length() - 1, j = num2.length() - 1; i >= 0 || j >= 0 || carry > 0; i--, j--) {
            int x = i >= 0? num1.charAt(i) - '0' : 0;
            int y = j >= 0? num2.charAt(j) - '0' : 0;
            stringBuilder.append((x + y + carry) % 10);
            carry = (x + y + carry) / 10; 
        }
        
        return stringBuilder.reverse().toString();
    }
}

// 21 ms
/*
import java.math.BigInteger;

class Solution {
    public String addStrings(String num1, String num2) {
        BigInteger num1Int = new BigInteger(num1);
        BigInteger num2Int = new BigInteger(num2);
        BigInteger sum = num1Int.add(num2Int);
        return sum.toString();
    }
}
*/

