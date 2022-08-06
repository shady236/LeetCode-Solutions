
int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}


int jump(int* nums, int numsSize)
{
    int minJump[10000];
    
    minJump[numsSize - 1] = 0;
    
    for(int i = numsSize - 2; i >= 0; i--)
    {
        if(i + nums[i] >= numsSize - 1)
        {
            minJump[i] = 1;
            continue;
        }
        
        minJump[i] = 100000000;
        for(int j = i + 1; j <= i + nums[i]; j++)
        {
            minJump[i] = min(minJump[i], minJump[j] + 1);
        }
    }
    
    return minJump[0];
}