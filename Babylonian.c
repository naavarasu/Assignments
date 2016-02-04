#include <stdio.h>
int main(void) 
{
	int num;
	float num2,g,accuracy=0.00001;
	printf("Enter the number.....");
	scanf("%d",&num);
	printf("\nEnter the guessing number less than num.....");
	scanf("%f",&g);
	num2=num;
	while((num2-g)>accuracy)
	{
		num2=(num2+g)/2;
		g=num/num2;
	}
	printf("\nThe square root is....%f",num2);
	return 0;
}
