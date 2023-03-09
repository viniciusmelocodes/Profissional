#include <stdio.h>
#include <stdlib.h>

int main()
{
    char profissional[100];
    printf("============== PROFISSIONAL DE MILHOES ==============\n\n");
    printf("Informe o nome de um profissional gigante e de peso: (kkkkkkkk)\n");
    scanf("%99s", profissional);

    printf("\nO profissional gigante e de peso eh >>>>>> %s", &profissional);
    printf(" <<<<<<\n");
    return 0;
}
