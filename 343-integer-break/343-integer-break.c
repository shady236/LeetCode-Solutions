

int integerBreak(int n)
{
    int dp[100] = {0};
    
    dp[2] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (dp[i] < j * dp[i - j])
                dp[i] = j * dp[i - j];
            
            if (dp[i] < j * (i - j))
                dp[i] = j * (i - j);
        }
    }
    
    return dp[n];
}