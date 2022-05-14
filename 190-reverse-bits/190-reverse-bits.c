#define GET_BIT(x, bit)     (((x)>>(bit)) & 1)

uint32_t reverseBits(uint32_t n)
{
    for(int i=0; i<16; i++)
    {
        n ^= GET_BIT(n, 31 - i)<<i;
        n ^= GET_BIT(n, i)<<(31 - i);
        n ^= GET_BIT(n, 31 - i)<<i;
    }
    return n;
}