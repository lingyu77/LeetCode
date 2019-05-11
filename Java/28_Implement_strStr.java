// 4 ms
class Solution {
    public int strStr(String haystack, String needle) {
       
        for (int hIndex = 0; ; hIndex++) {
            for (int nIndex = 0; ; nIndex++) {
                if (nIndex == needle.length()) return hIndex;
                if (nIndex + hIndex == haystack.length()) return (-1);
                if (needle.charAt(nIndex) != haystack.charAt(hIndex + nIndex)) break;
            }
        }
    }
}

/* Reference : 0 ms
class Solution {
    public int strStr(String haystack, String needle) {
        if(needle == null || haystack == null 
            || needle.length() == 0) {
            return 0;
        }

        if(needle.length() > haystack.length()) {
            return -1;
        }

        int needleIndex = 0;

        for(int i = 0; i < haystack.length(); i++) {
            char current = needle.charAt(needleIndex);
            // find first match
            if(current != haystack.charAt(i)) {
                while(++i < haystack.length() && haystack.charAt(i) != current) {
                    // nothing to do
                }
            }
            // check out of index 
            if(i < haystack.length()) {

                if(i + needle.length() <= haystack.length()) {

                    if(haystack.charAt(i + needle.length() - 1) != needle.charAt(needle.length() - 1)) {
                        // nothing to do
                    }
                    else {
                        boolean is = true;
                        for(int j = i + 1; j < i + needle.length() - 1; j++) {
                            if(haystack.charAt(j) != needle.charAt(j - i)) {
                                is = false;
                                break;
                            }
                        }
                        if(is) {
                            return i;
                        }
                    }

                }
                else if(i + needle.length() == haystack.length()){
                    return i;
                }
                else {
                    return -1;
                }
            }
            else {
                return -1;
            }
        }
        return -1;
    }
}
*/