class Solution {
    public int largestPerimeter(int[] nums) 
    {
        Arrays.sort(nums);
        
        for(int i = nums.length - 1; i - 2 >= 0; i--)
        {
            int len1 = nums[i];
            int len2 = nums[i - 1];
            int len3 = nums[i - 2];
            
            if(len2 + len3 <= len1)
                continue;
            
            return len1 + len2 + len3;
        }
        
        return 0;
    }
}