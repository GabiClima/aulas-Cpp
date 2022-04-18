#include <stdio.h>

int main(){
    
    int quantidadeDeNumeros;
    int numeroDigitado;
    int soma = 0;

    printf("Qual a quantidade de numero voce quer a soma? ");
    scanf("%d", &quantidadeDeNumeros);

    for(int i = 1; i <= quantidadeDeNumeros; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeroDigitado);

        soma = soma + numeroDigitado;
    }

    printf("A soma dos numeros digitados é igual a : %d", soma);

    return 0;
}