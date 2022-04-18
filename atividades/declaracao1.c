#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    double salario;
    double altura;
    char genero;
    char nome[20];



    idade = 20;
    salario = 5800.50;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");



    printf("IDADE = %d\n", idade);
    printf("SALÁRIO = %.2f\n", salario);
    printf("ALTURA %.2f\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);
}