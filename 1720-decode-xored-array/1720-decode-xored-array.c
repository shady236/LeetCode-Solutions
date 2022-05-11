

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize)
{
    int  arrSize = encodedSize + 1;
    int* arr = malloc(arrSize * sizeof(int));
    *returnSize = arrSize;
    
    arr[0] = first;
    for(int i=1; i<arrSize; i++)
        arr[i] = arr[i-1] ^ encoded[i-1];
    
    return arr;
}