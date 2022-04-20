#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    float r, area;

    cout << "Digite o valor do raio do circulo:" << endl;
    cin >> r;

    area = 3.14 * r * r;

    cout <<fixed<< setprecision(3);
    cout << "AREA = " << area << endl;


    return 0;

}