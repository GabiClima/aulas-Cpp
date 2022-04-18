#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    
    float celsius;
    float fahrenhiet;

    cout << "Digite a temperatura em °Celsius: " << endl;
    cin >> celsius;

    fahrenhiet = celsius * 1.8 + 32; 

    cout << "A temperatura em Fahrenheit é:" << fahrenhiet << endl;


}