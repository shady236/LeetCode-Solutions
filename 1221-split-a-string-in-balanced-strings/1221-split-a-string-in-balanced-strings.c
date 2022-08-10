

int balancedStringSplit(char* s)
{
    int totCnt = 0;
    
    int lCnt = 0;
    int rCnt = 0;
    
    for(int i = 0; s[i]; i++)
    {
        switch(s[i])
        {
            case 'L':
                lCnt++;
            break;
            
            case 'R':
                rCnt++;
            break;
        }
        
        if(lCnt == rCnt)
        {
            totCnt++;
            lCnt = 0;
            rCnt = 0;
        }
    }
    
    return totCnt;
}