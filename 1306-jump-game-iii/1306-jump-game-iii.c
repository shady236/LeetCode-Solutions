bool isStrtValid(int* arr, int arrSize, int start, char* isStrtValidDp, bool* isVisited)
{
    if(isStrtValidDp[start] != -1)
        return isStrtValidDp[start];
    
    if(arr[start] == 0)
    {
        isStrtValidDp[start] = true;
        return true;
    }
    
    isVisited[start] = false;    
    
    
    int next1 = start + arr[start];
    
    if(next1 < arrSize && !isVisited[next1])
    {
        isStrtValidDp[start] = isStrtValid(arr, arrSize, next1, isStrtValidDp, isVisited);
    }
    else 
    {
        isStrtValidDp[start] = false;
    }
    
    
    int next2 = start - arr[start];
    
    if(next2 >= 0 && !isVisited[next2])
    {
        isStrtValidDp[start] |= isStrtValid(arr, arrSize, next2, isStrtValidDp, isVisited);
    }
    
    isVisited[start] = false;
    
    return isStrtValidDp[start];
}


bool canReach(int* arr, int arrSize, int start)
{
    char isStrtValidDp[50000];
    
    for(int i = 0; i < arrSize; i++)
        isStrtValidDp[i] = -1;
    
    bool isVisited[50000] = {false};
    
    return isStrtValid(arr, arrSize, start, isStrtValidDp, isVisited);
}