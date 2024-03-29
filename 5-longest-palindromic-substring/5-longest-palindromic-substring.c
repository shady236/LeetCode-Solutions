
char * longestPalindrome(char * s)
{
    int len = strlen(s);
    
    char isPalindrome[1000][1000] = {0};
    
    for (int i = len - 1; i >= 0; i--)
    {
        isPalindrome[i][i] = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (s[i] == s[j])
                isPalindrome[i][j] = (j == i + 1) || isPalindrome[i + 1][j - 1];
        }
    }
    
    
    int maxLPS = 0;
    int maxLPSStrt = 0;
    int maxLPSEnd  = 0;
    
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (!isPalindrome[i][j])
                continue;
            
            int LPS = j - i + 1;
            if (LPS > maxLPS)
            {
                maxLPS = LPS;
                maxLPSStrt = i;
                maxLPSEnd  = j;
            }
        }
    }
    
    char* res = malloc((maxLPS + 1) * sizeof(char));
    for (int i = maxLPSStrt; i <= maxLPSEnd; i++)
        res[i - maxLPSStrt] = s[i];
    res[maxLPS] = 0;
    
    return res;
}