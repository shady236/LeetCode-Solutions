

int countConsistentStrings(char * allowed, char ** words, int wordsSize)
{
    char isCharAllowed[26] = {0};
    for(int i=0; allowed[i]; i++)
        isCharAllowed[allowed[i] - 'a'] = 1;
    
    int cnt = 0;
    for(int i=0; i<wordsSize; i++)
        for(int j=0; words[i][j]; j++)
            if(!isCharAllowed[words[i][j] - 'a'])
                break;
            else if(words[i][j+1] == 0)
                cnt++;
    
    return cnt;
}