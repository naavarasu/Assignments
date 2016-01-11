#include <stdio.h>
int main(void)
{
      int a[10][10],i,j,size,num;
	    printf("Enter the size in odd interger...");
	    scanf("%d",&size);
      for(i=0;i<size;i++)
      {
    	        for(j=0;j<size;j++)
    	        {
                      a[i][j]=0;
	            }
      }
	    i=0;
	    j=size/2;
	    num=1;
	    while(num<=size*size)
	    {
		          if(a[i][j]==0)
		          {
			                a[i][j]=num;
			                num++;
			                --i;
			                if(i<0)
			                {
				                    i=size-1;
			                }
			                ++j;
			                if(j>=size)
			                {
				                    j=0;
			                }
		         }
		        else
		        {
		              i=(i+2)%size;
		              j--;
		              if(j<0)
		              {
		    	            j=size-1;
		              } 
		        }
	    }
	    printf("The magic square is...\n");
	    for(i=0;i<size;i++)
	    {
		        for(j=0;j<size;j++)
		        {
			            printf("%d\t",a[i][j]);
		        }
		        printf("\n");
	    }
  return 0;
}

