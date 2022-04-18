#include <stdio.h>


int main(){

    int contador;
    int soma = 0;

    while(contador != 0){
        printf("Digite um numero: ");
        scanf("%d", &contador);
        soma = soma + contador;
        
       
    }
    printf("Soma %d \n", soma);
     
}