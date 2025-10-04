#include<iostream>
#include<string>

using namespace std;

void condicionales();
void bucles();
void vector();

int main(){

    //condicionales();
    //bucles();
    vector();
    
    return 0;
}

void condicionales(){
    bool condicional = false;
    int num = 20;

    if (condicional == true)
    {
        cout << "la condicional es verdadera\n";
    }else{
        cout << "la condicional es falsa\n";
    }
    
    if (num >= 20 && condicional == true)
    {
        cout << "el numero es mayor o igual a 20 y la condicional es true\n";
    }else{
        cout << "el numero es menor que 20 o la condicional es falsa\n";
    }
}

void bucles(){
    //While
    int i = 0;
    while (i < 100){
        cout << to_string(i) << "\n";
        i++;
    }

    i = 0;
    cout << "\n";
    
    //dowhile
    do{
        cout << to_string(i) << "\n";
        i++;
    }while(i <= 100);

    cout << "\n";

    //for
    for (i = 0; i < 10; i++)
    {
        cout << to_string(i) << "\n";
    }
    
}

void vector(){
    int num[5] = {1,2,3,4,5};
    int num2[] = {1,2,3,4,5,6,7,8,9,10};

    string nombres[5] = {"Roberto","Maria","Marcos","Eduarto","Pepe"};

    int nombreLong = sizeof(nombres) / sizeof(num[0]);

    /*for (int i = 0; i < nombreLong; i++)
    {
        cout << nombres[i] << "\n";
    }*/

    //foreach
    for(string nombre : nombres){
        cout << nombre << "\n";
    }
}