class Solution {
    public int maxCoins(int[] piles) 
    {
        Arrays.sort(piles);
        
        int coins = 0;
        
        int left  = 0;
        int right = piles.length - 1;
        
        while (left < right)
        {
            coins += piles[right - 1];
            left++;
            right -= 2;
        }
        
        return coins;
    }
}