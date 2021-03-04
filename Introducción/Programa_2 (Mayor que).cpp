#include<iostream>

using namespace std;

void Mayor (int a, int b);

int main(){

    int N1,N2;

    cout<<"Introduzca el valor del primer numero: ";
    cin>>N1;
    cout<<endl<<"Introduzca el valor del segundo numero: ";
    cin>>N2;

    Mayor(N1,N2);

    return 0;

}

void Mayor (int a, int b){

     if(a>b){
        cout<<endl<<a<<" Es mayor que "<<b;
     }
     else if (a<b){
        cout<<endl<<b<<" Es mayor que "<<a;
     }
     else {
        cout<<endl<<"Error";
     }


}
