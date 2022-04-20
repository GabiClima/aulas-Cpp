#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
        
    int idade, soma, cont;
    float media;

    soma = 0;
    cont = 0;

    cout << "Digite as idades : ";
    cin >> idade;

    while (idade != 0){
        soma = soma + idade;
        cont = cont + 1;

        cin >> idade;

    }

    if(cont == 0){
        cout << "IMPOSSIVEL CALCULAR";
    }else{
        media = ((double)soma / cont);
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media << endl;
    }
    




}