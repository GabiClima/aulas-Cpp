#include <bits/stdc++.h>

using namespace std;

int main(){

   float preco, dinheiro, troco, resto;
   int quantidade;

   cout << "Preco unitario do produto: ";
   cin >> preco;
   cout << "Quantidade comprada: ";
   cin >> quantidade;
   cout << "Dinheiro recebido: ";
   cin >> dinheiro;

   if(dinheiro >= (preco * quantidade) ){
       troco = dinheiro - preco * quantidade;
       cout << fixed << setprecision(2);
       cout << "Troco" << troco;
   }else{
       resto = preco * quantidade - dinheiro;
       cout << fixed << setprecision(2);
       cout << "Dinheiro insuficiente, faltam " << resto << "reais";

   }


}