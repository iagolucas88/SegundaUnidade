#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Screen.h"


class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual void posic()=0;
        virtual void draw(Screen&t)=0;


    private:

};

#endif // FIGURAGEOMETRICA_H
