
int negativeCnt(int* arr, int size)
{
    int left  = 0;
    int right = size - 1;
    int firstNegIdx = size;
    
    while(left <= right)
    {
        int mid = (left + right)>>1;
        
        if(arr[mid] >= 0)
            left = mid + 1;
        else 
        {
            firstNegIdx = mid;
            right = mid - 1;
        }
    }
    
    return size - firstNegIdx;
}


int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    int cnt = 0;
    
    for(int i = 0; i < gridSize; i++)
        cnt += negativeCnt(grid[i], gridColSize[i]);
    
    return cnt;
}