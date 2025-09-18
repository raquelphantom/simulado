/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int num,i;
char*vet;
char letra; 
	
char* strichar(char s[],char c){
	char*vlr = NULL;
	int i;
	for(i=0; i<num; i++){
		
	}
}

void pegar_palavra(){
	
	printf("\n qual tamanho da palavra?");
	fflush(stdin); scanf("%i",&num);
	//vetor dinâmico
	vet= malloc((num+1) * sizeof(char));
	//pega a palavra e coloca no vetor
	printf("\ndigite uma palavra com até %i letras:  ",num);
	fflush(stdin); scanf("%s",vet);
	printf("%s",vet);
	
	//pergunta a letra que quer achar
	printf("\ninsira a letra que quer encontrar: ");
	fflush(stdin); scanf("%c", &letra);
}

int main(){
	pegar_palavra();
getch();
return 0;
}
