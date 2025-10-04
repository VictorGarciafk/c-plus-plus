#include"caja.h"
#include<iostream>

caja::caja(double newLargo, double newAncho, double newAlto)
{
    largo = newLargo;
    ancho = newAncho;
    alto = newAlto;
}

void caja::verMedidas()
{
    std::cout << "el largo es: " << largo << std::endl;
    std::cout << "el ancho es: " << ancho << std::endl;
    std::cout << "el alto es: " << alto << std::endl;
}
