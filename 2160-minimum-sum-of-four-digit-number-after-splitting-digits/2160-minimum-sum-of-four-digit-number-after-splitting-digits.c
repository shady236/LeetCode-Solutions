

int minimumSum(int num)
{
    unsigned char digit[4];
    for(unsigned char i=0; i<4; i++)
    {
        digit[i] = num % 10;
        num /= 10;
    }
    
    
    for(unsigned char i=0; i<3; i++)
    {
        unsigned char minIdx = i;
        for(int j=i+1; j<4; j++)
            if(digit[j] < digit[minIdx])
                minIdx = j;
        if(i != minIdx)
        {
            digit[minIdx] ^= digit[i];
            digit[i]      ^= digit[minIdx];
            digit[minIdx] ^= digit[i];
        }
    }
    
    
    return (digit[0] + digit[1]) * 10UL + digit[2] + digit[3];
    
}