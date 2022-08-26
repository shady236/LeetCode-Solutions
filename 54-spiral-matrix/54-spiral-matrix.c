

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
    int resSize = matrixSize * matrixColSize[0];
    int* res = malloc(resSize * sizeof(int));
    *returnSize = resSize;
    
    int resIdx = 0;
    int loopNum = 0;
    
    while(resIdx < resSize)
    {
        // top row 
        for(int j = loopNum; j < matrixColSize[0] - loopNum; j++)
        {
            res[resIdx] = matrix[loopNum][j];
            resIdx++;
        }
        
        // right column
        for(int i = loopNum + 1; i < matrixSize - loopNum; i++)
        {
            res[resIdx] = matrix[i][matrixColSize[0] - 1 - loopNum];
            resIdx++;
        }
        
        // buttom row
        if(loopNum != matrixSize - 1 - loopNum)
        {
            for(int j = matrixColSize[0] - 2 - loopNum; j >= loopNum; j--)
            {
                res[resIdx] = matrix[matrixSize - 1 - loopNum][j];
                resIdx++;
            }
        }
        
        // left column
        if(loopNum != matrixColSize[0] - 1 - loopNum)
        {
            for(int i = matrixSize - loopNum - 2; i >= loopNum + 1; i--)
            {
                res[resIdx] = matrix[i][loopNum];
                resIdx++;
            }
        }
        
        loopNum++;
    }
    
    return res;
}