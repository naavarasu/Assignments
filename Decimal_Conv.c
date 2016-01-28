#include <stdio.h>
void convert(int,int);
int main()
{
	int d_no,base,a;
	printf("Enter the decimal number between 1 to 36...");
	scanf("%d",&d_no);
	printf("\nEnter the base....");
	scanf("%d",&base);
	convert(d_no,base);
	return 0;
}
int convert(int d_no,int base)
{
	int i=0,j,r[10];
	while(d_no>0)
	{
		r[i++]=d_no%base;
		d_no=d_no/base;
	}
	for(j=--i;j>=0;j--)
	{
		if(r[j]<10)
		{
			printf("%c",r[j]+'0');
		}
		else
		{
			printf("%c",r[j]+55);
		}
	}
}
