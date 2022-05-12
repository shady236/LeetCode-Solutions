

int numberOfSteps(int num)
{
    int onesCnt = 0;
    int mostSignificantOnePos = 0;
    for(int i=0; i<21; i++)
    {
        if((num>>i) & 1)
        {
            onesCnt++;
            mostSignificantOnePos = i;
        }
    }
    return onesCnt + mostSignificantOnePos;
}