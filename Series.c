#include <stdio.h>
void ap(int,int,int);
void gp(int,int,int);
int main(void) 
{
	int s_num,d,num,r,c;
	printf("\nEnter the start number....");
	scanf("%d",&s_num);
	printf("\nEnter the difference....");
	scanf("%d",&d);
	printf("\nEnter the ratio...");
	scanf("%d",&r);
	printf("\nEnter the number of integers....");
	scanf("%d",&num);
	printf("\nPress 1 for Ap...\nPress 2 for Gp...");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			ap(s_num,d,num);
			break;
		case 2:
			gp(s_num,r,num);
			break;
		default:
			break;
	}
	
	// your code goes here
	return 0;
}
void ap(int s_num,int d,int num)
{
	int i;
	printf("\nThe Ap series is.....");
	for(i=1;i<=num;i++)
	{
		printf("%d\t",s_num);
		s_num=s_num+d;
		
	}
}
void gp(int s_num,int r,int num)
{
	int i;
	printf("\nThe Gp series is.....");
	for(i=1;i<=num;i++)
	{
		printf("%d\t",s_num);
		s_num=s_num*r;
		
	}
}
