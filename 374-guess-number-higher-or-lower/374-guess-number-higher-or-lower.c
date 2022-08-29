/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n)
{
	int  left  = 1;
	long right = n;
    int  mid;
    
    while(left <= right)
    {
        mid = (left + right)>>1;
        
        int g = guess(mid);
        if(g == 0)
            break;
        else if(g == -1)
            right = mid - 1;
        else
            left = mid + 1;
    }
    
    return mid;
}