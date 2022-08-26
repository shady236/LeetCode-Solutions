

bool backspaceCompare(char * s, char * t)
{
    int sTop = -1;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == '#' && sTop > -1)
            sTop--;
        else if(s[i] != '#')
            s[++sTop] = s[i];
    }
    s[++sTop] = 0;
    
    
    int tTop = -1;
    for(int i = 0; t[i]; i++)
    {
        if(t[i] == '#' && tTop > -1)
            tTop--;
        else if(t[i] != '#')
            t[++tTop] = t[i];
    }
    t[++tTop] = 0;
    
    
    if(strcmp(s, t) == 0)
        return true;
    return false;
}