#include <stdio.h>
void reverse(int);

int main(void) {
        int num;
        printf("Enter the number....");
        scanf("%d",&num);
        reverse(num);
        return 0;
}
void reverse(int num)
{
        int r,sum=0,num1=num;
        while(num!=0)
        {
                r=num%10;
                sum=(sum*10)+r;
                num=num/10;
        }
        printf("\nThe reverse of the number %d is....%d",num1,sum);
}
