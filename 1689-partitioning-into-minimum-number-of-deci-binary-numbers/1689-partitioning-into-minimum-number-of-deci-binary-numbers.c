

int minPartitions(char * n){
	int max = '0';
    
    for(int i = 0; n[i] && max < '9'; i++)
    {
        if(n[i] > max)
            max = n[i];
    }
    
    return max - '0';
}