#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct
    {
        char nome[40];
        int idade;
        float peso;
    }
    Infos;
    Infos funcionario[10];
    int i;
    for(i=0;i<=9;i++)
    {
        printf("Digite consecutivamente o nome, a idade e o peso do funcionario %d\n",i+1);
        fgets(funcionario[i].nome,40,stdin);
        scanf("%d",&funcionario[i].idade);
        scanf("%f",&funcionario[i].peso);
    }
    printf("\n---------------Lista dos funcionarios-----------------\n");
    for(i=0;i<=10;i++)
    {
    printf("%s \t|%d\t|%5.2f\t\n",funcionario[i].nome,funcionario[i].idade,funcionario[i].peso);
    }
    return 0;
}
