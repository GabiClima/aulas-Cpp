#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    float X, Y;

    cout << "Digite dois numeros ";
    cin >> X;
    cin >> Y;

    while (X != Y){
        
        if(X < Y){
            cout << "Crescente" << endl;
        }else{
            cout << "Decrescente" << endl;
        }

        cout << " Digite outros dois numeros ";
        cin >> X;
        cin >> Y;
    }

   
    

    return 0;


}
