#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int num,a=0,b=1,c=0,found=0;

    setlocale(LC_ALL, "Portuguese");

    printf("\n Digite um numero:");
    scanf("%d",&num);

    while (c <= num)
    {
        if (c == num)
        {
            // found foi declarado como variavel para sair do loop ifinito

            found = 1;
            break;
        }

        c = a + b;
        a = b;
        b = c;
    }

    if (found)
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);


    system("pause");
    return 0;
}
