#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int x, y;

    cout << "Escreva dois numeros inteiros : ";
    cin >> x;
    cin >> y;

    if(x % y == 0 || y % x == 0){
        cout << "S�o multiplos" << endl;
    }else{
        cout << "N�o s�o multiplos " << endl;
    }



}