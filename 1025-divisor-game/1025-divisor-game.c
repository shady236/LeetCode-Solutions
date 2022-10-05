

bool divisorGame(int n)
{
    bool canWin[1001];
    
    canWin[0] = false;
    canWin[1] = false;
    
    for (int i = 2; i <= n; i++)
    {
        canWin[i] = false;
        
        for (int x = 1; x < i; x++)
        {
            if (i % x != 0)
                continue;
            
            if (!canWin[i - x])
            {
                canWin[i] = true;
                break;
            }
        }
    }
    
    
    return canWin[n];
}