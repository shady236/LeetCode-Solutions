
void flip(int* arr, int size)
{
    int left  = 0;
    int right = size - 1;
    
    while (left < right)
    {
        int tmp    = arr[left];
        arr[left]  = arr[right];
        arr[right] = tmp;
        
        left++;
        right--;
    }
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pancakeSort(int* arr, int arrSize, int* returnSize)
{
    int* res = malloc(2 * arrSize * sizeof(int));
    int  resIdx = 0;
    
    for (int i = arrSize - 1; i >= 0; i--)
    {
        int maxIdx = i;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[maxIdx])
                maxIdx = j;
        }
        
        res[resIdx] = maxIdx + 1;
        resIdx++;
        res[resIdx] = i + 1;
        resIdx++;
        
        flip(arr, maxIdx + 1);
        flip(arr, i + 1);
    }
    
    *returnSize = resIdx;
    return res;
}