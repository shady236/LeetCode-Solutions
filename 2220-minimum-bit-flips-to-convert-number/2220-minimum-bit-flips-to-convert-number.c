

int minBitFlips(int start, int goal)
{
    int diffCnt = 0;
    
    for(int i=0; i<32; i++)
        diffCnt += ((start>>i) & 1) ^ ((goal>>i) & 1);
    
    return diffCnt;
}