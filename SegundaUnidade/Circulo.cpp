#include <iostream>
#include "Circulo.h"
#include "FiguraGeometrica.h"
#include "Point.h"
#include "Screen.h"
#include <cmath>

using namespace std;


Circulo::Circulo(int x_, int y_, int raio, int mode){
    x = x_;
    y = y_;
    p.setXY(x,y);
    r = raio;
    modo = mode;
}

void Circulo::posic(){
    cout << "Ponto Central: ";
    p.imprimir();
    cout << "Raio: " << r<< endl;
}

void Circulo::draw(Screen &t){

    x = p.getX();
    y = p.getY();

    for(int i=x-r;i<=(x+r);i++){
        for(int j=y-r;j<=(y+r);j++){

            float aux = (pow((i-x),2) + pow((j-y),2));
            aux = (pow(aux,0.5));
            if(modo==0){
                if((int)aux==r){
                    t.setPixel(i,j);
                }
            }else if(modo>0){
                if((int)aux<=r){
                    t.setPixel(i,j);
                }
            }
        }
    }

}
