#include "Screen.h"
#include "FiguraGeometrica.h"
#include "Reta.h"
#include "Retangulo.h"
#include "Circulo.h"
#include <vector>

using namespace std;

int main(){
    Screen d(20,20);
    //Reta r(0,0,18,18);
    //Retangulo r(2,2,15,15);
    Circulo r(10,10,7,1);
    //r.posic();
    d.setDesenho('X');
    r.draw(d);
    d.desenhar();
    return 0;
}
