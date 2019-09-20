#include <iostream>

using namespace std;
//EJERCICIO 2
//Jeff Zapana Enriquez
int main()
{
   int i;
   int factorial;
   factorial = 1;
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   if(numero<0){
        factorial =0;}
   else{
        if(numero==0){
            factorial=1;}

        else{
            for (i = 1; i <= numero; i++){
                factorial=factorial*i;
              }
           }
   }
   cout<<"Su factorial es: "<< factorial;
    return 0;
}
