#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main(){
    
    int n1;
    int n2;
    int n3;

    cout << "Voce devera digitar 3 numeros inteiros diferentes" << endl;

    cout << "Digite o primeiro numero" << endl;
    cin >> n1;

    cout << "Digite o segundo numero" << endl;
    cin >> n2;

    cout << "Digite o terceiro numero" << endl;
    cin >> n3;

    if(n1 < n2 && n1 < n3){
        if(n2 < n3){
            cout << n1 << endl << n2 << endl<< n3 << endl;
        }else{
            cout << n1 << endl << n3 << endl << n2 << endl;
        }
    }

    if(n2 < n1 && n2 < n3){
        if(n1 < n3){
            cout << n2 << endl << n1 << endl << n3 << endl;
        }else{
            cout << n2 << endl << n3 << endl << n1 << endl;
        }
    }

     if(n3 < n1 && n3 < n2){
        if(n1 < n2){
            cout << n3 << endl << n1 << endl << n2 << endl;
        }else{
            cout << n3 << endl << n2 << endl << n1 << endl;
        }
    }

}