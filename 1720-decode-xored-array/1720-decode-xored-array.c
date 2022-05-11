

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize)
{
    int  arrSize = encodedSize + 1;
    int* arr = malloc(arrSize * sizeof(int));
    *returnSize = arrSize;
    
    arr[0] = first;
    for(int i=0; i<encodedSize; i++)
        arr[i+1] = arr[i] ^ encoded[i];
    
    return arr;
}