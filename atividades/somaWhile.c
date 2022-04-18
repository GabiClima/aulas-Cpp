#include <stdio.h>

int main(){

    int quantidade;
    int i = 1;
    int numero;
    int soma = 0;

    printf("Qual a quantidade de numeros voce quer digitar: ");
    scanf("%d", &quantidade);

    while(i <= quantidade){

        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

        i++;



    }

    printf("A soma dos numeros é: %d", soma);

    return 0;



}