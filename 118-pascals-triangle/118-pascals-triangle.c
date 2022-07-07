
void generateTriangle(int** res, int row, int numRows)
{
    if(row == numRows)
        return;
    
    res[row][0] = 1;
    res[row][row] = 1;
    
    for(int i = 1; i < row; i++)
    {
        res[row][i] = res[row - 1][i - 1] + res[row - 1][i];
    }
    
    generateTriangle(res, row + 1, numRows);
}
    

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int** res = malloc(numRows * sizeof(int*));
    *returnSize = numRows;
    
    int* colSize = malloc(numRows * sizeof(int));
    for(int i = 0; i < numRows; i++)
    {
        res[i] = malloc((i + 1) * sizeof(int));
        colSize[i] = i + 1;
    }
    *returnColumnSizes = colSize;
    
    res[0][0] = 1;
    generateTriangle(res, 1, numRows);
    
    return res;
}