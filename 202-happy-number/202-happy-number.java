class Solution {
    public boolean isHappy(int n) 
    {
        HashSet<Integer> visited = new HashSet<>();
        
        while(n > 1)
        {
            n = nextN(n);
            if(visited.contains(n))
                return false;
            
            visited.add(n);
        }
        
        return true;
    }
    
    private static int nextN(int n)
    {
        int res = 0;
        
        while(n > 0)
        {
            int digit = n % 10;
            n /= 10;
            
            res += digit * digit;
        }
        
        return res;
    }
}