

int numTrees(int n)
{
    int dp[20]= {1, 1};
    
    for(int i = 2; i <= n; i++)
    {
        dp[i] = 0;
        for(int left = 0; left < i; left++)
        {
            dp[i] += dp[left] * dp[i - 1 - left];
        }
    }
    
    return dp[n];
}