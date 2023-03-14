#include <iostream>
#include "Pieza.cpp"
using namespace std;

int main()
{
    Pieza p1, p2(2,2, 0, 'T');

    cout<<"Hola Mundo"<<endl;
    p2.verDatos();
    return 0;
}