

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int freq[1001] = {0};
    for(int i = 0; i < nums1Size; i++)
        freq[nums1[i]]++;
    
    int* res = malloc(nums1Size * sizeof(int));
    int resIdx = 0;
    
    for(int i = 0; i < nums2Size; i++)
    {
        int n = nums2[i];
        
        if(freq[n] == 0)
            continue;
        
        freq[n]--;
        res[resIdx] = n;
        resIdx++;
    }
    
    *returnSize = resIdx;
    return res;
}