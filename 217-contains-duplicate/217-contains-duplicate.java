class Solution {
    public boolean containsDuplicate(int[] nums) 
    {
        HashMap<Integer, Boolean> isAppeared = new HashMap<>();
        for(int i = 0; i < nums.length; i++)
        {
            if(isAppeared.containsKey(nums[i]))
                return true;
            
            isAppeared.put(nums[i], true);
        }
        
        return false;
    }
}