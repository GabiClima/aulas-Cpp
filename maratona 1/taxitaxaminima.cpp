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

    cout << "ATENCAO, taxa minima do taxi : 3.50" << endl;

    cout <<"Digite o numero da bandeira <1 ou 2>" << endl;
    cin >> bandeira;


    cout << "Digite a kilometragem rodada" << endl;
    cin >> kmRodado;



    if(bandeira == 1){
         valor = kmRodado * bandeira1;
    }else{
         valor = kmRodado * bandeira2;
    }

    if(valor < valorMinimo){
        cout << "O valor da corrida é " << valorMinimo << endl;
    }else{
         cout << "O valor da corrida é :" << valor << endl;
    }



}