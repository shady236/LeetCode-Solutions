/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution 
{
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) 
    {
        if(cloned == null)
            return null;
        
        if(target.val == cloned.val)
            return cloned;
        
        TreeNode l = getTargetCopy(original, cloned.left, target);
        
        if(l != null)
            return l;
        
        TreeNode r = getTargetCopy(original, cloned.right, target);
        return r;
    }
}