

int nearestValidPoint(int x, int y, int** points, int pointsSize, int* pointsColSize)
{
    int minDistance = 1000000;
    int minDistanceIdx = -1;
    
    for(int i = 0; i < pointsSize; i++)
    {
        int xi = points[i][0];
        int yi = points[i][1];
        if(xi == x || yi == y)
        {
            int d = abs(x - xi) + abs(y - yi);
            
            if(d < minDistance)
            {
                minDistance = d;
                minDistanceIdx = i;
            }
        }
    }
    
    return minDistanceIdx;
}