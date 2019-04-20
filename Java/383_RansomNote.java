// 2 ms
class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        char[] letters = magazine.toCharArray();
        boolean contrain = false;
        int j = 0;
        
        for (int i = 0; i < ransomNote.length(); i++) {
            contrain = false;
            j = 0;
            
            for (char c : letters) {
                if (c == ransomNote.charAt(i)) {
                    letters[j] = '0';
                    contrain = true;
                    break;
                }
                j++;
            }
            
            if (contrain == false) return false;
        }
        return true;
    }
}

/* Reference : 1 ms
class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int ransomNoteMap[] = new int[26];
		int diff = 0;
		for(char c: ransomNote.toCharArray()) {
			ransomNoteMap[c - 'a']++;
			diff++;
		}
		for(char c: magazine.toCharArray()) {
			if (ransomNoteMap[c - 'a'] > 0) {
				diff --;
				ransomNoteMap[c - 'a']--;
			}
			if (diff == 0) return true;
		}
		return diff == 0;
    }
}
*/