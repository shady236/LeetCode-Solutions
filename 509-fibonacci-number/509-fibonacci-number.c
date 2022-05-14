

int fib(int n)
{
    if(n <= 1)      return n;
    
    int prevFib2 = 0;
    int prevFib1 = 1;
    int res = 1;
    for(int i=2; i<n; i++)
    {
        prevFib2 = prevFib1;
        prevFib1 = res;
        res = prevFib1 + prevFib2;
    }
    
    return res;
}