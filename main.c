#include <stdio.h>
#include "dvojkova.h"

int main(){
	int k;
	int a;
	int j;
	printf("Ak z desiatkovej do dvojkovej zadaj 1, opaène 2");
	scanf("%d", &k);
	
		printf("Zadaj cislo");
		scanf("%d", &a);
	
	if(k=1){
			 getdvojkova(a);
		
	}
	else if(k=2){
			 getdesiatkova(a);
		
	}
	else{
		printf("\n Zka hodnota");
	}
	
	for(j=0;j=24;j++){
		printf("%d", pole[j]);
		
	}
	
	return 0;
}

