#include <iostream>
#include <cmath>
#include "Reta.h"
#include "Point.h"
#include "Screen.h"

using namespace std;

Point p1, p2;

Reta::Reta(int x1, int y1, int x2, int y2){
    p1.setXY(x1,y1);
    p2.setXY(x2,y2);
}

void Reta::posic(){
    cout << "Ponto Inicial: ";
    p1.imprimir();
    cout << "Ponto Final: ";
    p2.imprimir();
    cout << endl;
}

void Reta::draw(Screen &t){
    x1 = p1.getX();
    y1 = p1.getY();
    x2 = p2.getX();
    y2 = p2.getY();

    nl = abs(y2-y1) + 1;
    nc = abs(x2-x1) + 1;


    if(x1 < x2 && y1 == y2){
        for(int i = x1; i <= x2; i++){
            t.setPixel(i,y1);
        }
    }

    else if(x1 > x2 && y1 == y2){
        for(int i = x2; i <= x1; i++){
            t.setPixel(i,y1);
        }
    }

    else if(y1 < y2 && x1 == x2){
        for(int i = y1; i <= y2; i++){
            t.setPixel(x1,i);
        }
    }

    else if(y1 > y2 && x1 == x2){
        for(int i = y2; i <= y1; i++){
            t.setPixel(x1,i);
        }
    }

    else if(x1 < x2 && y1 < y2){
            for(int i = x1; i <= x2; i++){
                for(int j = y1; j <= y2; j++){
                    if(i == j)
                        t.setPixel(i,j);
                }
            }
    }

    else if(x1 > x2 && y1 > y2){

            for(int i = x2; i <= x1; i++){
                for(int j = y2; j <= y1; j++){
                    if(i == j)
                        t.setPixel(i,j);
                }
            }
    }

    else if(x1 < x2 && y1 > y2){
            for(int i = x1; i <= x2; i++){
                for(int j = y1; j >= y2; j--){
                        t.setPixel(i,j);
                        y1--;
                        break;
                }
            }
    }

    else if(x1 > x2 && y1 < y2){
            for(int i = y1; i <= y2; i++){
                for(int j = x1; j >= x2; j--){
                        t.setPixel(j,i);
                        x1--;
                        break;
                }
            }
    }
}
