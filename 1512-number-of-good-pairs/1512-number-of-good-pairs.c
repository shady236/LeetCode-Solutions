

int numIdenticalPairs(int* nums, int numsSize)
{
    int cnt = 0;
    
    for(char i=0; i<numsSize-1; i++)
        for(char j=i+1; j<numsSize; j++)
            if(nums[i] == nums[j])
                cnt++;
    
    return cnt;
}