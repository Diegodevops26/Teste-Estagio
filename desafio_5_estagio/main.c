#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

     char str[100];
    printf("\n Digite uma string:");
    fgets(str, 100, stdin); // L� a string informada pelo usu�rio

    int len = strlen(str);
    char temp;

    // Inverte os caracteres da string
    for (int i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }

    printf("\n String invertida:%s \n" , str);




    system("pause");
    return 0;
}
