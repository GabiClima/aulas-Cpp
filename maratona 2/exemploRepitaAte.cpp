#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float C, F;
    char resp;

    do
    {
        cout << "Digite a temperatura em Celsius: ";
        cin >> C;
        F = 9.0 * C / 5.0 + 32.0;
        cout << fixed << setprecision(1);
        cout << "Equivalente em Fahrenheit: " << F << endl;
        cout << "Deseja repetir (s/n)? ";
        cin >> resp;

    } while (resp == 's');

    return 0;
    
}