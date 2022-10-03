
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}


int longestPalindromeSubseq(char * s)
{
    int len = strlen(s);
    
    int substringLPS[1000][1000] = {0};
    
    for (int i = len - 1; i >= 0; i--)
    {
        substringLPS[i][i] = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
                substringLPS[i][j] = 2 + substringLPS[i + 1][j - 1];
            else 
                substringLPS[i][j] = max(substringLPS[i + 1][j], substringLPS[i][j - 1]);
        }
    }
    
    
    return substringLPS[0][len - 1];
}