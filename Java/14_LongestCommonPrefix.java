// 1 ms
class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();
        int j = 0;
        
        if (strs.length == 0) return sb.toString();
        
        for (char c : strs[0].toCharArray()) {            
            for (int i = 1; i < strs.length; i++)
                if (j >= strs[i].length() || c != strs[i].charAt(j))
                    return sb.toString();
            j++;
            sb.append(c);
        }
        
        return sb.toString();
    }
}

/* Reference : 0 ms
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs.length==0) return "";
       String prefix=strs[0];
        for(int i=1;i<strs.length;i++){
            while(strs[i].indexOf(prefix)!=0){
                prefix=prefix.substring(0,prefix.length()-1);
            }
            if(prefix=="") return "";
        }
        return prefix;
    }
}
*/