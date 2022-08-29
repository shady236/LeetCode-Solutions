

bool isPerfectSquare(int num)
{
    int  left  = 1;
	long right = num;
    long mid;
    long square;
    
    while(left <= right)
    {
        mid = (left + right)>>1;
        square = mid * mid;
        
        if(square == num)
            break;
        else if(square > num)
            right = mid - 1;
        else
            left = mid + 1;
    }
    
    return (square == num);
}