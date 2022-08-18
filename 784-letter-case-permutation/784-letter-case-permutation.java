class Solution {
    public List<String> letterCasePermutation(String s) 
    {
        List<String> res = new ArrayList<>();
        
        char c = s.charAt(0);
        
        
        if(s.length() == 1)
        {
            if(c >= 'a' && c <= 'z')
            {
                char upr = (char)(c - 'a' + 'A');
                res.add(c + "");
                res.add(upr + "");
            }
            else if(c >= 'A' && c <= 'Z')
            {
                char lwr = (char)(c - 'A' + 'a');
                res.add(c + "");
                res.add(lwr + "");
            }
            else 
            {
                res.add(c + "");
            }
            
            return res;
        }
        
        
        List<String> rem = letterCasePermutation(s.substring(1));
        
        if(c >= 'a' && c <= 'z')
        {
            char upr = (char)(c - 'a' + 'A');
            for(String r : rem)
            {
                res.add(c + r);
                res.add(upr + r);
            }
        }
        else if(c >= 'A' && c <= 'Z')
        {
            char lwr = (char)(c - 'A' + 'a');
            for(String r : rem)
            {
                res.add(c + r);
                res.add(lwr + r);
            }
        }
        else 
        {
            for(String r : rem)
            {
                res.add(c + r);
            }
        }
        
        return res;
    }
}