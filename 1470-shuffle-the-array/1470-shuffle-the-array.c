

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int* res = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    for(int i=0; i<n; i++)
        res[i<<1] = nums[i];
    
    
    for(int i=0; i<n; i++)
        res[(i<<1) + 1] = nums[i+n];
    
    return res;
}