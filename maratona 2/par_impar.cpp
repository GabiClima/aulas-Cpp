#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int n, i, x;

    cout << "Quantos numeros voce vai digitar ?";
    cin >> n;

    for(i = 1; i <= n; i++){
        cout << "Digite um numero: ";
        cin >> x;

        if(x == 0){
            cout << "NULO" << endl;
        }else if(x % 2 == 0){
            if(x < 0){
                cout << "PAR NEGATVO" << endl;
            }else{
                cout << "PAR POSITIVO" << endl;
            }
        }else if(x < 0){
            cout << "IMPAR NEGATIVO" << endl;
        }else{
            cout << "IMPAR POSITIVO" << endl;
        }
    }


    return 0;

}