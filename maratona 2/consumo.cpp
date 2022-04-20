#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float distancia, combustivel, consumo;

    cout << "Distancia percorida: ";
    cin >> distancia;

    cout << "Combustivel Gasto: ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo medio = " << consumo;





    return 0;



}