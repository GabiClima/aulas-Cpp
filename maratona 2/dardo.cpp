#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float d1, d2, d3, maior;

    cout << "Digite as distancias : ";
    cin >> d1;
    cin >> d2;
    cin >> d3;
    
    if(d1 > d2 && d1 > d3){
        maior = d1;
    }else if(d2 > d3){
        maior = d2;
    }else{
        maior = d3;
    }


    cout << fixed << setprecision(2);
    cout << "A maior distancia e = " << maior << endl;

}