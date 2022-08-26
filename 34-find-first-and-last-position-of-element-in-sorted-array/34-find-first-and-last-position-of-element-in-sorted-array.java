class Solution {
    
    private static int[] searchRange(int[] nums, int left, int right, int target) 
    {
        if(left > right)
        {
            int[] res = {
                -1, -1
            };
            
            return res;
        }
        
        if(nums[left] == target && nums[right] == target)
        {
            int[] res = {
                left, right
            };
            
            return res;
        }
        
        
        int mid = (left + right) >> 1;
        
        if(nums[mid] > target)
            return searchRange(nums, left, mid - 1, target);
        if(nums[mid] < target)
            return searchRange(nums, mid + 1, right, target);
        
        // if(nums[mid] == target)
        int[] leftRes = searchRange(nums, left, mid - 1, target);
        int[] rightRes = searchRange(nums, mid + 1, right, target);
        
        
        int[] res = new int[2];
        if(leftRes[0] != -1)
            res[0] = leftRes[0];
        else 
            res[0] = mid;
        
        if(rightRes[1] != -1)
            res[1] = rightRes[1];
        else 
            res[1] = mid;
        
        return res;
    }
    
    public int[] searchRange(int[] nums, int target) 
    {
        return searchRange(nums, 0, nums.length - 1, target);
    }
}