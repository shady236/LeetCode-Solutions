
int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}


int maxOfThree(int a, int b, int c)
{
    return max(max(a, b), c);
}


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
    
    int mid = (left + (long long)right) >> 1;
    
    int maxLeftSum  = maxSubArrSum(arr, left, mid);
    int maxRightSum = maxSubArrSum(arr, mid + 1, right);
    
    int maxCrossSum = maxArrCrossSum(arr, left, right, mid);
    
    return maxOfThree(maxLeftSum, maxRightSum, maxCrossSum);
}


int maxSubArray(int* nums, int numsSize)
{
    return maxSubArrSum(nums, 0, numsSize - 1);
}