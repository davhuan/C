#include <studio>
#include <stdlib>

int main(int argc, char** argv) {

{ int tal[100]; int i,j,temp,varde=0; printf("Slump tal mellan 100 till 800: \n" ); for(i=0;i<100;i++) { 	tal [i]=rand()%801+100;
printf("%d " ,tal[i]); 	varde=varde + tal[i]; 	if((i+1)%10==0){
printf("\n"); 	}
}
for(i=0;i<100;i++){ for(j=i+1;j<100;j++){ if(tal[i]>tal[j]){ temp=tal[i]; tal[i]=tal[j]; tal[j]=temp; }
}

}
printf("\n\ntal dags för sortering vad kul\n\n");
for (i=0;i<100;i++){ printf("%d ", tal[i]); if((i+1)%10==0){ printf("\n\n"); }

}
printf("\n\n\n\n Medelvärde är: %d",varde/100);
printf("\nStörsta värde är: %d",tal[99]);
printf("\nMinsta Värde är: %d",tal[0]);
printf("\nMedianen är: %d", (tal[50]+tal[49])/2);

 }
void test()
{
int sok[10]={10,42,33,42,56,46,27,18,69,11};
 int i,soktal,pos=-1; printf("Ange söktal: ");

scanf("%d",&soktal);
for(i=0;i<100;i++)
if(soktal==sok[i]) pos=i+1;
 if(pos>-1)
printf("talet finns på plats %i\n",pos);
 else
printf("Talet finns ej\n");
 }
 void sok(int tal[100])
 { //int sok(int tal)[100]{ int v=0,h=100,mitt, soktal;
 printf("Ange söktal: ");
scanf("%d",&soktal); while ((h-v) > 1) { mitt=(v+h)/2; if(soktal>=tal[mitt]) v=mitt;
else
 h=mitt; } if (soktal==tal[v]) printf("Talet finns på plats %d\n",v+1); else printf("Talet finns ej\n"); }
