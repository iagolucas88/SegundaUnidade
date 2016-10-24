#include "Screen.h"
#include "Reta.h"
#include "Point.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen(int nlin, int ncol)
{
    nl = nlin, nc = ncol;
    mat = vector < vector<char> >(nl+1, vector<char>(nc+1));
    desenho = 'X';

    for(int i = 0; i<nl; i++){
        for(int j = 0; j<nc; j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::apagar(){
    for(int i; i<nl; i++){
        for(int j; j<nc; j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::setDesenho(char desenhoo){
    desenho = desenhoo;
}

void Screen::setPixel(int x, int y){
    xn = x;
    yn = y;

    mat[xn][yn]= desenho;
}

void Screen::desenhar(){
    cout << "  ";
    for(int i=0;i<nc;i++){
        if(i<=9)
            cout<<"0"<<i<< " ";
        else
            cout<<i<< " ";
    }
    cout << endl;

    for (int i=0; i<nl+1; i++){
        for (int j=0; j<nc+1; j++){
            if(j==0 && i>=0 && i <= 9){
                cout <<"0"<< i<< " ";
            }
            else if(j==0 && i>=0){
                cout << i<<" ";
            }
             cout << mat[j][i] << "  ";

        }cout << endl;
    }
}
/*
friend ostream& operator<<(ostream &os, const Screen &t){
    os << t.desenhar();
    return os;
}*/
