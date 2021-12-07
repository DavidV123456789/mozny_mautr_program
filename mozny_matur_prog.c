//Do matice 3x4 vygenerujte náhodné jednociferné +- èísla. Nájdite 2 najvacsie cisla. Ich pocty a 1. poziciu naj cisla
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

int pole[3][4];
srand(time(0));
int i,j, q,max1,max2, c,x,y,c2,x2,y2;
max1=-9;
max2=-9;
c=0;

for(i=0;i<3;i++){
	for(j=0;j<4;j++)
	{
		pole[i][j]= rand() % 10;
		q= rand() % 2;
		if(q==1)
		{
			pole[i][j]*=-1;
		}
		if(max1<pole[i][j])
		{
			max2=max1;
			max1=pole[i][j];
			c=0;
			x=i;
			y=j;
			
		}
		if(pole[i][j]!=max1 && max2<=pole[i][j])
		{
			max2=pole[i][j];
			c2=0;
			if(c2==0)
			{
				x2=i;
				y2=j;
			}
		}
		
		if(pole[i][j]==max1)
		{
			c++;
		}
		if(pole[i][j]==max2)
		{
			c2++;
		}
	}
}
//

//
printf("Matica:");
for(i=0;i<3;i++){
	printf("\n");
	for(j=0;j<4;j++)
	{
		printf("%d ", pole[i][j]);
	}
	
}

printf("\n1. najvacsie: %d",max1);
printf("\n	pocet: %d",c);
printf("\n	suradnice: [%d,%d]",x,y);
printf("\n2. najvacsie: %d",max2);
printf("\n	pocet: %d",c2);
printf("\n	suradnice: [%d,%d]",x2,y2);

return 0;
}

