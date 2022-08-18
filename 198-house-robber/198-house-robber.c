
int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}


int rob(int* nums, int numsSize)
{
    if(numsSize == 1)
        return nums[0];
    
    
    int dp[101] = {0};
    
    dp[numsSize - 1] = nums[numsSize - 1];
    dp[numsSize - 2] = max(nums[numsSize - 2], nums[numsSize - 1]);
    
    for(int i = numsSize - 3; i >= 0; i--)
        dp[i] = max(nums[i] + dp[i + 2], dp[i + 1]);
    
    return dp[0];
}