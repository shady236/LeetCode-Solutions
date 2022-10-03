

int countSubstrings(char * s)
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
    
    
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cnt += isPalindrome[i][j];
        }
    }
    
    return cnt;
}