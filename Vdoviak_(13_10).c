#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n, k, s, i, j, d, nd, z;
	
	srand(time(0));
	n = 1+ rand() % 9;
	
	printf("Pocet riadkov: %d", n);
	
	printf("\n Zadaj ci zoradit doprava alebvo do lava(0=pravo; 1=lavo): ");
	scanf("%d", &k);
	
	s=1;
	j=0;
	nd=n-1;
	
	if(k==1)
	{
		k= 0;
		while(k!=n)
		{
			for(i=0;i<s;i++)
			{
				j+=1;
				printf("%d", j);
			}
			printf("\n");
			s+=1;
			k+=1;
		}
	}
	else if(k==0)
	{
		k= 0;
		while(k!=n)
		{
			if(k<=2)
			{
				printf("         ");
			}
			else if(k<=3){
				printf("        ");
			}
			else if(k<=4){
				printf("    ");
			}
			else if(k<=5){
				printf("   ");
			}
			else if(k<=6){
				printf("  ");
			}
			else if(k<=7){
				printf(" ");
			}
			
			for(d=0;d<=nd;d++)
				{
					printf(" ");
				}
				
			for(i=0;i<s;i++)
			{
				
				j+=1;
				printf("%d", j);
			}
			
			printf("\n");
			s+=1;
			k+=1;
			nd-=1;
		}
	}
	else{
		printf("ERROR:doplnena zla hodnota");
	}
	
	return 0;
}

