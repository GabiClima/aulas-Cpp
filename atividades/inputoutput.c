#include <stdio.h>

int main(){
    
    char nome1[50];
    double salario1;
    int idade1;
    char sexo1;

    char nome2[50];
    double salario2;
    int idade2;
    char sexo2;

    

    printf("Nome 1: ");
    scanf("%s", &nome1);
    printf("Salario 1: ");
    scanf("%lf", &salario1);
    printf("Idade 1: ");
    scanf("%d", &idade1);
    printf("Sexo 1: ");
    scanf(" %c", &sexo1);

    printf("\n");

    printf("Nome 2: ");
    scanf("%s", &nome2);
    printf("Salario 2: ");
    scanf("%lf", &salario2);
    printf("Idade 2: ");
    scanf("%d", &idade2);
    printf("Sexo 2: ");
    scanf(" %c", &sexo2);

    printf("********** RELATORIO DE DADOS **********\n");
    printf("Nome 1: %s \n", nome1);
    printf("Salario 1: %.2lf \n", salario1);
    printf("Idade 1: %d \n", idade1);
    printf("Sexo 1: %c \n", sexo1);

    printf("\n");

    printf("Nome 2: %s \n", nome2);
    printf("Salario 2: %.2lf \n", salario2);
    printf("Idade 2: %d \n", idade2);
    printf("Sexo 2: %c \n", sexo2);



}