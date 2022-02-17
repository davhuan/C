#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, sum=0;
	
	for(i=1;i<17;i+=3)
	{
		sum+=i;
	}
      
	  printf("Summan är %i\n", sum);
	  sum=0;
	  i=1;
	  while(i<17)
	  {
	  	sum+=i;
	  	i+=3;
	  }
	  printf("Summan är %i\n", sum);
	  sum=0;
	  i=1;
	  printf("Svaret är %i\n", 1+4+7+10+13+16);
	  system("PAUSE");
	  
	  
	return 0;
}
