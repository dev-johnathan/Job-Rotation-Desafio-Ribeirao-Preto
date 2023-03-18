#include <stdio.h>

int main() {
    int num, x = 0, y = 1, z = 0; /* Definição dos valores iniciais das variáveis */
    
    printf("Digite um número: ");
    scanf("%d", &num); /*Atribui o input como valor por meio de ponterio à variável num */
    
    while (z < num) { /*loop é executado até que o valor de z seja maior ao número informado pelo usuário. O o valor de z é atualizado com a soma dos valores de x e y, e os valores de x e y são atualizados com os valores de y e z, respectivamente. Essa sequência gera os valores da sequência de Fibonacci. */
        z = x + y;
        x = y;
        y = z;
    }
    if (z == num) { /*Verifica se o número inserido pertence a sequência gerada, caso sim tem a resposta positiva, caso não a resposta negativa */
        printf(" O número inserido %d, pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número inserido %d , não pertence à sequência de Fibonacci.\n", num);
    }
    return 0;
}
