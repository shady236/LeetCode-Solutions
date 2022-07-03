

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int* res = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    for(int i = 0; i < numsSize; i++)
    {
        res[i] = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(nums[i] > nums[j])
                res[i]++;
        }
    }
    
    return res;
}