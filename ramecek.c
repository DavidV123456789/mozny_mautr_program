//Na��tajte dve slov� oddelen� jednou medzerou a vyp�te ich do r�mika z hviezdi�iek, oddelen� dvomi medzerami
// vpred a za slov� vlo�te dve medzery, nad apod slov� vlo�te pr�zdny riadok

#include <stdio.h>
#include <string.h>

int main(){
	
	char retazec[30];
	int i, dlzka;
	
	printf("Zadajte dve slova: ");
	fgets(retazec, 30, stdin);
	dlzka= strlen(retazec);
	retazec[dlzka-1]='\0';
	dlzka-=1;
	
	//
	for(i=-5;i<=dlzka;i++)
	{
		printf("*");
	}
	//
	printf("\n");
	//
	printf("*  ");
	for(i=0;i<dlzka;i++)
	{
		printf(" ");
	}
	printf("  *");
	//
	printf("\n");
	//
	printf("*  ");
	printf("%s", &retazec);
	printf("  *");
	//
	printf("\n");
	//
	printf("*  ");
	for(i=0;i<dlzka;i++)
	{
		printf(" ");
	}
	printf("  *");
	//
	printf("\n");
	//
	for(i=-5;i<=dlzka;i++)
	{
		printf("*");
	}
	//
	
	
	return;
}
