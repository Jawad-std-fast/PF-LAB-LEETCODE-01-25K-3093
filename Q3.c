#include <stdio.h>
int main()
{
	int i,size,counta=0,countb=0;
	printf("Enter the amount of numbers you to enter:");
	scanf("%d",&size);
	int nums[size];
	printf("Enter %d numbers:\n", size);
	for(i=0;i<size;i++){
		scanf("%d",&nums[i]);
	}
	for(i=0;i<size;i++){
		if(nums[i]%2==0){
			counta++;
		}
		else{
			countb++;
		}
	}
	printf("[");
	for(i=0;i<counta;i++){
		printf("0,");
	}
	for(i=0;i<countb;i++){
		printf("1");
		if (i<countb-1) {
			printf(",");
		}
	}
	printf("]");
	return 0;
}