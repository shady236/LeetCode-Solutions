

int minOperations(int* nums, int numsSize)
{
    int prefixMax = nums[0];
    int opCnt = 0;
    
    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] <= prefixMax)
        {
            opCnt += prefixMax - nums[i] + 1;
            nums[i] = prefixMax + 1;
        }
        
        prefixMax = nums[i];
    }
    
    return opCnt;
}