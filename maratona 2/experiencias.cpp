#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    int N, i, qtd, totalCobaias, totalSapos, totalCoelhos, totalRatos;
    float pratos, psapos, pcoelhos;
    char tipoCobaia;

    totalRatos = 0;
    totalCoelhos = 0;
    totalSapos = 0;

    cout << "Quantos casos de teste serao digitados?";
    cin >> N;
    
    for(i = 1; i <= N; i++){
    
        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaia: ";
        cin >> tipoCobaia;

        if(tipoCobaia == 'R'){
            totalRatos = totalRatos + qtd;
        }else if(tipoCobaia == 'S'){
            totalSapos = totalSapos + qtd;
        }else{
            totalCoelhos = totalCoelhos + qtd;
        }
      
      
   
    }
    
    totalCobaias = totalRatos + totalSapos + totalCoelhos;
    
    pcoelhos = ((double)totalCoelhos / totalCobaias) * 100.00;
    pratos = ((double)totalRatos / totalCobaias) * 100.00;
    psapos = ((double)totalSapos / totalCobaias) * 100.00;
    
   
    cout << "RELATORIO FINAL:" << endl;
    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << pcoelhos << endl;
    cout << "Percentual de ratos: " << pratos << endl;
    cout << "Percentual de sapos: " << psapos << endl;




}