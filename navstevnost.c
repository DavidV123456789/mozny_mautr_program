#include<stdio.h>

int main(){
	int s, j ,i, n, max;
	int a[24];
	s=1;
	printf("Nacitajte mnozstvo zakaznikov: ");
	scanf("%d", &n);
	int pole[24];
	for(j=0;j<=24;j++)
	{
		a[j]=0;
	}
	for(j=0;j<=24;j++)
	{
		pole[j]=0;
	}
	for(i=0;i<=n-1;i++){
	
	printf("\nNacitajte vstup %d zakaznika : ", s);
	scanf("%d", &pole[0]);
	printf("\nNacitajte odchod %d zakaznika: ", s);
	scanf("%d", &pole[23]);
	/*
	for(j=0;j<=2;){
	
	scanf("%d", &pole[j]);
	
	j=24;
	}*/
	s++;
	j=1;
	pole[j]=-1;
	while(pole[j]!=pole[23]){
		
		if(pole[0]==pole[23]-1){
			break;
		}
		
	pole[j]=pole[j-1]+1;
	printf("%d", pole[j]);
	switch(pole[j]){
		case 1: a[0]++;break;
		case 2: a[1]++;break;
		case 3: a[2]++;break;
		case 4: a[3]++;break;
		case 5: a[4]++;break;
		case 6: a[5]++;break;
		case 7: a[6]++;break;
		case 8: a[7]++;break;
		case 9: a[8]++;break;
		case 10: a[9]++;break;
		case 11: a[10]++;break;
		case 12: a[11]++;break;
		case 13: a[12]++;break;
		case 14: a[13]++;break;
		case 15: a[14]++;break;
		case 16: a[15]++;break;
		case 17: a[16]++;break;
		case 18: a[17]++;break;
		case 19: a[18]++;break;
		case 20: a[19]++;break;
		case 21: a[20]++;break;
		case 22: a[21]++;break;
		case 23: a[22]++;break;
		case 24: a[23]++;break;
		case 0: a[23]++;break;
		default: printf("\nERROR1");break;
		
	}
	j++;
	pole[j]=pole[j-1]+1;
	}
	
	
	switch(pole[0]){
		case 1: a[0]++;break;
		case 2: a[1]++;break;
		case 3: a[2]++;break;
		case 4: a[3]++;break;
		case 5: a[4]++;break;
		case 6: a[5]++;break;
		case 7: a[6]++;break;
		case 8: a[7]++;break;
		case 9: a[8]++;break;
		case 10: a[9]++;break;
		case 11: a[10]++;break;
		case 12: a[11]++;break;
		case 13: a[12]++;break;
		case 14: a[13]++;break;
		case 15: a[14]++;break;
		case 16: a[15]++;break;
		case 17: a[16]++;break;
		case 18: a[17]++;break;
		case 19: a[18]++;break;
		case 20: a[19]++;break;
		case 21: a[20]++;break;
		case 22: a[21]++;break;
		case 23: a[22]++;break;
		case 24: a[23]++;break;
		case 0: a[23]++;break;
		default: printf("\nERROR2");break;
	}
	switch(pole[23]){
		case 1: a[0]++;break;
		case 2: a[1]++;break;
		case 3: a[2]++;break;
		case 4: a[3]++;break;
		case 5: a[4]++;break;
		case 6: a[5]++;break;
		case 7: a[6]++;break;
		case 8: a[7]++;break;
		case 9: a[8]++;break;
		case 10: a[9]++;break;
		case 11: a[10]++;break;
		case 12: a[11]++;break;
		case 13: a[12]++;break;
		case 14: a[13]++;break;
		case 15: a[14]++;break;
		case 16: a[15]++;break;
		case 17: a[16]++;break;
		case 18: a[17]++;break;
		case 19: a[18]++;break;
		case 20: a[19]++;break;
		case 21: a[20]++;break;
		case 22: a[21]++;break;
		case 23: a[22]++;break;
		case 24: a[23]++;break;
		case 0: a[23]++;break;
		default: printf("\nERROR3");break;
		
	}
	}
	max=a[0];
	for(i=0;i<=24;i++){
		if(max<=a[i]){
			max= a[i];
		}
		
	}
	
	for(i=0;i<=23;i++)
	{
		//printf("\n %d hodine - %d navstevnici", i+1, a[i]);
		
		if(a[i]==max)
		{
			printf("\nNajvysia navstevnost bola o %d hodine - %d navstevnici", i+1, max);
		}
		
	}
	
	
	









return 0;
}
