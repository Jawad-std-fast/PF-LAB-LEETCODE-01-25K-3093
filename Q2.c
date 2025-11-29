#include <stdio.h>
int main(){
	int i,n,size;
	printf("Enter the amount of numbers you to enter\n");
	do{
		printf("The size should be even:");
		scanf("%d",&size);
	}while(size%2!=0);
	int nums[size],result[size];
	printf("Enter %d numbers:\n", size);
	for(i=0;i<size;i++){
		scanf("%d",&nums[i]);
	}
	n=size/2;
    for(i = 0; i < n; i++) {
        result[2*i] = nums[i];
        result[2*i + 1] = nums[i + n];
    }
    printf("[");
	for(i=0;i<size;i++){
		printf("%d",result[i]);
		if (i<size-1) {
			printf(",");
		}
	}
	printf("]");
}