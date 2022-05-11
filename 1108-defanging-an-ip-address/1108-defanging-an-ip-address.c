

char* defangIPaddr(char* address)
{
    char* res = malloc(22);
    char  resIdx = 0;
    while(*address)
    {
        switch(*address)
        {
            case '.':
                res[resIdx++] = '[';
                res[resIdx++] = '.';
                res[resIdx++] = ']';
                break;
                
            default:
                res[resIdx++] = *address;
                break;
        }
        address++;
    }
    res[resIdx] = 0;
    return res;
}