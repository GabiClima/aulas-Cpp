#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    int quantidadeDeNumeros;
    int numeroDigitado;
    int soma = 0;

    cout << "Qual a quantidade de numero voce quer a soma? " << endl;
    cin >> quantidadeDeNumeros;

    for(int i = 1; i <= quantidadeDeNumeros; i++){
        cout << "Digite um numero: " << endl;
        cin >> numeroDigitado;

        soma = soma + numeroDigitado;
    }


    cout <<fixed<< setprecision(2);
    cout << "A soma dos numeros digitados é igual a " << soma << endl;

    return 0;
}