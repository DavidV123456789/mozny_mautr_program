//zistuje pismeno pomocou ASCII
#include <stdio.h>
#include <string.h>

int main()
{
	char text[220];
	int pocet_pismen  = 26;
	int pocetnost[pocet_pismen];
	int i, dlzka, index;
	

	
	printf("Zadajte retazec pismen: ");
	fgets(text, 220, stdin);
	dlzka = strlen(text);
	text[dlzka-1]='\0';
	dlzka = dlzka - 1;
	
	for(i=0;i<= pocet_pismen;i++)
	{
		pocetnost[i]=0;
	}
	
	for(i=0;i< dlzka;i++)
	{
		if((text[i] >= 'A') && (text[i] <= 'Z'))
		{
			index = text[i] - 'A';
			pocetnost[index] = pocetnost[index] +1;
		}
		else if((text[i] >= 'a') && (text[i] <= 'z'))
		{
			index = text[i] - 'a';
			pocetnost[index] = pocetnost[index] +1;
		}
		else{}
		
	}
	
	for(i=0;i<pocet_pismen;i++)
	{
		printf("\n pismeno %c: %d-krat", i+65, pocetnost[i]);
	}
	
	
	
	
	
	return 0;
}
