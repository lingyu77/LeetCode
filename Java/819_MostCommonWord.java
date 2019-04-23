// 54 ms
class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        String[] words = paragraph.split(" ");
        Map<String, Integer> freq = new HashMap();
        
        Boolean filter = false;
        
        for (String word : words) {
            String filterWord = word.replaceAll("[^a-zA-Z].*", "").toLowerCase();
            filter = false;
            
            for (String bannedWord : banned) {
                if (filterWord.equals(bannedWord)) {
                    filter = true;
                    break;
                }
            }
            
            if (filter == false) {
                freq.put(filterWord, freq.getOrDefault(filterWord, 0) + 1);
            }
        }
        return Collections.max(freq.entrySet(), Map.Entry.comparingByValue()).getKey();

    }
}