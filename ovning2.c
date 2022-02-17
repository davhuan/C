#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	
	int number[20],i,j,temp;
	
	printf("Write a number between 1-20");
	
	
	for(i=0;i<20;i++){
	number [i]=rand()%20+1;
	printf("%d ",number[i]);
		
	}
	
	return(0);
	
}
