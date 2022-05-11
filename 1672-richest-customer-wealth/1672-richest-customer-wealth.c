

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
{
    int max = 0;
    for(int i=0; i<accountsSize; i++)
    {
        int cur = 0;
        for(int j=0; j<accountsColSize[i]; j++)
            cur += accounts[i][j];
        if(cur > max)   max = cur;
    }
    return max;
}