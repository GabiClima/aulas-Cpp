#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    float salario, porcentagem, aumento, novoSalario, teste;

    cout << "Digite o salario da pessoa: " << endl;
    cin >> salario;

    if(salario <= 1000.0){
        porcentagem = 20;
    }else{
        if(salario <= 3000.0){
            porcentagem = 15;
        }else{
            if(salario <= 8000.0){
                porcentagem = 10;
            }else{
                porcentagem = 5;
            }
        }
    }

    aumento = salario * porcentagem/100;

    novoSalario = salario + aumento;

    cout <<fixed<< setprecision(2);
    cout << "Novo salario = R$ " << novoSalario << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout <<fixed<< setprecision(0);
    cout << "Porcentagem = " << porcentagem << "%" << endl;


}