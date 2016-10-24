#ifndef RETA_H
#define RETA_H
#include "FiguraGeometrica.h"
#include "Point.h"
#include "Screen.h"


class Reta
{
    public:
        Point p1, p2;
        int x1, x2, y1, y2;
        Reta(int x1, int y1, int x2, int y2);
        void posic();
        void draw(Screen &t);

    private:
        int nc, nl, px1, px2;
};

#endif // RETA_H
