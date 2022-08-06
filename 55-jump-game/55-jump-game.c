

bool canJump(int* nums, int numsSize)
{
    int nextValidStrtIdx = numsSize - 1;
    
    for(int i = numsSize - 2; i >= 0; i--)
    {
        if(i + nums[i] >= nextValidStrtIdx)
            nextValidStrtIdx = i;
    }
    
    return (nextValidStrtIdx == 0);
}