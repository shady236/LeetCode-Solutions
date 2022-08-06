

int pivotIndex(int* nums, int numsSize)
{
    int prefixSum[10000] = {0};
    prefixSum[0] = nums[0];
    
    for(int i = 1; i < numsSize; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }
    
    
    for(int i = 0; i < numsSize; i++)
    {
        int leftSum  = prefixSum[i] - nums[i];
        int rightSum = prefixSum[numsSize - 1] - prefixSum[i];
        
        if(leftSum == rightSum)
            return i;
    }
    
    return -1;
}