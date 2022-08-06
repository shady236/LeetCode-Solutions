

int searchInsert(int* nums, int numsSize, int target)
{
    int leftIdx  = 0;
    int rightIdx = numsSize - 1;
    int midIdx;
    
    while(leftIdx <= rightIdx)
    {
        midIdx = (leftIdx + rightIdx) >> 1;
        
        if(nums[midIdx] == target)
            break;
        else if(nums[midIdx] > target)
            rightIdx = midIdx - 1;
        else if(nums[midIdx] < target)
            leftIdx = midIdx + 1;
    }
    
    if(nums[midIdx] >= target)
        return midIdx;
    return midIdx + 1;
}