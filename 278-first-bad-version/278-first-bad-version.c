// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) 
{
    int min = 1;
    int max = n;
    int minBad = -1;
    
    while(min <= max)
    {
        int mid = (min + (long long)max)>>1;
        
        if(isBadVersion(mid))
        {
            max = mid - 1;
            minBad = mid;
        }
        else 
        {
            min = mid + 1;
        }
    }
    
    return minBad;
}