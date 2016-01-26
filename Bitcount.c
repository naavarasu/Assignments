#include <stdio.h>
int noofdigits(int);
int main()
{
	  int num,num1;
	  printf("Enter the number\n");
	  scanf("%d",&num);
	  num1=num;
	  printf("%d",noofdigits(num1));
	  return 0;
}
int noofdigits(int num1)
{
	  int i=0;
	  if(num1==0)
	  {
		    i++;
	  }
	  else 
	  {
	  	while(num1>0)
		  {
			   num1=num1/2;
			   i++;
		  }
	  }
	  return(i);
}
