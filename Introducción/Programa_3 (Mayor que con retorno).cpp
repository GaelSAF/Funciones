#include<iostream>

using namespace std;

int Mayor (int a, int b);

int main(){

    int N1,N2,N3,Max1,Max2;

    cout<<"Introduzca el valor del primer numero: ";
    cin>>N1;
    cout<<endl<<"Introduzca el valor del segundo numero: ";
    cin>>N2;
    cout<<endl<<"Introduzca el valor del tercer numero: ";
    cin>>N3;

    Max1=Mayor(N1,N2);
    Max2=Mayor(Max1,N3);

    cout<<endl<<"El numero mas grande es: "<<Max2;

    return 0;

}

int Mayor (int a, int b){

     int c;

     if(a>b){
        c=a;
     }
     else {
        c=b;
     }
    return c;
}
