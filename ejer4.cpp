#include <iostream>

using namespace std;
//Jeff Zapana Enriquez
int main()
{
    long long int i;
    long long int resultado;
    long long int maximo;
    maximo = 600851475143;
    int num;
    for(i=2;i<maximo;i=i+1){
       if(maximo%i == 0){
           maximo = maximo/i;
           i = 2;
        }
    }
    cout << "El maximo factor primo de 600851475143 es: " << maximo;
    return 0;
}
