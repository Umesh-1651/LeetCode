void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
int i=0,j=0;
	int c[m+n];
		i=0,j=0;
        int k=0;
		while(i<m && j<n)
	{
		if(nums1[i]<=nums2[j]) {
		c[k]=nums1[i];
		k++;
		i++;
	}
	else {
		c[k]=nums2[j];
		j++;
		k++;
	}
}
if(i<m){
	int s;
	while(i<m){
		c[k]=nums1[i];
		k++;
		i++;
		
	}
}
if(j<n){
	while(j<n){
	    c[k]=nums2[j];
		k++;
		j++;
		
	}
}
for(int z=0;z< m+n ;z++){
    nums1[z]=c[z];
}
}
