

bool isAnagram(char * s, char * t)
{
    if(strlen(s) != strlen(t))
        return false;
    
    
    int totFreq[26] = {0};
    for(int i = 0; s[i]; i++)
        totFreq[s[i] - 'a']++;
    for(int i = 0; t[i]; i++)
    
    {
        totFreq[t[i] - 'a']--;
        if(totFreq[t[i] - 'a'] < 0)
            return false;
    }
    
    return true;
}