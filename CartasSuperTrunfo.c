#include <stdio.h>   

int main(int argc, char const *argv[])
{
    char estado[1], codigoCarta[20], cidade[50];
    int população, numPtTuristico;
    float area, pib;

    printf("Digite o estado: \n");
    scanf("%s", &estado);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);
    printf("Digite a cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%d", &população);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numPtTuristico);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Estado: %s - Codigo da carta: %s\n", estado, codigoCarta);
    printf("Cidade: %s - População: %d\n", cidade, população);
    printf("Numero de pontos turisticos: %d - Area: %f\n", numPtTuristico, area);
    printf("PIB: %f\n", pib);

    return 0;
}
