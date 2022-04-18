#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    float bandeira;
    
    float kmRodado;


    cout << "Digite o numero da bandeira < 1 ou 2 > : ";
    cin >> bandeira;

    cout << "Digite a Kilometragem rodada : ";
    cin >> kmRodado;

    if(bandeira == 1){
        cout <<fixed<< setprecision(2);
        cout << "O valor da corrida e: " << kmRodado * 1.80 << endl;
    }else{
        cout <<fixed<< setprecision(2);
        cout << "O valor da corrida e: " << kmRodado * 2.30 << endl;
    }

    return 0;
}
