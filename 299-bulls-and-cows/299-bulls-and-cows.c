
int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

char * getHint(char * secret, char * guess)
{
    int bulls = 0;
    for(int i = 0; secret[i]; i++)
        bulls += secret[i] == guess[i];
    
    
    int secFreq[10] = {0};
    for(int i = 0; secret[i]; i++)
        secFreq[secret[i] - '0']++;
    
    int gusFreq[10] = {0};
    for(int i = 0; guess[i]; i++)
        gusFreq[guess[i] - '0']++;
    
    int cows = 0;
    for(int i = 0; i < 10; i++)
        cows += min(secFreq[i], gusFreq[i]);
    
    cows -= bulls;
    
    static char res[2000];
    sprintf(res, "%dA%dB", bulls, cows);
    return res;
}