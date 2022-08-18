class Solution {
    public int[] sortByBits(int[] arr) 
    {
        Integer[] sorted = new Integer[arr.length];
        for(int i = 0; i < arr.length; i++)
            sorted[i] = arr[i];
        
        
        Arrays.sort(sorted, new Comparator<Integer>(){
            @Override
            public int compare(Integer a, Integer b){
                int aOnes = 0;
                for(int i = 0; i < 32; i++)
                    aOnes += (a >> i) & 1;
                
                int bOnes = 0;
                for(int i = 0; i < 32; i++)
                    bOnes += (b >> i) & 1;
                
                if(aOnes != bOnes)
                    return aOnes - bOnes;
                return a - b;
            }
        });
        
        for(int i = 0; i < arr.length; i++)
            arr[i] = sorted[i];
        
        return arr;
    }
}