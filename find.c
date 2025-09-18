#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int i, tamanho;
char * palavra;
char caractere;

char * ddstrchr (char s[], char c) {

    char * value = NULL;

    for (i = 0; i < tamanho; i++) {
        printf("s[%d] - %c == %p\n", i, s[i], &s[i]);
        if (s[i] == c) {
            value = &s[i];
            return value;
        }
    }

    return value;

}

void getValues() {
    printf("Tamanho da Palavra: ");
    
    tamanho = getchar() - '0';
    palavra = malloc((tamanho+1) * sizeof(char));
    fflush(stdin);
    printf("\nPalavra: ");
    
    scanf("%s", palavra);
    fflush(stdin);

    printf("\nLetra: ");
    fflush(stdin);
    scanf(" %c", &caractere);
    printf("%c", caractere);
}


int main () {

	getValues();

    char * encontrar = ddstrchr(palavra, caractere);
    printf("\nValor encontrado na posição: %p", encontrar);

    return 0;
}
