#include <stdio.h>
int main(){
	int i,size,nums[10];
	printf("Enter the amount of numbers you to enter:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&nums[i]);
	}
	for(i=1;i<size;i++){
		nums[i]=nums[i]+nums[i-1];
	}
	printf("[");
	for(i=0;i<size;i++){
		printf("%d",nums[i]);
		if (i<size-1) 
		{
			printf(", ");
		}
	}
	printf("]");
	return 0;
}