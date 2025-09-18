/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char* strichar(char s[],char c){
	char*vlr = NULL;
}

void pegar_palavra(){
	int num,i;
	char*vet;
	printf("qual tamanho da palavra?");
	fflush(stdin); scanf("%i",&num);
	//vetor dinâmico
	vet= malloc((num+1) * sizeof(char));
	//pega a palavra e coloca no vetor
	printf("digite uma palavra com até %i letras",num);
	fflush(stdin); scanf("%s",vet);
	printf("%s",vet);
}

int main(){
	pegar_palavra();
getch();
return 0;
}
