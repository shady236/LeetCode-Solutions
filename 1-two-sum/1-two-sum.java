class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        int[] initNums = new int[nums.length];
        
        for(int i = 0; i < nums.length; i++)
            initNums[i] = nums[i];
        
        Arrays.sort(nums);
        
        int strtIdx = 0;
        int endIdx  = nums.length - 1;
        
        while(strtIdx < endIdx)
        {
            int sum = nums[strtIdx] + nums[endIdx];
            
            if(sum > target)
                endIdx--;
            else if(sum < target)
                strtIdx++;
            else
                break;
        }
        
        
        int[] res = new int[2];
        for(int i = 0; i < nums.length; i++)
        {
            if(initNums[i] == nums[strtIdx])
            {
                res[0] = i;
                break;
            }
        }
        
        for(int i = 0; i < nums.length; i++)
        {
            if(initNums[i] == nums[endIdx] && i != res[0])
            {
                res[1] = i;
                break;
            }
        }
        
        
        return res;
    }
}