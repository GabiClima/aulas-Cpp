#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int N, X, i, dentro, fora;

    dentro = 0;
    fora = 0;

    cout << "Quantos numeros quer digitar ? ";
    cin >> N;

    for(i = 1; i <= N; i++){
        cout << "Digite um numero: ";
        cin >> X;

        if(X >= 10 && X <= 20){
            dentro = dentro + 1;
        }else{
            fora = fora + 1;
        }
    }

    cout << "DENTRO" << dentro << endl;
    cout << "FORA" << fora << endl;



}