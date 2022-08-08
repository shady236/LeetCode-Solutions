

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int left  = 0;
    int right = numbersSize - 1;
    
    while(left < right)
    {
        int sum = numbers[left] + numbers[right];
        
        if(sum == target)
            break;
        else if(sum > target)
            right--;
        else 
            left++;
    }
    
    int* res = malloc(2 * sizeof(int));
    *returnSize = 2;
    
    res[0] = left  + 1;
    res[1] = right + 1;
    
    return res;
}