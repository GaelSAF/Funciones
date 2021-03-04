#include<iostream>

using namespace std;

void SUMA(int a, int b);

int main(){

    int N1,N2;

    cout<<"Introduzca el valor del primer dato: ";
    cin>>N1;
    cout<<endl<<"Introduzca el valor del segundo dato: ";
    cin>>N2;

    SUMA(N1,N2);

    return 0;
}

void SUMA (int a, int b){

     int c= a+b;

     cout<<endl<<"El resultado de la suma entre "<<a<<" y "<<b<<" es "<<c;

}
