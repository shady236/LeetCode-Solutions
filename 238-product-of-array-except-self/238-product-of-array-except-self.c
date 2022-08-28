

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int totProduct = 1;
    int zerosCnt = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
            zerosCnt++;
        else
            totProduct *= nums[i];
    }
    
    int* res = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    if(zerosCnt > 1)
    {
        for(int i = 0; i < numsSize; i++)
            res[i] = 0;
    }
    else if(zerosCnt == 1)
    {
        for(int i = 0; i < numsSize; i++)
        {
            if(nums[i] == 0)
                res[i] = totProduct;
            else 
                res[i] = 0;
        }
    }
    else 
    {
        for(int i = 0; i < numsSize; i++)
            res[i] = totProduct / nums[i];
    }
    
    
    return res;
}