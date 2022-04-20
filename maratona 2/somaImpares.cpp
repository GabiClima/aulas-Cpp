#include <bits/stdc++.h>

using namespace std;

int main(){

    int X, Y, troca, i, soma;

    cout << "Digite dois numeros:";
    cin >> X;
    cin >> Y;
    
    if(X > Y){ 
        troca = X;
        X = Y;
        Y = troca;
    }
    
    soma = 0;

    for(i = X + 1; i <= Y - 1; i++){
        if(i % 2 != 0){ 
            soma = soma + i;
        }
    }
    
    cout << "SOMA DOS IMPARES = " << soma << endl;


}