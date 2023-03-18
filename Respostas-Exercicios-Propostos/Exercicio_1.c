#include <stdio.h>

int main() {
   int INDICE = 13, SOMA = 0, K = 0; /*Definição de variáveis */

   while (K < INDICE) { /* Loop com parametro para que execute enquanto o valor de K for menor que o INDICE */
      K = K + 1; /* Soma +1 a cada vez que o loop é executado */
      SOMA = SOMA + K; /* Soma o valor anterior de K ao valor atual de K. */
   }

   printf("O valor de SOMA é %d", SOMA);
   return 0;
}

/* Valor previsto para SOMA é 91 */