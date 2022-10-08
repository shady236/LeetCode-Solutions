
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


int addDigits(int num)
{
    while (num / 10)
        num = digitsSum(num);
    return num;
}