

bool isPowerOfTwo(int n)
{
    int cnt = 0;
    
    if(n < 0)     return 0;
    
    for(int i=0; i<32 && cnt<=1; i++)
        if((n>>i) & 1)
            cnt++;
    
    if(cnt == 1)        return 1;
    return 0;
}