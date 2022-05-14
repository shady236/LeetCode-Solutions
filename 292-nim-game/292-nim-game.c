

bool canWinNim(int n)
{
    if(n & 0b11)       return true;
    return false;
}