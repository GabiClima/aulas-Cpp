#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int N, i;
    float x, y, divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    cout << endl;

    
    for(i = 1; i <= N; i++){

        cout << "Entre com o numerador: " << endl;
        cin >> x;
        cout << "Entre com o denominador: " << endl;
        cin >> y;
        
       
        if(y == 0){
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }else{
            divisao = x / y;
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << divisao;
        }

        cout << endl;

        
    }

    return 0;


}