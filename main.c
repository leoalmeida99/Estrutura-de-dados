#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void menu();
void calcularFatorial();
void verificaSeEhPrimo();

int main()
{
    int opcao;

    do
    {
        menu();
        scanf("%d",&opcao);

        switch(opcao)
        {
        case 1:
            calcularFatorial();
            break;
        case 2:
            verificaSeEhPrimo();
            break;
        default:
            printf("Opcao Invalida!");
            break;
        }
    }
    while(opcao != 0);

    return 0;
}

void menu()
{
    printf("=====================\n");
    printf("1 - fatorial\n");
    printf("2 - calcular se eh primo\n");
    printf("0 - sair\n");
    printf("=====================\n");
    printf("Opcao: ");
}
void calcularFatorial()
{
    int n,i,fat = 1;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d",&n);
    for(i = 2; i <= n; i++)
    {
        fat = fat * i;
    }
    printf("Fatorial de %d, eh %d\n",n,fat);
}
void verificaSeEhPrimo()
{
    int n,i;
    bool flag = false;
    printf("Digite um numero para verificar se eh primo: ");
    scanf("%d",&n);
    for(i = 2; i <= n / 2; i++)
    {
        printf("%d\n",i);
        if(n % i == 0)
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        printf("O %d NAO eh primo!\n",n);
    }
    else
    {
        printf("O %d eh primo!\n",n);
    }
}
