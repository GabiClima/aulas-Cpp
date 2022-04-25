#include <bits/stdc++.h>

using namespace std;

int main(){

    float largura, comprimento, metroQuadrado;
    float area, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> metroQuadrado;
    
    area = largura * comprimento;
    preco = area * metroQuadrado;
    
    cout << fixed << setprecision(2);

    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << preco << endl;


}