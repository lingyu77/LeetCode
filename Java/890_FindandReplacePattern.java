// 2 ms
class Solution {
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        List<String> ans = new ArrayList<>();
        
        for (String word : words)
            if (match(word, pattern)) ans.add(word);

        return ans;
    }
    
    private boolean match(String word, String pattern) {
        Map<Character, Character> temp = new HashMap();
        
        // check from word 
        for (int i = 0; i < word.length(); i++) {
            char w = word.charAt(i);
            char p = pattern.charAt(i);
            
            if (!temp.containsKey(w)) temp.put(w, p);
            else if (temp.get(w) != p) return false;
        }
        
        // double check from pattern 
        boolean[] dup = new boolean[26];
        for (char p : temp.values()) {
            if (dup[p - 'a']) return false;
            else dup[p - 'a'] = true;
        }
        return true;
    }
}

/* Reference : 0 ms
class Solution {
    /*
    APPROACH: RABIN KARP/ROLLING HASH
    
    We first decide on a hashing algorithm, then we hash the pattern and match any word that matches the same hash:
    
    EXAMPLE:
    
        hash = (hash * BASE) + charCounter;
                                ^---------charCounter is assigned to each letter we see in order.
                                
        INPUT: "abb" --> 122 (or "metem" --> 12321)
        So we know that if for pattern "abb" who's hash is 122, "mee" who's hash is also 122 would be a pattern match.
        
        
    TC: O(n*m) [iterate through words(n = words.length()) * each word we calculate the hash (m = avg length of each string)]
    SP: O(1) [Saving int[] is always 26, hash, base and mod are all constant time also]
    
    */
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        
        // Edge Cases: Empty inputs
        if (words == null || words.length == 0) {
            return new ArrayList();
        } else if (pattern == null || pattern.length() == 0) {
            return Arrays.asList(words);
        }    
        
        List<String> result = new ArrayList();
        
        // Process pattern and get "hash value" (Ex. "abb" --> 122, "metem" --> 12321)
        long patternHash = getHash(pattern);
        
        // Get hash values for all words in String[]: Add them to result if they match our pattern's hash
        for (String word : words) {
            if (getHash(word) == patternHash) result.add(word);
        }
        
        return result;
    }
    
    /**
    * Gets the hash value (Base-10) of the input string "s"
    *   - We get the MOD of the hash to keep it within a computer word (32-bits to 64 bits)
    **/
    private long getHash(String s) {
        final long BASE = 10, MOD = 100030001;
        int[] alphaToHashDigit = new int[26];
        int counter = 1;
        long hash = 0;
        for (char ch : s.toCharArray()) {
            int currCh = ch - 'a';
            
            // First time seeing this character: Assign it current counter value, add it to hash
            if (alphaToHashDigit[currCh] == 0) {
                alphaToHashDigit[currCh] = counter;
                hash = ((hash * BASE) + counter++) % MOD;
            } else {
                // Seen this character before: Get its hash and add it to the current hash
                hash = ((hash * BASE) + alphaToHashDigit[currCh]) % MOD;
            }
        }
        
        return hash;
    }
}

*/