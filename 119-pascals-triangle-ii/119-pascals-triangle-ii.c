
int* generateRow(int* prevRow, int row)
{
    int* res = malloc((row + 1) * sizeof(int));
    
    res[0] = 1;
    res[row] = 1;
    
    for(int i = 1; i < row; i++)
    {
        res[i] = prevRow[i - 1] + prevRow[i];
    }
    
    return res;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize)
{
    int rowNum = 0;
    
    int* prevRow = NULL;
    int* currRow = generateRow(prevRow, 0);
    
    while(rowNum < rowIndex)
    {
        rowNum++;
        
        int* tmp = prevRow;
        
        prevRow = currRow;
        currRow = generateRow(prevRow, rowNum);
        
        free(tmp);
    }
    
    if(prevRow)
        free(prevRow);
    
    *returnSize = rowIndex + 1;
    return currRow;
}