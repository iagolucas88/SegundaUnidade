#ifndef RETANGULO_H
#define RETANGULO_H
#include "Point.h"
#include "Screen.h"
#include "Reta.h"


class Retangulo
{
private:
  Point r1, r2, r3, r4;
  int posx, posy, larg, alt;

public:
    Retangulo(int rx, int ry, int l, int a);
    void draw(Screen &t);
};

#endif // RETANGULO_H
