#include <stdio.h>

int main(void) 
{
	int s_num,num,d,i=1;
	printf("Enter the start number.....");
	scanf("%d",&s_num);
	printf("\nEnter the difference.....");
	scanf("%d",&d);
	printf("\nEnter the number of integers.....");
	scanf("%d",&num);
	while(i<=num)
	{
		printf("%d\t",s_num);
		s_num=s_num+d;
		i++;
	}
	// your code goes here
	return 0;
}
