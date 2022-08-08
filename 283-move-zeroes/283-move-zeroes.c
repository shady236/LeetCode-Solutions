

void moveZeroes(int* nums, int numsSize)
{
    int idx = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
            continue;
        
        int tmp = nums[i];
        nums[i] = nums[idx];
        nums[idx] = tmp;
        idx++;
    }
}