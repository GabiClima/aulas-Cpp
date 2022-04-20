#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b, c, x1, x2, delta;

    cout << "Coeficiente a : " << endl;
    cin >> a;
    cout << "Coeficiente b : " << endl;
    cin >> b;
    cout << "Coeficiente c : " << endl;
    cin >> c;

    delta = (b*b) - (4 * a * c);

    if(a == 0 || delta < 0){
        cout << "Esta equa��o n�o possui ra�zes reais" << endl;
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;

    }


    return 0;



}