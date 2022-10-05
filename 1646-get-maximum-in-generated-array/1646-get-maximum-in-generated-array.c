
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}


int arrMax(int* arr, int size)
{
    int res = arr[0];
    
    for (int i = 0; i < size; i++)
        res = max(res, arr[i]);
    
    return res;
}


int getMaximumGenerated(int n)
{
    if (n == 0)
        return 0;
    
    int arr[200];
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i >> 1];
        
        if (i & 1)
            arr[i] += arr[(i >> 1) + 1];
    }
    
    return arrMax(arr, n + 1);
}