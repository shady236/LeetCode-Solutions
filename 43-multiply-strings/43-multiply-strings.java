class Solution {
    
    public StringBuilder add(StringBuilder num1, StringBuilder num2) 
    {
        StringBuilder res = new StringBuilder("");
        
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int rem = 0;
        
        while(i >= 0 && j >= 0)
        {
            int dgt1 = num1.charAt(i) - '0';
            int dgt2 = num2.charAt(j) - '0';
            int sum = dgt1 + dgt2 + rem;
            
            char ch = (char)(sum % 10 + '0');
            rem = sum / 10;
            
            res.append(ch);
            
            i--;
            j--;
        }
        
        while(i >= 0)
        {
            int dgt1 = num1.charAt(i) - '0';
            int sum = dgt1 + rem;
            
            char ch = (char)(sum % 10 + '0');
            rem = sum / 10;
            
            res.append(ch);
            
            i--;
        }
        
        while(j >= 0)
        {
            int dgt2 = num2.charAt(j) - '0';
            int sum = dgt2 + rem;
            
            char ch = (char)(sum % 10 + '0');
            rem = sum / 10;
            
            res.append(ch);
            
            j--;
        }
        
        if(rem > 0)
            res.append(rem);
        
        res = res.reverse();
        return res;
    }
    
    
    public StringBuilder multiply(String num, int factor, int zerosShift) 
    {
        if(factor == 0)
            return new StringBuilder("0");
        
        StringBuilder res = new StringBuilder("");
        
        int rem = 0;
        for(int i = num.length() - 1; i >= 0; i--)
        {
            int dgt = num.charAt(i) - '0';
            int mul = dgt * factor + rem;
            char ch = (char)(mul % 10 + '0');
            rem = mul / 10;
            
            res.append(ch);
        }
        
        if(rem > 0)
            res.append(rem);
        
        res = res.reverse();
        for(int i = 0; i < zerosShift; i++)
            res.append("0");
        return res;
    }
    
    
    public String multiply(String num1, String num2) 
    {
        if(num1.length() < num2.length())
            return multiply(num2, num1);
        
        
        StringBuilder res = new StringBuilder("0");
        
        int dgtNum = 0;
        for(int i = num2.length() - 1; i >= 0; i--)
        {
            res = add(
                res,
                multiply(num1, num2.charAt(i) - '0', dgtNum)
            );
            dgtNum++;
        }
        
        return res.toString();
    }
}