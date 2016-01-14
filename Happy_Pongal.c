#include<stdio.h>
#include<unistd.h>
int main(void)
{
      char a[] = "HAPPY PONGAL";
	    int i=0;
      while(a[i]!='\0')
      {
		      printf("%c",a[i]);
		      sleep(2);
		      i++;
	    }
      return 0;
}
