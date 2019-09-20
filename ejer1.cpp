#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d, e;
    a=0;
    b=0;
    c=1;
    d=0;
    e=1;
    while(a<1000000){
        a=c*3;
        c=c+1;
        //cout<<a<<endl;
    }
    while(b<1000000){
        b=e*5;
        e=e+1;
        //cout<<b<<endl;
    }
    d=a+b;
    cout<<d<< " es la suma de los multiplos  de 3 y 5"<<endl;
    return 0;
}
