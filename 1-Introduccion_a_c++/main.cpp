#include<iostream>
#include<string>
using namespace std;

void suma(int num1, int num2);
int resta(int num1, int num2);

int main(){
    //numeros enteros
    int numUno = -3;
    int numDos = 5;
    
    //numeros con decimales
    float numFloat = -2.3f;
    double numDouble = 3.5;

    //caracteres
    char caracter = 'A';

    //cadena de caracteres
    string hello = "Hellouda World";

    //booleanos
    bool condicion = true;

    //imprimir texto
    cout << hello + "\n";

    //llamar a funcion sin retorno de valor
    suma(numUno, numDos);
    suma(2, 4);

    //llamar a funcion con retorno de valor
    int res = resta(numUno, numDos);
    cout << "la resta de los dos numeros es " + to_string(res) + "\n";

    return 0;
}

//funcion sin retorno de valor
void suma(int num1, int num2){
    //operadores aritmeticos
    int suma = num1 + num2;

    //cambiar a texto
    cout << "la suma de los dos numeros es: " + to_string(suma) + "\n";
}

//funcion con retorno de valor
int resta(int num1, int num2){
    int resta = num1 - num2;

    return resta;
}