
int digitsSum(int n)
{
    int sum = 0;
    
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

int getLucky(char * s, int k)
{
    int val = 0;
    
    for (int i = 0; s[i]; i++)
        val += digitsSum(s[i] - 'a' + 1);
    
    k--;
    while (k)
    {
        val = digitsSum(val);
        k--;
    }
    
    return val;
}