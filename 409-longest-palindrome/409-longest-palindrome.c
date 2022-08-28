

int longestPalindrome(char* s)
{
    int freq['z' + 1] = {0};
    
    for(int i = 0; s[i]; i++)
        freq[s[i]]++;
    
    int len = 0;
    for(int i = 0; i <= 'z'; i++)
    {
        if(freq[i] % 2 == 0)
            len += freq[i];
        else 
            len += freq[i] - 1;
    }
    
    for(int i = 0; i <= 'z'; i++)
    {
        if(freq[i] % 2 == 1)
        {
            len++;
            break;
        }
    }
    
    return len;
}