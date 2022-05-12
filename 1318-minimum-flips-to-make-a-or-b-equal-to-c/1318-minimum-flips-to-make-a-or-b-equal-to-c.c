

int minFlips(int a, int b, int c)
{
    int diffCnt = 0;
    
    for(int i=0; i<32; i++)
    {
        switch(((c>>i) & 1))
        {
            case 0:
                diffCnt += ((a>>i) & 1) + ((b>>i) & 1);
                break;
                
            case 1:
                diffCnt += !(((a>>i) & 1) | ((b>>i) & 1));
                break;
                
        }
        
    }
    return diffCnt;
}