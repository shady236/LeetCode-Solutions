

char * breakPalindrome(char * palindrome)
{
    int len = strlen(palindrome);
    
    if (len == 1)
    {
        char* res = malloc(sizeof(char));
        res[0] = 0;
        return res;
    }
    
    int mid = -1;
    if (len % 2 == 1)
        mid = len >> 1;
    
    for (int i = 0; i < len; i++)
    {
        if (i == mid)
            continue;
        
        if (palindrome[i] > 'a')
        {
            palindrome[i] = 'a';
            break;
        }
        else if (i == len - 1)
        {
            palindrome[i] = 'b';
        }
    }
    
    return palindrome;
}