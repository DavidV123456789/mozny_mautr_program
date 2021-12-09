#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

int main(){
	
	char retazec[100];
	char retazec_n[19];
	int i, dlzka, dlzka_n, j;
	printf("Vstup: ");
	fgets(retazec , 19, stdin);
	dlzka = strlen (retazec);
	int k=0;
	j=0;
	srand(time(0));
	for(i=0;i<dlzka;i++){
		if(retazec[i] != ' '){
			
			retazec_n[j]=(retazec[i]); 
			j+=1;
		}
	}
	dlzka_n = j-1;
	retazec_n[j]= '\0';
	int pole[dlzka_n];
	printf("Upraveny retazec bez medzier: %s \n", retazec_n);
	i=0;
	for (j=0; j<dlzka_n;)
	{
		if(retazec_n[i]== '9')
		{
			pole[j]=9;
		}
		else if(retazec_n[i]== '8')
		{
			pole[j]=8;
		}
		else if(retazec_n[i]== '7')
		{
			pole[j]=7;
		}
		else if(retazec_n[i]== '6')
		{
			pole[j]=6;
		}
		else if(retazec_n[i]== '5')
		{
			pole[j]=5;
		}
		else if(retazec_n[i]== '4')
		{
			pole[j]=4;
		}
		else if(retazec_n[i]== '3')
		{
			pole[j]=3;
		}
		else if(retazec_n[i]== '2')
		{
			pole[j]=2;
		}
		else if(retazec_n[i]== '1')
		{
			pole[j]=1;
		}
		else if(retazec_n[i]== '0')
		{
			pole[j]=0;
		}
		else if(retazec_n[i]== '-')
		{
			dlzka_n-=1;
				if(retazec_n[i+1]== '9')
			{
				pole[j]=-9;i++;
			}
			else if(retazec_n[i+1]== '8')
			{
				pole[j]=-8;i++;
			}
			else if(retazec_n[i+1]== '7')
			{
				pole[j]=-7;i++;
			}
			else if(retazec_n[i+1]== '6')
			{
				pole[j]=-6;i++;
			}
			else if(retazec_n[i+1]== '5')
			{
				pole[j]=-5;i++;
			}
			else if(retazec_n[i+1]== '4')
			{
				pole[j]=-4;i++;
			}
			else if(retazec_n[i+1]== '3')
			{
				pole[j]=-3;i++;
			}
			else if(retazec_n[i+1]== '2')
			{
				pole[j]=-2;i++;
			}
			else if(retazec_n[i+1]== '1')
			{
				pole[j]=-1;i++;
				
			}
		}
		i++;
		j++;
	}

	printf("\nKontrola: ");
	for(i=0;i<=dlzka_n-1;i++)
	{
		printf("%d ", pole[i]);
	}
	
	for(i=0;i<dlzka_n-1;i++){
		
		if(pole[i]<pole[i+1])
		{
			
			
			while(k!=1)
			{
			printf(":");
				j= rand ()% 2;
				if(j==0){
					pole[i+1]= rand()% 10;
					pole[i+1]=pole[i+1]*(-1);
				}
				else{
					pole[i+1]= rand()% 10;
				}
				
				if(pole[i]>=pole[i+1])
				{
					k=1;
				}
				else{
				}
				}
			k=0;
		}
	}
	
	printf("\nKontrola2: ");
	for(i=0;i<=dlzka_n-1;i++)
	{
		printf("%d ", pole[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
