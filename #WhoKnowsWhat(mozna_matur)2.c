/*
Odstranenie nadbytocnych medzier
Nacitajte retazec obsahujuci 3 kratke vety. Vytvorte novy retazec bez nadbytocnych medzier medzi slovami(Ak viac ako 1)
Ak je prve pismeno male zmente ho na velke. Ak na konci poslednej vety nie je bodka pridajte ju

dobry den.  dnes je pondelok. Budeme doma

Dobry den. Dnes je pondelok. Budeme doma.

*/
#include<stdio.h>
#include<string.h>
int main(){
	char V[100];
	char V2[100];
	int n, i, j;
	j=0;
	int h;
	h=0;
	printf("Zadajte vety: ");
	fgets(V, 100, stdin);

	n = strlen(V);
	for(i=0;i<=n;i++)
	{
		if(V[i]!=' ')
		{
		V2[j]=V[i];
			j++;
			h=0;
			}
		
		else{
			if(h==0)
			{
				V2[j]=V[i];
			j++;
			h=1;
			}
			else{
				
			}
		}	
		
		
		
	}
	
	int	dlzka_n = j-1;
	V2[j]= '\0';
	
	for(j=0;j<dlzka_n;j++)
	{
		if(V2[j]=='.')
	{
		V2[j+2]=toupper(V2[j+2]);
	}
	
		
		
	}
	if(V2[j-1]!= '.')
	{
		V2[j-1]='.';
	}
	V2[0]=toupper(V2[0]);
	printf("\nUpraveny retazec: %s \n", V2);
	
	//toupper(retazec[i])
	
	
	return 0;
}
