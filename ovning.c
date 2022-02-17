#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		
		int tal [30];
		int i,j,temp;
		
		
		srand(time(NULL));
		for(i=0;i<30;i++){
		tal[i]=rand()%100+1;
		printf("%d ",tal[i]);
		
		
		}	

	for(i=0;i<30;i++){
		for(j=i+1;j<30;j++){
			
			if(tal[i]>tal[j]){
				temp=tal[i];
				tal[i]=tal[j];
				tal[j]=temp;
			}		
		}
	}
	
	printf("\n Time for sort\n");
	for(i=0;i<30;i++){
		printf("%d ",tal[i]);
	}






	return 0;
}
