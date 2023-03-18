#include <stdio.h>
#include <string.h>

void inversao(char str[]) { /*função (inversao) que recebe um array de caracteres str como argumento */
    int i, j; /* Variáveis para manipulação do loop*/
    char temp; /* variável de apoio para armazenar temporariamente o indice */
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) { /* o loop inicia no primeiro caractere da string i = 0 e no último caractere da string j = (tamamnho) strlen(str) - 1 e continua enquanto i < j. A cada iteração, i é incrementado e j é decrementado.*/
        /* temp armazena temporariamente o valor de str[i], em seguida str[i] é substituído pelo valor de str[j], e str[j] é substituído pelo valor de temp.*/
        temp = str[i]; 
        str[i] = str[j]; 
        str[j] = temp;
    }
}

int main() {
    char str[100]; /* Define o array str com 100 caracteres */
    printf("Digite uma string: ");
    scanf("%s", str);
    inversao(str); /* Chama a função inversão*/
    printf("A string invertida: %s", str); 
    return 0;
}

