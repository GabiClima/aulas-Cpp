#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int contador;
    int soma = 0;

    while(contador != 0){
        cout << "Digite um numero: ";
        cin >> contador;
        soma = soma + contador;
    }
    
    cout << "Soma: " << soma;
}