

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    bool* res = malloc(candiesSize * sizeof(int));
    *returnSize = candiesSize;
    
    int initialMax = candies[0];
    for(int i=1; i<candiesSize; i++)
        if(initialMax < candies[i])
            initialMax = candies[i];
    
    for(int i=0; i<candiesSize; i++)
        if(candies[i] + extraCandies >= initialMax)
            res[i] = 1;
        else
            res[i] = 0;
    
    return res;
}