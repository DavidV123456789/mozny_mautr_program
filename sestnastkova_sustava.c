#include<stdio.h>
#include<string.h>

int main()
{
	char c_16[7];
	//charakterizujeme reezac o max. ve¾kosti 7 ztankov
	int c_10 = 0;
	int m_16=1;
	int i, n, cf;
	
	printf("Zadaj cislo v 16. ciselnej sustave: ");
	scanf("%s", c_16);
	n= strlen(c_16);
	// zisujeme poèet znakov v reazci
	for(i=n-1;i>=0;i--)
	{
		switch(c_16[i]){
			case '1': cf = 1;break;
			case '2': cf = 2;break;
			case '3': cf = 3;break;
			case '4': cf = 4;break;
			case '5': cf = 5;break;
			case '6': cf = 6;break;
			case '7': cf = 7;break;
			case '8': cf = 8;break;
			case '9': cf = 9;break;
			case 'a': 
			case 'A': cf = 10;break;
			case 'b': 
			case 'B': cf = 11;break;
			case 'c': 
			case 'C': cf = 12;break;
			case 'd':
			case 'D': cf = 13;break;
			case 'e':
			case 'E': cf = 14;break;
			case 'f': 
			case 'F': cf = 15;break;
			default: printf("Cislo nie je zadane v 16. ciselnej sustave."); return 1;
		}
		c_10=c_10 + cf * m_16;
		m_16 = m_16 * 16;
		
		
	}
	
	printf("\n Cislo v 16. ciselnej sustave j: %s", c_16);
	printf("\n Prevod do 10. ciselnej sustavy je %d ", c_10);
	
	
	// príkaz goto nás premiestní na iné misto v kódu, ale nemakli by sme ho èasto pouíva
	// printf("\n Zadane cislo %d je v 16. c. s. rovne %X", c_10, c_10); automaticky odlaïuje v 16. c. s. ; s velkımi písmenami
	// printf("\n Zadane cislo %d je v 16. c. s. rovne %x", c_10, c_10); automaticky odlaïuje v 16. c. s.; s malími písmenami
	// printf("\n Zadane cislo %d je v 16. c. s. rovne %o", c_10, c_10); automaticky odlaïuje v 8. c. s. 
	//
	//
	return 0;
}
