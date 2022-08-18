/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    private static List<Integer> getLvl(TreeNode root, int lvl)
    {
        List<Integer> res = new ArrayList<>();
        
        if(root == null)
            return res;
        
        if(lvl == 0)
        {
            res.add(root.val);
            return res;
        }
        
        res.addAll(getLvl(root.left, lvl - 1));
        res.addAll(getLvl(root.right, lvl - 1));
        
        return res;
    }
    
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> res = new ArrayList<>();
        
        int lvl = 0;
        while(true)
        {
            List<Integer> lvlValues = getLvl(root, lvl);
            
            if(lvlValues.size() > 0)
                res.add(lvlValues);
            else 
                break;
            
            lvl++;
        }
        
        return res;
    }
}