struct Posicion
{
    int x;
    int y;
};

class Pieza
{
private:
    char tipoPieza;
    int estadoRotacion;
    Posicion coordenada;
public:
    Pieza(/* args */);
    Pieza(int x, int y, int estadoRota, char tipo);
    void verDatos();

    ~Pieza();
};

