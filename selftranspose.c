
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int **a;
    int i,j,t,s;
    printf("Enter the size");
    scanf("%d",&s);
    a=(int**)malloc(s*sizeof(int*));
    for(i=0;i<s;i++)
    {
          a[i]=(int*)malloc(s*sizeof(int));
    }
    for(i=0;i<s;i++)
    {
          for(j=0;j<s;j++)
          {
                scanf("%d",&a[i][j]);
          }
    }
    for(i=0;i<s-1;i++)
    {
          for(j=i+1;j<s;j++)
          {
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
          }
    }
    display(a,s);
    return 0;
}
void display(int** a,int s)
{
    int i,j;
    printf("The self transposed matrix\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}    
