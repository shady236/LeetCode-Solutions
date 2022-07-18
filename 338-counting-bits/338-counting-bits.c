

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize)
{
    int* res = malloc((n + 1) * sizeof(int));
    *returnSize = n + 1;
    
    res[0] = 0;
    int msb = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i == (1 << (msb + 1)))
            msb++;
        res[i] = 1 + res[i - (1 << msb)];
    }
    
    return res;
}