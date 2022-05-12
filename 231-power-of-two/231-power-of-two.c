

bool isPowerOfTwo(int n)
{
    if(n < 0)     return 0;
    
    int onesCnt = 0;
    for(int i=0; i<32 && onesCnt<=1; i++)
        if((n>>i) & 1)
            onesCnt++;
    
    if(onesCnt == 1)        return 1;
    return 0;
}