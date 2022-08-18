class Solution {
    
    private static List<List<Integer>> permute(List<Integer> nums)
    {
        List<List<Integer>> res = new ArrayList<>();
        
        for(int i = 0; i < nums.size(); i++)
        {
            int e = nums.get(i);
            nums.remove(i);
            
            List<List<Integer>> nextPerm = permute(nums);
            if(nextPerm.size() == 0)
            {
                List<Integer> lst = new ArrayList<>();
                lst.add(e);
                res.add(lst);
            }
            else for(List<Integer> rem : nextPerm)
            {
                List<Integer> lst = new ArrayList<>();
                lst.add(e);
                lst.addAll(rem);
                res.add(lst);
            }
            
            nums.add(i, e);
        }
        
        return res;
    }
    
    public List<List<Integer>> permute(int[] nums)
    {
        List<Integer> arr = new ArrayList<>();
        for(int e : nums)
            arr.add(e);
        
        return permute(arr);
    }
}