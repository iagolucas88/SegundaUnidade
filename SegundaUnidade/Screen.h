#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include "Point.h"

using namespace std;

class Screen
{
    public:
        Screen(int nlin, int ncol);
        void apagar();
        void setDesenho(char desenhoo);
        void setPixel(int x, int y);
        void desenhar();

    private:
        int xn, yn, nc, nl;
        char desenho;
        vector < vector<char> > mat;
};

#endif // SCREEN_H
