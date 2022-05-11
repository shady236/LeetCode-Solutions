

int mostWordsFound(char ** sentences, int sentencesSize)
{
    int max = 1;
    for(int i=0; i<sentencesSize; i++)
    {
        int wordScount = 1;
        for(int j=0; sentences[i][j]; j++)
            if(sentences[i][j] == ' ')
                wordScount++;
        
        if(wordScount > max)        max = wordScount;
    }
    return max;
}