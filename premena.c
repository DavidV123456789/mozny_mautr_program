#include "dvojkova.h"

int getdvojkova(int V){
	int b;
	int c;
	int j;

	int pole[25];
	
	j=0;
	
	while(V!=0){
		c = V/2;
		
		if(c % 2){
			b = 0;
			pole[j]= b;
		}
		else{
			b = 1;
			pole[j]= b;
		}
		V=c;
		
	}
	return pole[25];
}
int getdesiatkova(int V){
	int v;
	int j;
	int c;
	int n;
	int m;
	
	
	j=0;
	
	while(V!=0){
		c= V%10;
		if(c=1){
			n = 1 * 2^j;
			m+=n
		}
		else if(c=0){
			
		}
		else{
			printf("\n Chyba pri rozklade");
		}
		j+=1
		V/=10;
	}
	return v;
}
