#include <stdio.h>
int insert_num(int a[],int size,int num,int ind)
{
	int n1,n2;
	size++;
	if(ind>=0&&ind<size)
	{
		n2=size-1;
		for(n1=size;n1>ind;n1--)
		{
			a[n1]=a[n2];
			--n2;
		}
		a[ind]=num;
	}
	else
	{
		printf("\nEnter the correct index....");
		return 0;
	}
	return size;
}
int main(void) 
{
	int a[20],size,num,ind,i,num2;
	printf("Enter the size of the array....");
	scanf("%d",&size);
	printf("\nEnter the elements in the array....");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to be inserted....");
	scanf("%d",&num);
	printf("\nEnter the index....");
	scanf("%d",&ind);
	num2=insert_num(a,size,num,ind);
	printf("\n");
	for(i=0;i<num2;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
