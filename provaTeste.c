#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função comparadora para strcmp()
int compareStrings(const void *a, const void *b) {
    const char **str1 = (const char **)a;
    const char **str2 = (const char **)b;
    return strcmp(*str1, *str2);
}

int main() {
	int i;
    // Array de ponteiros para strings para ordenar
    const char *strings[] = {"abner teixeira", "tatiana chagas", "wanderley pereira", "caroline almeida",
	 "jucielen romeu","keno marley","luiz oliveira","michael douglas trindade","barbara dos santos","beatriz ferreira"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);
    

    printf("Strings antes de ordenar:\n");
    for (i = 0; i < numStrings; i++) {
        printf("%i = %s\n",i+1, strings[i]);
    }

    qsort(strings, numStrings, sizeof(const char *), compareStrings);

    printf("\nStrings depois de ordenar (ordem alfabética):\n");
    for (i = 0; i < numStrings; i++) {
         printf("%i = %s\n",i+1, strings[i]);
    }

    return 0;
}
