#include <bits/stdc++.h>

using namespace std;

int main(){

    float C,F;
    char unidade;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> unidade;

    if(unidade == 'F'){
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> F; 
        C = 5 / (double)9 * (F - (double)32);
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " <<  C << endl;
    }else{
        cout << "Digite a temperatura em Celsius: ";
        cin >> C;
        F = 9 * C / 5 + 32;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << F << endl;

    }


}