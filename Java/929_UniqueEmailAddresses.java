// 7ms
class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> set = new HashSet();
        
        for (String email : emails) {
            int at = email.indexOf('@');
            String domain = email.substring(at, email.length());
            StringBuilder stringBuilder = new StringBuilder();
            
            for (int i = 0; i < at; i++) {
                char letter = email.charAt(i);
                
                if (letter == '.') {
                    continue;
                } else if (letter == '+') {
                    break;
                }
                stringBuilder.append(letter);
            }
            
            stringBuilder.append(domain);
            set.add(stringBuilder.toString());
        }
        
        return set.size();
    }
}

/* TODO: Why performance is low when calls Java internal API?
//19 ms
class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> set = new HashSet();
        
        for (String email : emails) {
            int at = email.indexOf('@');
            String local = email.substring(0, at);
            String domain = email.substring(at, email.length());
            
            if (local.contains("+"))
                local = local.substring(0, local.indexOf('+'));
            local = local.replaceAll("\\.", "");
            set.add(local + domain);
        }
        
        return set.size();
    }
}
*/