#include <stdio.h>
int inarray(int[],int,int);
int main(void) 
{
	int a[50],i,num,inx,size;
	printf("Enter the size of the array.....");
	scanf("%d",&size);
	printf("\nEnter the elements in the array.....");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to be find.....");
	scanf("%d",&num);
	inx=inarray(a,num,size);
	printf("\n%d",inx);
	return 0;
}
int inarray(int a[5],int num,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==num)
			break;
	}
	if(i<size)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
