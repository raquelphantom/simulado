#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fun��o comparadora para strcmp()
int compareStrings(const void *a, const void *b) {
    const char **str1 = (const char **)a;
    const char **str2 = (const char **)b;
    return strcmp(*str1, *str2);
}

int main() {
    // Array de ponteiros para strings para ordenar
    const char *strings[] = {"banana", "ma��", "abacaxi", "uva", "laranja"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);
    int i;

    printf("Strings antes de ordenar:\n");
    for (i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    // Ordena as strings usando qsort e a fun��o comparadora
    qsort(strings, numStrings, sizeof(const char *), compareStrings);

    printf("\nStrings depois de ordenar (ordem alfab�tica):\n");
    for (i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
