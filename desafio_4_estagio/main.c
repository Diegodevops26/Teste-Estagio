#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
      setlocale(LC_ALL, "Portuguese");

      // Define os valores de faturamento mensal por estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    // Calcula o valor total de faturamento mensal
    float total = sp + rj + mg + es + outros;

    // Calcula e imprime o percentual de representação de cada estado
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", (sp/total)*100);
    printf("RJ: %.2f%%\n", (rj/total)*100);
    printf("MG: %.2f%%\n", (mg/total)*100);
    printf("ES: %.2f%%\n", (es/total)*100);
    printf("Outros: %.2f%%\n", (outros/total)*100);




    system("pause");
    return 0;
}
