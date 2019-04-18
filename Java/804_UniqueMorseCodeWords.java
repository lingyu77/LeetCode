// 1ms
class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] table = new String[] {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        Set<String> set = new HashSet();
        
        for (String word : words) {
            StringBuilder stringBuilder = new StringBuilder();
            
            for (char ch : word.toCharArray()) {
                stringBuilder.append(table[ch - 'a']);
            }    
            set.add(stringBuilder.toString());
        }
            
        return set.size();
    }
}