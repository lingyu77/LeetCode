// 4 ms
class Solution {
    public String reverseVowels(String s) {
        StringBuilder ans = new StringBuilder();
        int j = s.length() - 1;
        for (int i = 0; i < s.length(); ++i) {
            if (isVowel(s.charAt(i))) {
                while (!isVowel(s.charAt(j)))
                    j--;
                ans.append(s.charAt(j--));
            } else {
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();        
    }
    
    Boolean isVowel(char letter) {
        if(letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' 
           || letter == 'i' || letter == 'I' || letter == 'o'
           || letter == 'O' || letter == 'u' || letter == 'U')
            return true;
        else
            return false;       
   }
}

/* Reference : 1 ms
class Solution {
    public String reverseVowels(String input) {
        char[] s = input.toCharArray();
        int a = 0, b = s.length - 1;
        boolean[] vowels = new boolean[256];
        vowels['a'] = vowels['e'] = vowels['i'] = vowels['o'] = vowels['u'] = true;
        vowels['A'] = vowels['E'] = vowels['I'] = vowels['O'] = vowels['U'] = true;
        while (true) {
            while (a < b && !vowels[s[a]]) a++;
            while (a < b && !vowels[s[b]]) b--;
            if (a >= b) break;
            char c = s[a];
            s[a++] = s[b];
            s[b--] = c;
        }
        return new String(s);
    }
}

*/