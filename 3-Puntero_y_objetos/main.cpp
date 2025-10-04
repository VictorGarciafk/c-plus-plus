#include<iostream>
#include<string>
#include "caja.h"

using namespace std;

void punteros();
void suma(int *x);
void objetos();

int main(){

    int x;
    //punteros();
    objetos();

    return 0;
}

//punteros
void punteros(){
    int x = 5;
    int* px = &x;

    /*cout << "el valor de X es: " << x << "\n";*/
    cout << "el valor de X es: " << *px << "\n";

    /*cout << "la direccion de memoria de X es:" << &x << "\n";*/
    cout << "la direccion de memoria de X es:" << px << "\n";

    //x++
    suma(&x);

    cout << "el nuevo valor de X es: " << *px << "\n";
}

void suma(int *x){
    *x = *x +1;
}

//objetos
void objetos(){
    caja miCaja(5.9, 7.8, 6.8);

    miCaja.verMedidas();
}