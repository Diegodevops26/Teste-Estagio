#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    #define TAMANHO_VETOR 31 // Tamanho do vetor de faturamento (assumindo m�s com 31 dias)


     setlocale(LC_ALL, "Portuguese");

    float faturamento[TAMANHO_VETOR];
    float soma = 0, media, menor, maior;
    int dias_acima_media = 0;

    // Leitura dos valores de faturamento di�rio
    printf("Digite o valor de faturamento di�rio para cada dia do m�s:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        scanf("%f", &faturamento[i]);
        soma += faturamento[i];
    }

    // C�lculo da m�dia de faturamento mensal (ignorando dias sem faturamento)
    media = soma / TAMANHO_VETOR;
    int dias_com_faturamento = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (faturamento[i] > 0)
            dias_com_faturamento++;
    }
    media = soma / dias_com_faturamento;

    // Encontrando o menor e o maior faturamento di�rio
    menor = faturamento[0];
    maior = faturamento[0];
    for (int i = 1; i < TAMANHO_VETOR; i++)
    {
        if (faturamento[i] < menor)
            menor = faturamento[i];
        if (faturamento[i] > maior)
            maior = faturamento[i];
    }

    // Contando o n�mero de dias em que o faturamento foi superior � m�dia
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (faturamento[i] > media)
            dias_acima_media++;
    }

    // Impress�o dos resultados
    printf("Menor faturamento di�rio: %.2f\n", menor);
    printf("Maior faturamento di�rio: %.2f\n", maior);
    printf("N�mero de dias com faturamento acima da m�dia: %d\n", dias_acima_media);


    system("pause");
    return 0;
}
