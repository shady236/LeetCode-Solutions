class Solution {
    
    private static List<List<Integer>> combine(int strt, int end, int k) 
    {
        List<List<Integer>> res = new ArrayList<>();
        
        if(k == 1)
        {
            for(int a = strt; a <= end; a++)
            {
                List<Integer> l = new ArrayList<>();
                l.add(a);
                res.add(l);
            }
            
            return res;
        }
        
        
        for(int a = strt; a <= end - k + 1; a++)
        {
            List<List<Integer>> next = combine(a + 1, end, k - 1);
            
            for(List<Integer> l : next)
            {
                l.add(0, a);
                res.add(l);
            }
        }
        
        return res;
    }
    
    public List<List<Integer>> combine(int n, int k) 
    {
        return combine(1, n, k);
    }
}