#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int bandeira; 

    float bandeira1 = 1.80;
    float bandeira2 = 2.30;
    
    float kmRodado;

    float valor;

    float valorMinimo = 3.50;

    int desconto;

    cout << "ATENCAO, taxa minima do taxi : 3.50" << endl;

    cout << "Digite o numero da bandeira <1 ou 2>" << endl;
    cin >> bandeira;


    cout << "Digite a kilometragem rodada " << endl;
    cin >> kmRodado;

    cout << "O taxi oferece desconto de 30% ?  <1 - SIM ou 2 - NAO>" << endl;
    cin >> desconto;



    if(bandeira == 1){
         valor = kmRodado * bandeira1;
    }else{
         valor = kmRodado * bandeira2;
    }

    if(valor < valorMinimo){
        cout << "O valor da corrida � " << valorMinimo << endl;
    }else{
        if(desconto == 1){
        cout << "O valor da corrida �:" << valor * 0.7 << endl;
    }else
         cout << "O valor da corrida � :" << valor << endl;
    }

  



}