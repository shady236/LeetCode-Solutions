

int numJewelsInStones(char * jewels, char * stones)
{
    int cnt = 0;
    
    char isCharJewel['z' + 1] = {0};
    for(int i=0; jewels[i]; i++)
        isCharJewel[jewels[i]] = 1;
    
    for(int i=0; stones[i]; i++)
        if(isCharJewel[stones[i]])
            cnt++;
    
    return cnt;
}