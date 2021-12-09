#include<stdio.h>
#include<string.h>

int main(){
	
	char retazec[220];
	char retazec_n[220];
	int d, d_n;
	int i, j;
	
	printf("Zadaj text (bez diakritiky, smybolov a interpunkcie) \n");
	fgets(retazec, 100, stdin);
	d = strlen (retazec);
	j = 0;
	
	for(i=0;i<d;i++){
		if(retazec[i] != ' '){
			
			retazec_n[j]=(retazec[i]); //vyradujeme medzery a velkkost písma
			j+=1;
		}
	}
	d_n = j-1;
	retazec_n[j]= '\0'; //udáva koniec reazca
	

	
	int A=0;
	int B=0;
	int C=0;
	int D=0;
	int E=0;
	int F=0;
	int G=0;
	int H=0;
	int I=0;
	int J=0;
	int K=0;
	int L=0;
	int M=0;
	int N=0;
	int O=0;
	int P=0;
	int Q=0;
	int R=0;
	int S=0;
	int T=0;
	int V=0;
	int W=0;
	int X=0;
	int Y=0;
	int Z=0;
	
	int sb=0;
	int sa=0;
	
	int v=0;
	int m=0;
	
	for(i=0;i<d_n;i++)
	{
		switch(retazec_n[i]){
			case 'A': A+=1;sa+=1;v+=1;break;
			case 'B': B+=1;sb+=1;v+=1;break;
			case 'C': C+=1;sb+=1;v+=1;break;
			case 'D': D+=1;sb+=1;v+=1;break;
			case 'E': E+=1;sa+=1;v+=1;break;
			case 'F': F+=1;sb+=1;v+=1;break;
			case 'G': G+=1;sb+=1;v+=1;break;
			case 'H': H+=1;sb+=1;v+=1;break;
			case 'I': I+=1;sa+=1;v+=1;break;
			case 'J': J+=1;sb+=1;v+=1;break;
			case 'K': K+=1;sb+=1;v+=1;break;
			case 'L': L+=1;sb+=1;v+=1;break;
			case 'M': M+=1;sb+=1;v+=1;break;
			case 'N': N+=1;sb+=1;v+=1;break;
			case 'O': O+=1;sa+=1;v+=1;break;
			case 'P': P+=1;sb+=1;v+=1;break;
			case 'Q': Q+=1;sb+=1;v+=1;break;
			case 'R': R+=1;sb+=1;v+=1;break;
			case 'S': S+=1;sb+=1;v+=1;break;
			case 'T': T+=1;sb+=1;v+=1;break;
			case 'V': V+=1;sb+=1;v+=1;break;
			case 'W': W+=1;sb+=1;v+=1;break;
			case 'X': X+=1;sb+=1;v+=1;break;
			case 'Y': Y+=1;sa+=1;v+=1;break;
			case 'Z': Z+=1;sb+=1;v+=1;break;
			case 'a': A+=1;sa+=1;m+=1;break;
			case 'b': B+=1;sb+=1;m+=1;break;
			case 'c': C+=1;sb+=1;m+=1;break;
			case 'd': D+=1;sb+=1;m+=1;break;
			case 'e': E+=1;sa+=1;m+=1;break;
			case 'f': F+=1;sb+=1;m+=1;break;
			case 'g': G+=1;sb+=1;m+=1;break;
			case 'h': H+=1;sb+=1;m+=1;break;
			case 'i': I+=1;sa+=1;m+=1;break;
			case 'j': J+=1;sb+=1;m+=1;break;
			case 'k': K+=1;sb+=1;m+=1;break;
			case 'l': L+=1;sb+=1;m+=1;break;
			case 'm': M+=1;sb+=1;m+=1;break;
			case 'n': N+=1;sb+=1;m+=1;break;
			case 'o': O+=1;sa+=1;m+=1;break;
			case 'p': P+=1;sb+=1;m+=1;break;
			case 'q': Q+=1;sb+=1;m+=1;break;
			case 'r': R+=1;sb+=1;m+=1;break;
			case 's': S+=1;sb+=1;m+=1;break;
			case 't': T+=1;sb+=1;m+=1;break;
			case 'v': V+=1;sb+=1;m+=1;break;
			case 'w': W+=1;sb+=1;m+=1;break;
			case 'x': X+=1;sb+=1;m+=1;break;
			case 'y': Y+=1;sa+=1;m+=1;break;
			case 'z': Z+=1;sb+=1;m+=1;break;
			default: printf("\n ERROR (neznamy znak); pozicia:%d", i);
		}
	}
	
	printf("\n \n Vyskyt A: %d ", A);
	printf("\n Vyskyt B: %d ", B);
	printf("\n Vyskyt C: %d ", C);
	printf("\n Vyskyt D: %d ", D);
	printf("\n Vyskyt E: %d ", E);
	printf("\n Vyskyt F: %d ", F);
	printf("\n Vyskyt G: %d ", G);
	printf("\n Vyskyt H: %d ", H);
	printf("\n Vyskyt I: %d ", I);
	printf("\n Vyskyt J: %d ", J);
	printf("\n Vyskyt K: %d ", K);
	printf("\n Vyskyt L: %d ", L);
	printf("\n Vyskyt M: %d ", M);
	printf("\n Vyskyt N: %d ", N);
	printf("\n Vyskyt O: %d ", O);
	printf("\n Vyskyt P: %d ", P);
	printf("\n Vyskyt Q: %d ", Q);
	printf("\n Vyskyt R: %d ", R);
	printf("\n Vyskyt S: %d ", S);
	printf("\n Vyskyt T: %d ", T);
	printf("\n Vyskyt V: %d ", V);
	printf("\n Vyskyt W: %d ", W);
	printf("\n Vyskyt X: %d ", X);
	printf("\n Vyskyt Y: %d ", Y);
	printf("\n Vyskyt Z: %d \n", Z);
	
	printf("\n Pocet samohlasok: %d", sa);
	printf("\n Pocet spoluhlasok: %d", sb);
	printf("\n Pocet velkych pismen: %d", v);
	printf("\n Pocet malych pismen: %d", m);
	printf("\n Pocet psimen v texte: %d", d_n);
	
	
	
	return 0;
}
//???
//tolower()
//toascii()
//isalbum
//isalpha<otyhe.h>
//islower()
//isupper()
//???
