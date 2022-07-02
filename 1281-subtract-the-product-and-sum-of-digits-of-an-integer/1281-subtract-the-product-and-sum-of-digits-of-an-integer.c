

int subtractProductAndSum(int n)
{
    char str[10] = {0};
    sprintf(str, "%d", n);
    
    int sum = 0;
    int prod = 1;
    for(int i = 0; str[i]; i++)
    {
        int d = str[i] - '0';
        
        sum += d;
        prod *= d;
    }
    
    return prod - sum;
}