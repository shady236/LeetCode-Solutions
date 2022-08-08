

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int* res = malloc(2 * sizeof(int));
    *returnSize = 2;
    
    res[0]  = 0;        // left 
    res[1] = numbersSize - 1;       // right 
    
    while(res[0] < res[1])
    {
        int sum = numbers[res[0]] + numbers[res[1]];
        
        if(sum == target)
            break;
        else if(sum > target)
            res[1]--;
        else 
            res[0]++;
    }
    
    res[0]++;
    res[1]++;
    
    return res;
}