
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}


int minOfThree(int a, int b, int c)
{
    return min(a, min(b, c));
}


int mincostTickets(int* days, int daysSize, int* costs, int costsSize)
{
    int minCost[365][3];
    for (int d = daysSize - 1; d >= 0; d--)
    {
        int day = days[d];
        
        int next1Day  = day + 1;
        int next7Day  = day + 7;
        int next30Day = day + 30;
        
        int next1DayIdx  = d + 1;
        while (next1DayIdx < daysSize && days[next1DayIdx] < next1Day)
            next1DayIdx++;
        
        int next7DayIdx  = next1DayIdx;
        while (next7DayIdx < daysSize && days[next7DayIdx] < next7Day)
            next7DayIdx++;
        
        int next30DayIdx  = next7DayIdx;
        while (next30DayIdx < daysSize && days[next30DayIdx] < next30Day)
            next30DayIdx++;
        
        
        if (next1DayIdx == daysSize)
            minCost[d][0] = costs[0];
        else 
            minCost[d][0] = costs[0] + minOfThree(minCost[next1DayIdx][0], minCost[next1DayIdx][1], minCost[next1DayIdx][2]);
        
        
        if (next7DayIdx == daysSize)
            minCost[d][1] = costs[1];
        else 
            minCost[d][1] = costs[1] + minOfThree(minCost[next7DayIdx][0], minCost[next7DayIdx][1], minCost[next7DayIdx][2]);
        
        
        if (next30DayIdx == daysSize)
            minCost[d][2] = costs[2];
        else 
            minCost[d][2] = costs[2] + minOfThree(minCost[next30DayIdx][0], minCost[next30DayIdx][1], minCost[next30DayIdx][2]);
        
    }
    
    
    return minOfThree(minCost[0][0], minCost[0][1], minCost[0][2]);
}