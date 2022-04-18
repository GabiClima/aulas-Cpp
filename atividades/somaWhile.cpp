#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int quantidade;
    int i = 1;
    int numero;
    int soma = 0;

    cout << "Qual a quantidade de numeros voce quer digitar" << endl;
    cin >> quantidade;

    while(i <= quantidade){

        cout << "Digite um numero: " << endl;
        cin >> numero;

        soma = soma + numero;

        i++;



    }

    cout << "A  soma dos numeros é: " << soma << endl;

    return 0;



}