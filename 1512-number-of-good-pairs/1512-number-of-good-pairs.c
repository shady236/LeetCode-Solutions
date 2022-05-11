

int numIdenticalPairs(int* nums, int numsSize)
{
    int cnt = 0;
    int freq[101] = {0};
    
    for(int i=0; i<numsSize; i++)
    {
        cnt += freq[nums[i]];
        freq[nums[i]]++;
    }
    
    return cnt;
}