#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int hora;

    int para = 0;

    

    while(para == 0){

        cout << "Digite uma hora do dia" << endl;
        cin >> hora;

        if(hora < 12){
            cout << "Bom dia" << endl;
            
        }else if(hora >= 12 && hora < 18){
            cout << "Boa tarde" << endl;
            
        }else if(hora >= 25){
            cout << "Hora invalida" << endl;
            para = 1;

        }else{
            cout << "Boa Noite" << endl;
            
        }

    }

    return 0;

}














//codigo da professora//



// #include <stdio.h>

// int main () {

//   int hora;

//   printf ("Digite uma hora do dia: ");
//   scanf ("%d", &hora);

//   while (hora < 25) {

//       if (hora < 12) {
//           printf ("Bom dia!\n");
//       }
	  
//       else if (hora < 19) {
// 	       printf ("Boa tarde!\n");
// 	  }
      
//       else {
// 	       printf ("Boa Noite!\n");
// 	  }
	  
// 	  printf("\nDigite outra hora do dia: ");
// 	  scanf ("%d", &hora);
//     }
    
//      printf("\nHorário digitado é inválido!");

//   return 0;

// }