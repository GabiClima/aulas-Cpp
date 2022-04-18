#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float b1;
    float a1;

    float b2;
    float a2;

    float area1;
    float area2;

    cout << "Digite a base do primeiro retangulo em cm : " << endl;
    cin >> b1;
    cout << "Digite a altura do primeiro retangulo em cm : " << endl;
    cin >> a1;

    cout << "Digite a base do segundo retangulo em cm : " << endl;
    cin >> b2;
    cout << "Digite a altura do segundo retangulo em cm : " << endl;
    cin >> a2;

    area1 = b1 * a1;
    area2 = b2 * a2;

    cout <<fixed<< setprecision(2);
    cout << "A area do primeiro retangulo é : " << area1 << endl;
    cout << "A area do sugundo retangulo é : " << area2 << endl;

    if(area1 > area2){
        cout << "A area do primeiro retangulo é maior" << endl;
    }else{
        cout << "A area do segundo retangulo é maior" << endl;
    }

    return 0;

}