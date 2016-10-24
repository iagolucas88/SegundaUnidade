#include "Retangulo.h"
#include "FiguraGeometrica.h"
#include "Point.h"
#include "Screen.h"
#include "Reta.h"


Retangulo::Retangulo(int rx, int ry, int l, int a)
{
    posx = rx;
    posy = ry;
    larg = l;
    alt = a;
}

void Retangulo::draw(Screen &t){

    for(int i = posx; i <= (posx+larg); i++){
        t.setPixel(i,posy);
    }

    for(int i = posy; i <= (posy+alt); i++){
        t.setPixel((posx+larg),i);
    }

    for(int i = (posx+larg); i >= (posx); i--){
        t.setPixel(i,posy+alt);
    }

    for(int i = (posy+alt); i >= (posy); i--){
        t.setPixel(posx,i);
    }

}
