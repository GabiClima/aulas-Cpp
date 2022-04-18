#include <bits/stdc++.h>

using namespace std;

int main(){

    string nome1, nome2, sexo1, sexo2;
    double salario1, salario2;
    int idade1, idade2;
   

    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Salario: ";
    cin >> salario1;
    cout << "Idade: ";
    cin >> idade1;
    cout << "Sexo: ";
    cin >> sexo1;

    cout << "Nome: ";
    cin >> nome2;
    cout << "Salario: ";
    cin >> salario2;
    cout << "Idade: ";
    cin >> idade2;
    cout << "Sexo: ";
    cin >> sexo2;

    cout << "" << endl;

    cout <<fixed<< setprecision(2);
    cout << "Nome 1 = " << nome1 << endl;
    cout << "Salario 1 = " << salario1 << endl;
    cout << "Idade 1 = " << idade1 << endl;
    cout << "Sexo 1 = " << sexo1 << endl;

    cout << "" << endl;

    cout <<fixed<< setprecision(2);
    cout << "Nome 2 = " << nome2 << endl;
    cout << "Salario 2 = " << salario2 << endl;
    cout << "Idade 2 = " << idade2 << endl;
    cout << "Sexo 2 = " << sexo2 << endl;

}