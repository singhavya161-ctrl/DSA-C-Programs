#include<stdio.h>
int main()
{
	int n,i,key;
	printf("enter no. of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter sorted elemts:\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int low=0,high=n-1,mid;
	printf("enter element to search:");
	scanf("%d",&key);
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			printf("found at index %d\n",mid);
			return 0;
	}
	else if (arr[mid]<key){
		low=mid+1;
	}
	else{
		high=mid-1;
	}
}
	printf("not found\n");
	return 0;
}

