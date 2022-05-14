

int countConsistentStrings(char * allowed, char ** words, int wordsSize)
{
    char isCharAllowed['z' + 1] = {0};
    for(int i=0; allowed[i]; i++)
        isCharAllowed[allowed[i]] = 1;
    
    int cnt = 0;
    for(int i=0; i<wordsSize; i++)
        for(int j=0; words[i][j]; j++)
            if(!isCharAllowed[words[i][j]])
                break;
            else if(words[i][j+1] == 0)
                cnt++;
    
    return cnt;
}