
#define  MAX_SIZE       (20000)


int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}


int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}


int maxOfThree(int a, int b, int c)
{
    return max(max(a, b), c);
}


int minOfThree(int a, int b, int c)
{
    return min(min(a, b), c);
}


int arrMax(int* arr, int size)
{
    int res = arr[0];
    
    for (int i = 0; i < size; i++)
        res = max(res, arr[i]);
    
    return res;
}


int maxProduct(int* nums, int numsSize)
{
    int dp[2][MAX_SIZE] = {0};
    
    dp[0][0] = nums[0];
    dp[1][0] = nums[0];
    
    for (int i = 1; i < numsSize; i++)
    {
        dp[0][i] = maxOfThree(nums[i], nums[i] * dp[0][i - 1], nums[i] * dp[1][i - 1]);
        dp[1][i] = minOfThree(nums[i], nums[i] * dp[0][i - 1], nums[i] * dp[1][i - 1]);
    }
    
    return arrMax(dp[0], numsSize);
}