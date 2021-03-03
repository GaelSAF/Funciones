#include<iostream>

using namespace std;

void area (int a);

int main(){

    int radio;

    cout<<"Este programa calcula el area de un circulo. "<<endl<<endl;
    cout<<"Introduzca el area del circulo: ";

    cin>>radio;                                                         //Guardamos el valor del radio en la variable con el mismo nombre

    area(radio);                                                        //Llamamos a la funcion que creamos (area) e indicamos que se va a
                                                                        //aplicar su funcion a la variable radio

    return 0;

}

void area (int A){                                                      //"int A" va a reemplazar la variable radio

    int B=3.1416*A*A;

    cout<<endl<<"El resultado es: "<<B<<endl;
}
