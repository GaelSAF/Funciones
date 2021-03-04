#include<iostream>

using namespace std;

int Factorial (int a);

int main(){

    int N1, fact;

    cout<<"Introduzca su valor a calcular: ";
    cin>>N1;
    fact=Factorial(N1);
    cout<<endl<<"El resultado es: "<<fact;
    return 0;
}

int Factorial (int a){
    int i;
    int resultado=1;
    for (i=1;i<=a;i++){
         resultado*= i;
    }
    return resultado;
}
