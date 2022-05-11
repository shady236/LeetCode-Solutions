

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize<<1;
    int* res = malloc((*returnSize) * sizeof(int));
    for(int i=0; i<(*returnSize); i++)
        res[i] = nums[i % numsSize];
    return res;
}