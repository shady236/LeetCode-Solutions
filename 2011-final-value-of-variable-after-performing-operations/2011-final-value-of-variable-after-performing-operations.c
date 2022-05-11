

int finalValueAfterOperations(char ** operations, int operationsSize)
{
    int x = 0;
    for(int i=0; i<operationsSize; i++)
    {
        switch(operations[i][1])
        {
            case '+':
                x++;
                break;
            case '-':
                x--;
                break;
        }
    }
    return x;
}