class Solution {
    public int[][] kClosest(int[][] points, int k) 
    {
        Arrays.sort(points, new Comparator<int[]>(){
            @Override
            public int compare(int[] p1, int[] p2)
            {
                int d1 = p1[0] * p1[0] + p1[1] * p1[1];
                int d2 = p2[0] * p2[0] + p2[1] * p2[1];
                
                return d1 - d2;
            }
        });
        
        int[][] res = new int[k][2];
        for(int i = 0; i < k; i++)
        {
            res[i][0] = points[i][0];
            res[i][1] = points[i][1];
        }
        
        return res;
    }
}