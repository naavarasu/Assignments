#include <stdio.h>
int main(void) 
{
	int num,i,f=0;
	printf("Enter the number.....");
	scanf("%d",&num);
	num++;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			num++;
		}
		f=1;
	}
	if(f==1)
	{
		printf("\nThe next prime is......%d",num);
	}
	return 0;
}
