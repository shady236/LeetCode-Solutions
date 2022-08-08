

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}


#define maxOfThree(a, b, c) (max(max((a), (b)), (c)))


int maxArrCrossSum(int* arr, int left, int right, int mid)
{
    int maxLeftSum = arr[mid];
    int sum = arr[mid];
    for(int i = mid - 1; i >= left; i--)
    {
        sum += arr[i];
        maxLeftSum = max(maxLeftSum, sum);
    }
    
    int maxRightSum = 0;
    sum = 0;
    for(int i = mid + 1; i <= right; i++)
    {
        sum += arr[i];
        maxRightSum = max(maxRightSum, sum);
    }
    
    return maxLeftSum + maxRightSum;
}


int maxSubArrSum(int* arr, int left, int right)
{
    if(left == right)
        return arr[left];
    if(left > right)
        return 0;
    
    int mid = (left + (long long)right) >> 1;
    
    int maxLeftSum  = maxSubArrSum(arr, left, mid);
    int maxRightSum = maxSubArrSum(arr, mid + 1, right);
    
    int maxCrossSum = maxArrCrossSum(arr, left, right, mid);
    
    return maxOfThree(maxLeftSum, maxRightSum, maxCrossSum);
}


int maxProfit(int* prices, int pricesSize)
{
    int priceChange[100000] = {0};
    for(int i = 1; i < pricesSize; i++)
    {
        priceChange[i - 1] = prices[i] - prices[i - 1];
    }
    
    return max(
        maxSubArrSum(priceChange, 0, pricesSize - 2),
        0
    );

}