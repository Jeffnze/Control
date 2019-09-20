#include <iostream>

using namespace std;
//Jeff Zapana Enriquez
int main()
{
    int a;
    a = 0;
    int b;
    b = 0;
    cout<<"Rango de busqueda: ";
    cin>>b;
    for(int i=1;i<= b;i++){
        if(i%2==0){
            for(int j=(i/2);j>=1;j--){
                if(i%j==0){
                    a=a+j;
                }
            }
    }
    if(a==i)
        cout << a << " Es un numero perfecto "<<endl;
    a=0;
    }
    cout<< "Un numero perfecto es un numero natural que es igual a la suma de sus divisores propios positivos. Dicho de otra forma, un numero perfecto es aquel que es amigo de si mismo"<<endl;
    return 0;
}
