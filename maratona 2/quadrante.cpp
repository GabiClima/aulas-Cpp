#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float X, Y;

    cout << "Digite os valores das coordenadas X e Y:";
    cin >> X;
    cin >> Y;

    while (X != 0 && Y != 0){

        if(X > 0 && Y > 0){
            cout << "Quadrante 1" << endl;

        }else if(X < 0 && Y > 0){
            cout << "Quadrante 2" << endl;

        }else if(X < 0 && Y < 0){
            cout << "Quadrante 3" << endl;

        }else{
            cout << "Quadrante 4" << endl;
        }

        cout << "Digite os valores das coordenadas X e Y:";
        cin >> X;
        cin >> Y;

    }

}