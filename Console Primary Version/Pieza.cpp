#include "Pieza.h"
#include <iostream>

Pieza::Pieza(int x, int y, int estadoRota, char tipo)
{
    coordenada.x = x;
    coordenada.y = y;
    estadoRotacion = estadoRota;
    tipoPieza = tipo;


}

Pieza::Pieza()
{
    coordenada.x = 7;
    coordenada.y = 13;
    estadoRotacion = 0;
    tipoPieza = 'O';


}

void Pieza::verDatos(){
    std::cout<<"Posicion"<< "["<<coordenada.x <<","<<coordenada.y<<"]"<<std::endl;
    std::cout<<"Tipo "<< tipoPieza<<std::endl;
    std::cout<<"Estado Rotacion" << estadoRotacion<<std::endl;
}

Pieza::~Pieza()
{
}
