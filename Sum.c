#include <stdio.h>
//Sum of three numbers...


//using variables
int main(void)
{
	int a,b,c,d;
	printf("Enter three numbers....");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a+b+c);
	return 0;
}
//using array...
int main(void)
{
	int a[3];
	printf("Enter three numbers....");
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	printf("%d",a[0]+a[1]+a[2]);
	return 0;
}
//using function call...
int sum(int a,int b,int c)
{
	return a+b+c;
}
int main(void)
{
	int a,b,c,d;
	printf("Enter three numbers....");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",sum(a,b,c));
	return 0;
}
