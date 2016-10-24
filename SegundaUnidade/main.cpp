#include <iostream>
#include "Screen.h"
#include "FiguraGeometrica.h"
#include "Reta.h"
#include "Retangulo.h"
#include <vector>

using namespace std;

int main(){
    //dim x y
    Screen d(20,20);

    //brush X
    d.setDesenho('X');

    //line x0 y0 x1 y1
    Reta r(0,0,18,18);

    //rectangle x0 y0 largura altura
    //Retangulo r(0,0,7,11);

    //circle x0 y0 raio fillmode
    //

    //Posicao do(s) Ponto(s)
    //r.posic();

    //Desenha Matriz
    d.desenhar();

    //Desenha Figura
    r.draw(d);

    //cout << r;
    return 0;
}

