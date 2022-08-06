

int cherryPickup(int** grid, int gridSize, int* gridColSize)
{
    int dp[70][70][70] = {0};
    
    for(int c1 = 0; c1 < gridColSize[0]; c1++)
    {
        for(int c2 = 0; c2 < gridColSize[0]; c2++)
        {
            if(c1 == c2)
                dp[gridSize - 1][c1][c2] = grid[gridSize - 1][c1];
            else 
                dp[gridSize - 1][c1][c2] = grid[gridSize - 1][c1] + grid[gridSize - 1][c2];
        }
    }
    
    
    for(int r = gridSize - 2; r >= 0; r--)
    {
        for(int c1 = 0; c1 < gridColSize[0]; c1++)
        {
            for(int c2 = 0; c2 < gridColSize[0]; c2++)
            {
                if(c1 == c2)
                    dp[r][c1][c2] = grid[r][c1];
                else 
                    dp[r][c1][c2] = grid[r][c1] + grid[r][c2];
                
                int maxNext = 0;
                for(int nextC1 = c1 - 1; nextC1 <= c1 + 1; nextC1++)
                {
                    for(int nextC2 = c2 - 1; nextC2 <= c2 + 1; nextC2++)
                    {
                        if(nextC1 < 0 || nextC1 >= gridColSize[0] || nextC2 < 0 || nextC2 >= gridColSize[0])
                            continue;
                        
                        int score = dp[r + 1][nextC1][nextC2];
                        
                        if(score > maxNext)
                            maxNext = score;
                    }
                }
                
                dp[r][c1][c2] += maxNext;
            }
        }
    }
    
    
    return dp[0][0][gridColSize[0] - 1];
}