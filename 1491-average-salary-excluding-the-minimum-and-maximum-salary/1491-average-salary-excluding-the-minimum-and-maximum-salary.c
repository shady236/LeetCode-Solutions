

double average(int* salary, int salarySize)
{
    int min = salary[0];
    int max = salary[1];
    
    if(min > max)
    {
        min = salary[1];
        max = salary[0];    
    }
    
    int sum = 0;
    
    for(int i = 2; i < salarySize; i++)
    {
        if(salary[i] > max)
        {
            sum += max;
            max = salary[i];
        }
        else if(salary[i] < min)
        {
            sum += min;
            min = salary[i];
        }
        else 
        {
            sum += salary[i];
        }
    }
    
    return sum / (salarySize - 2.0);
}