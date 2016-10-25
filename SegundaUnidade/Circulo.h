#ifndef CIRCULO_H
#define CIRCULO_H
#include "Point.h"
#include "Screen.h"


class Circulo
{
    public:
        Circulo(int x,int y,int raio,int mode=0);
        void posic();
        void draw(Screen &t);
    private:
        Point p;
        int x, y, r, modo;
};

#endif // CIRCULO_H
