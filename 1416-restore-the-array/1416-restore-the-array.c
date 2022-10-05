
#define  MOD         (1000000007)
#define  MAX_LEN     (100000)


int numberOfArrays(char * s, int k)
{
    int len = strlen(s);
    
    int dp[MAX_LEN + 1] = {0};
    dp[len] = 1;
    
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            dp[i] = 0;
            continue;
        }
        
        long num = 0;
        long cnt = 0;
        
        for (int j = i; j < len; j++)
        {
            num *= 10;
            num += s[j] - '0';
            
            if (num > k)
                break;
            
            cnt = (cnt + dp[j + 1]) % MOD;
        }
        
        dp[i] = cnt;
    }
    
    return dp[0];
}