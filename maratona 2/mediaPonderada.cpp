#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int N, i;
    float a, b, c, media;

    cout << "Quantos casos voce vai digitar ? ";
    cin >> N;

    for(i = 1; i <= N; i++){
            cout << "Digite 3 numeros : " << endl;
            cin >> a;
            cin >> b;
            cin >> c;

            media = (a * 2 + b * 3 + c * 5)/10;

            cout << fixed << setprecision(1);
            cout << "MEDIA = " << media << endl;
    }






}