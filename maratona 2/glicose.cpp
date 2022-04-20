#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float glicose;

    cout << "Digite a medida da glicose";
    cin >> glicose;

    if(glicose <= 100){
        cout << "Normal" << endl;
    }else if(glicose <= 140){
        cout << "Elevado" << endl;
    }else{
        cout << "Diabetes" << endl;
    }

    return 0;






}