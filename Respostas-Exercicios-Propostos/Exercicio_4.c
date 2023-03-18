#include <stdio.h>

int main() {
    const int dist = 100; // Distância em km
    const int vel_Carro = 110; // Velocidade do carro em km/h
    const int vel_Caminhao = 80; // Velocidade do caminhão em km/h
    const float pedagio = 10.0 / 60.0; // Tempo gasto em cada pedágio em horas

    float temp_Encontro = dist / (vel_Carro + vel_Caminhao); // Tempo até o encontro
    float temp_Caminhao = temp_Encontro + pedagio; // Tempo total do caminhão somado aos pedágios

    if (temp_Encontro < temp_Caminhao) {
        printf("O carro estará mais próximo da cidade de Ribeirão Preto.\n");
    } else {
        printf("O caminhão estará mais próximo da cidade de Ribeirão Preto.\n");
    }

    return 0;
}



/* Como cheguei a uma solução: Primeiro devemos evidenciar cada informação ou variáveil por assim dizer. Depois devemos definir o tempo de encontro,
ou seja, o momento em que o caminhão e o carro vão se encontrar levando em consideração a distancia a ser percorrida e a velocidade de cada um pela formula (T = D / V1 + V2), 
Também considera ao caminhão o tempo perdido dos pedágios no total de 10min, que foi preciso ser convertido em horas para equiparar as medidas de velocidade que está em Km/h.
Por fim verifica se o tempo do caminhão é maior que o tempo de encontro , caso sim significa que o carro está mais proximo à cidade de Ribeirão caso não o caminhão está mais próximo.
Basicamente verifica quem levou mais tempo até o ponto de encontro, e a partir disso podemos deduzir qual está mais proximo considerando o tempo e a distancia percorrida de cada um tendo como referencia a cidade de Ribeirão.
*/