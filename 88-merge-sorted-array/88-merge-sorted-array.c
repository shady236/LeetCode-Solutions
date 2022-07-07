

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int* res = malloc((m + n) * sizeof(int));
	
	int nums1Idx = 0;
	int nums2Idx = 0;
	int resIdx = 0;
    
	while ((nums1Idx < m) && (nums2Idx < n))
	{
		if(nums1[nums1Idx] < nums2[nums2Idx])
		{
			res[resIdx] = nums1[nums1Idx];
			nums1Idx++;
		}
		else
		{
			res[resIdx] = nums2[nums2Idx];
			nums2Idx++;
		}
		resIdx++;
	}
	
	while (nums1Idx < m)
	{
		res[resIdx] = nums1[nums1Idx];
        nums1Idx++;
        resIdx++;
	}
	
	while (nums2Idx < n)
	{
		res[resIdx] = nums2[nums2Idx];
        nums2Idx++;
        resIdx++;
	}
    
    for(int i = 0; i < nums1Size; i++)
        nums1[i] = res[i];
}