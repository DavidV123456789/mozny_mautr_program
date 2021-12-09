/*
Zadanie:
Nacitajte 7 cisiel a poradie cisla od ktoreho chcete urobit posun do lava. Uvolnene pozicie na konci pola nahradte nulami. Pouzite len jedno pole
7 4 1 4 2 4 5 
nac:3
1 4 2 4 5 0 0

*/
#include<stdio.h>

int main(){
	
	
	int p[7];
	int i, q , j;
	printf("Zadajte cisla: ");
	for(i=0;i<=6;i++){
		scanf("%d",&p[i]);
	}
	printf("\n Zadajte cislo posunu: ");
	scanf("%d",&q);
	j=q-1;
	for(i=0;i<=6;i++){
		p[i]=p[j];
		j++;
		if(j>=8)
		{
			p[i]=0;
		}
	}
	
	printf("\nNove poradie: ");
	for( i=0;i<=6;i++){
		printf("%d ",p[i]);
	}
	
	
	
	
	
	
	return 0;
}
