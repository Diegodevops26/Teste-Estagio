#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    #define TAMANHO_VETOR 31 // Tamanho do vetor de faturamento (assumindo mês com 31 dias)


     setlocale(LC_ALL, "Portuguese");

    float faturamento[TAMANHO_VETOR];
    float soma = 0, media, menor, maior;
    int dias_acima_media = 0;

    // Leitura dos valores de faturamento diário
    printf("Digite o valor de faturamento diário para cada dia do mês:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%f", &faturamento[i]);
        soma += faturamento[i];
    }

    // Cálculo da média de faturamento mensal (ignorando dias sem faturamento)
    media = soma / TAMANHO_VETOR;
    int dias_com_faturamento = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (faturamento[i] > 0)
            dias_com_faturamento++;
    }
    media = soma / dias_com_faturamento;

    // Encontrando o menor e o maior faturamento diário
    menor = faturamento[0];
    maior = faturamento[0];
    for (int i = 1; i < TAMANHO_VETOR; i++)
    {
        if (faturamento[i] < menor)
            menor = faturamento[i];
        if (faturamento[i] > maior)
            maior = faturamento[i];
    }

    // Contando o número de dias em que o faturamento foi superior à média
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (faturamento[i] > media)
            dias_acima_media++;
    }

    // Impressão dos resultados
    printf("Menor faturamento diário: %.2f\n", menor);
    printf("Maior faturamento diário: %.2f\n", maior);
    printf("Número de dias com faturamento acima da média: %d\n", dias_acima_media);


    system("pause");
    return 0;
}
