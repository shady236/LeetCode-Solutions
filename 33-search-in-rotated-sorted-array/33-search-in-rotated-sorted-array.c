
int binarySearch(int* nums, int numsSize, int target)
{
    int left  = 0;
    int right = numsSize - 1;
    
    while(left <= right)
    {
        int mid = (left + right) >> 1;
        
        if(nums[mid] == target)
            return mid;
        else if(target < nums[mid])
            right = mid - 1;
        else 
            left  = mid + 1;
    }
    
    return -1;
}


int search(int* nums, int numsSize, int target)
{
    if (nums[0] <= nums[numsSize - 1])
        return binarySearch(nums, numsSize, target);
    
    int left  = 0;
    int right = numsSize - 1;
    int pivot;
    while(left <= right)
    {
        if (nums[left] <= nums[right])
        {
            pivot = left;
            break;
        }
        
        pivot = (left + right) >> 1;
        
        if(pivot > 0 && nums[pivot] < nums[pivot - 1])
            break;
        else if(nums[pivot] < nums[left])
            right = pivot - 1;
        else 
            left  = pivot + 1;
    }
    
    
    if(target >= nums[0])
        return binarySearch(nums, pivot, target);
    
    int shift = binarySearch(nums + pivot, numsSize - pivot, target);
    if(shift != -1)
        return pivot + shift;
    return -1;
}