
#define  GET_BIT(x, bit)        (((x)>>(bit)) & 1)

bool isPowerOfFour(int n)
{
    int onesCount = 0;
    int zerosBoforeFirstOne = 0;
    
    for(int i=0; i<32; i++)
    {
        switch(GET_BIT(n, i))
        {
            case 1:
                onesCount++;
                break;
                
            case 0:
                if(onesCount == 0)      zerosBoforeFirstOne++;
                break;
        }
    }
    
    if(onesCount == 1 && zerosBoforeFirstOne % 2 == 0)      return true;
    return false;
}