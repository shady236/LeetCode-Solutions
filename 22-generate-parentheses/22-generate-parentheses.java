class Solution {
    public List<String> generateParenthesis(int n) 
    {
        return generateParenthesis(0, n, n);
    }
    
    
    private List<String> generateParenthesis(int openedCnt, int toOpenCnt, int toCloseCnt) 
    {
        List<String> res = new ArrayList<>();
        
        if (toOpenCnt == 0)
        {
            String str = new String();
            
            while (toCloseCnt > 0)
            {
                str += ")";
                toCloseCnt--;
            }
            
            res.add(str);
            return res;
        }
        
        String s;
        List<String> next;
        
        if (toOpenCnt > 0)
        {
            s = new String("(");
            
            next = generateParenthesis(openedCnt + 1, toOpenCnt - 1, toCloseCnt);
            
            for (String n : next)
                res.add(s + n);
        }
        
        if (openedCnt > 0)
        {
            s = new String(")");

            next = generateParenthesis(openedCnt - 1, toOpenCnt, toCloseCnt - 1);

            for (String n : next)
                res.add(s + n);
        }
        
        return res;
    }
}