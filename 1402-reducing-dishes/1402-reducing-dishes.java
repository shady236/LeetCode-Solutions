class Solution {
    public int maxSatisfaction(int[] satisfaction) 
    {
        Arrays.sort(satisfaction);
        
        int[][] dp = new int[satisfaction.length + 1][satisfaction.length + 1];
        
        for(int i = satisfaction.length - 1; i >= 0; i--)
        {
            for(int t = i; t >= 0; t--)
            {
                dp[i][t] = Math.max(
                    dp[i + 1][t],
                    dp[i + 1][t + 1] + (t + 1) * satisfaction[i]
                );
            }
        }
        
        return dp[0][0];
    }
}